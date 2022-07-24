#include "stdafx.h"
#include "lbg_algorithm.h"
#include <windows.h>
#include <Math.h>
#include <cstdio>

#define SAMPLES_IN_FRAME 320
#define FRAMES 150
#define STABLE_FRAME_FACTOR 0.005
#define P 12
#define TRAINING 0
#define TESTING 1
#define LIVE_TESTING 2
#define USE_PROVIDED_CODEBOOK 0
#define USE_PERSONAL_CODEBOOK 1
#define DEFAULT_MODEL 0
#define CUSTOM_MODEL 1

double frame_data[SAMPLES_IN_FRAME*FRAMES];		// stores samples of speech frames of a recording of a digit
double test_data[SAMPLES_IN_FRAME];				// Stores samples of a frame

const char INPUT_PATH[] = "input_file.txt";

// Arrays to store the computer A, R, C
double R[P+1], C[FRAMES][P+1], AA[P];

// Code Book
double codebook[32][12];

// Personal Universe Path
const char UNIVERSE_PATH[] = "personal_universe.txt";

// Codebook paths
const char PERSONAL_CODEBOOK_PATH[] = "personal_codebook.txt";
const char PROVIDED_CODEBOOK_PATH[] = "provided_codebook.txt";

int OBS_SEQ_GEN[FRAMES];



// Function to Calculate R vector for a frame of 320 samples
void calculate_R(){
	for(int i=0;i<P+1;i++){
		R[i] = 0;
		for(int j = 0; j < SAMPLES_IN_FRAME-i ; j++){
			R[i] += test_data[j] * test_data[i+j];
		}
	}
}



// Function to Calculate A vector for a frame of 320 samples
void calculate_A(){
	double E = R[0], sum;
	double A_prev[P];
	double k = 0;
	for(int i=0;i<P;i++)
		A_prev[i] = 0;
	for(int i=1;i<=P;i++){
		sum = 0;
		for(int j = 1; j <= i-1 ; j++){
			sum += A_prev[j-1] * R[i-j];
		}
		k = (R[i] - sum)/E;
		AA[i-1] = k;
		E = (1-k*k)*E;
		for(int j = 1; j <= i-1; j++)
			AA[j-1] = A_prev[j-1] - k*A_prev[i-j-1];
		for(int j=0;j<P;j++)
			A_prev[j] = AA[j];
	}
}

// Function to Calculate C vector for a frame of 320 samples
void calculate_C(int frame){
	double sigma = R[0], sum=0;
	C[frame][0] = log(sigma * sigma);
	for(int m=1;m<=P;m++){
		sum = 0;
		for(int k=1;k<=m-1;k++){
			sum += k*C[frame][k]*AA[m-k-1]/m;
		}
		C[frame][m] = AA[m-1] + sum;
	}
}

// This is a function to skip meta data which might be present in the beginning of recordings obtained via Cool Edit.
void skip_metadata(FILE *fptr){
	fseek(fptr, 0, SEEK_SET);
	int i=0;
	char data[200]; 
	int flag = 0;
	while(i++<10 &&(fscanf(fptr,"%s", data)) != EOF){
		if(flag == 0 && ((data[0] != '-') && (data[0] < '0' || data[0] > '9')))
			flag = 1;
	}
	// If there is no metadata, seek to the beginning of the file
	if(flag == 0)
		fseek(fptr, 0, SEEK_SET);
}

void skip_initial_10_frames(FILE *fptr){
	fseek(fptr, 0, SEEK_SET);
	int count = 0;
	double data;
	while((fscanf(fptr,"%lf", &data)) != EOF && count<10*SAMPLES_IN_FRAME){
		count++;
	}
}

void copy_to_test_data(int f){
	for(int i=0;i<SAMPLES_IN_FRAME;i++)
		test_data[i] = frame_data[f*SAMPLES_IN_FRAME+i];
}

// This is a function to extract stable frames from a recording which will be used for prediction. This also normalises the samples.
int extract_stable_frame_data(int digitNumber, int utterance, int choice, int model){
	for(int i=0;i<SAMPLES_IN_FRAME*FRAMES;i++)
		frame_data[i] = 0;
	
	FILE *fptr;
	char filename[300], filename2[300];
	filename[0] = '\0';
	filename2[0] = '\0';
	if(choice == TRAINING && model == DEFAULT_MODEL){
		sprintf(filename,"default_model/recordings/%d/obs_%d.txt",digitNumber,utterance+1);
		sprintf(filename2,"default_model/recordings/extracted_frames/%d/obs_%d.txt",digitNumber,utterance+1);
	}
	else if(choice == TRAINING && model == CUSTOM_MODEL){
		sprintf(filename,"custom_model/recordings/%d/obs_%d.txt",digitNumber,utterance+1);
		sprintf(filename2,"custom_model/recordings/extracted_frames/%d/obs_%d.txt",digitNumber,utterance+1);
	}
	else if(choice == TESTING){
		sprintf(filename,"testing/%d/obs_%d.txt",digitNumber,utterance+1);
		sprintf(filename2,"testing/extracted_frames/%d/obs_%d.txt",digitNumber,utterance+1);
	}
	else if(choice == LIVE_TESTING){
		sprintf(filename,"live_testing/recordings/live_test.txt");
		sprintf(filename2,"live_testing/recordings/live_test_extracted_frames.txt");
	}
	printf("%s\n",filename);
	if ((fptr = fopen(filename,"r")) == NULL){
		printf("Error! opening file");
	}
	skip_initial_10_frames(fptr);
	//normalise
	double max=0,min=0,abs_max;
	double data;
	int count=0,frames=0;
	double sum=0,energy=0;
	while((fscanf(fptr,"%lf", &data)) != EOF){
		if(data>max)
			max = data;
		if(data<min)
			min = data;
		sum += data*data;
		count++;
		if(count == 320){
			frames++;
			energy += sum/320;
			sum = 0;
			count = 0;
		}
	}
	energy = energy/frames;

	if(-1*min > max)
		abs_max = -1*min;
	else
		abs_max = max;

	//go to begining
	skip_initial_10_frames(fptr);
	sum = 0;
	int no_of_frames = 0;
	int index = -1;
	int flag = 0;
	double first_frame[320];
	count = 0;
	int move_till_end = 0;
	while((fscanf(fptr,"%lf", &data)) != EOF){
		if(flag == 0){
			sum += data*data;
			first_frame[count] = (data/max)*5000;
			count++;
			if(count == 320){
				sum = sum/320;
				if(sum > STABLE_FRAME_FACTOR*energy){
					flag = 1;
					index = 0;
					for(index=0;index<320;index++)
						frame_data[index] = first_frame[index];
					no_of_frames++;
				}
				sum = 0;
				count = 0;
			}
		}
		else if(flag == 1 || move_till_end == 1){
			sum += data*data;
			count++;
			if(count == 320){
				sum = sum/320;
				no_of_frames++;
				if(sum < STABLE_FRAME_FACTOR*energy){
					if(no_of_frames>5)
						flag = 2;
					else
						move_till_end = 1;
				}
				sum = 0;
				count = 0;
			}
			frame_data[index++] = (data/max)*5000;
		}
		if(flag == 2 || index == SAMPLES_IN_FRAME*FRAMES)
			break;
	}
	fclose(fptr);
	if ((fptr = fopen(filename2,"w")) == NULL){
		printf("Error! opening file");
	}
	for(int i=0;i<SAMPLES_IN_FRAME*no_of_frames;i++){
		fprintf(fptr,"%lf\n",frame_data[i]);
	}
	fclose(fptr);
	return no_of_frames;
}

// Function to compute C vectors of the frames of all recordings.
void populate_C(int no_of_frames){
	double sum;
	for(int j=0;j<no_of_frames;j++){
		copy_to_test_data(j);
		calculate_R();
		calculate_A();
		calculate_C(j);
		// Raised Sine window to C vector
		for(int l = 0;l<P+1;l++){
			if(l>=1){
				C[j][l] *= (1 + P*sin(3.14*l/P)/2);
			}
		}
	}
}

int read_codebook(int choice){
	FILE *fptr;
	char line[1024];
	char *ptr;
	int count = 0;

	// Open provided_codebook.txt file 
	if(choice == USE_PROVIDED_CODEBOOK){
		if ((fptr = fopen(PROVIDED_CODEBOOK_PATH,"r")) == NULL){
			printf("Error! opening file");
			return(1);
		}
	}else{
		if ((fptr = fopen(PERSONAL_CODEBOOK_PATH,"r")) == NULL){
			printf("Error! opening file");
			return(1);
		}
	}

	count = 0;

	// Read the Universe.csv file line by line
	while (fgets(line, 1024, fptr)){
		char *token;
 
		// get the first token
		token = strtok(line, "\t");
   
		// walk through other tokens
		for(int i=0;i<12;i++){
			codebook[count][i] = strtod(token, &ptr);
			token = strtok(NULL, "\t");
		}
		count++;
	}
	fclose(fptr);
	return 0;
}

void create_personal_codebook(){
	double universe[10000][P];
	FILE *fptr;
	char line[1024];
	char *ptr;
	double code_book[TARGET_CODEBOOK_SIZE][P];

	if ((fptr = fopen(UNIVERSE_PATH,"r")) == NULL){
		printf("Error! opening file");
		return;
	}
	int universe_size = 0;

	while (fgets(line, 1024, fptr)){
		char *token;

		// get the first token
		token = strtok(line, "\t");

		// walk through other tokens
		for(int i=0;i<P;i++){
			universe[universe_size][i] = strtod(token, &ptr);
			token = strtok(NULL, "\t");
		}
		universe_size++;
	}
	fclose(fptr);

	// Run LBG Algorithm to create codebook
	linde_buzo_gray(universe, universe_size, code_book);

	// Write codebook to file
	if ((fptr = fopen(PERSONAL_CODEBOOK_PATH,"w")) == NULL){
		printf("Error! opening file");
		return;
	}
	for(int i=0;i<TARGET_CODEBOOK_SIZE;i++){
		for(int j=0;j<P;j++){
			fprintf(fptr, "%lf\t", code_book[i][j]);
		}
		fprintf(fptr, "\n");
	}
	fclose(fptr);
}

// Function to compute Tokhura's Distance
void produce_observation_sequence(int no_of_frames){
	//calculating Tokhura's Distance
	double sum = 0, TD[32];
	//for each frame
	for(int i=0;i<no_of_frames;i++){
		// for each codebook entry
		for(int j=0;j<32;j++){
			TD[j] = 0;
			for(int k = 1;k<P+1;k++){
				TD[j] += w[k-1] * (C[i][k]-codebook[j][k-1])*(C[i][k]-codebook[j][k-1]);
			}
		}
		int index = 0;
		for(int j=0;j<32;j++){
			if(TD[j] < TD[index]){
				index = j;
			}
		}
		OBS_SEQ_GEN[i] = index+1;
	}
}

