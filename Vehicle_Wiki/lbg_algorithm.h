#include "stdafx.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define P 12
#define TARGET_CODEBOOK_SIZE 32
#define DELTA_VALUE 0.0001
#define EPSILON 0.03

// Tokhura's Weights
int w[] = {1,3,7,13,19,22,25,33,42,50,56,61};

// A structure which stores the information about each region/cluster/bucket
struct region_info{
	double distortion; // Stores Average Distortion
	int count; // Stores number of elements in a region
	double centroid[P]; // Stores the centroid of a region
};

// Computes the Tokhura's Distance
double calculate_tokhura(double universe[][P], int universe_index, double code_book[][P], int code_book_index){
	double tokhuras_distance = 0;
	for(int i=0;i<P;i++){
		double diff = universe[universe_index][i] - code_book[code_book_index][i];
		tokhuras_distance += w[i] * diff * diff;
	}
	return tokhuras_distance;
}

// Finds out the index of the region to which an element of the universe belongs.
int get_region(double universe[][P], int universe_index, double code_book[][P], int code_book_size){
	int nearest_index = 0;
	double nearest_distance = 0;
	nearest_distance = calculate_tokhura(universe, universe_index, code_book, 0);
	double current_distance = 0;
	for(int i=0;i<code_book_size;i++){
		current_distance = calculate_tokhura(universe, universe_index, code_book, i);
		if(current_distance < nearest_distance){
			nearest_distance = current_distance;
			nearest_index = i;
		}
	}
	return nearest_index;
}

// Adds an element to a region 
void add_element_to_region(double universe[][P], int universe_index, double code_book[][P], int region_index, struct region_info regions[]){
	regions[region_index].count++;
	regions[region_index].distortion += calculate_tokhura(universe, universe_index, code_book, region_index);
	for(int i=0;i<P;i++)
		regions[region_index].centroid[i] += universe[universe_index][i];
}

// Finds out the absolute value of a double value
long double absolute(long double a){
	if(a<0)
		return -a;
	return a;
}

// Initialise the codebook with random vectors from the universe
void initialise_code_book(double universe[][P], int universe_size, double code_book[][P], int code_book_size){
	int index;
	srand(time(0));
	for(int i = 0; i<code_book_size; i++){
		index = rand()%universe_size;
		for(int j=0;j<P;j++)
			code_book[i][j] = universe[index][j];
	}
}

// Function to implement k-means algorithm. The value returned is the distortion.The code book at the end is modified.
long double k_means(double universe[][P], int universe_size, double code_book[][P], int code_book_size){
	int m = 0;
	long double dist=0, distortion=0;
	struct region_info regions[TARGET_CODEBOOK_SIZE];

	// Start allocating regions
	m = 0;
	while(true){
		dist = 0;
		// Initialise regions array
		for(int i=0;i<code_book_size;i++){
			regions[i].distortion = regions[i].count = 0;
			for(int j=0; j<P;j++)
				regions[i].centroid[j] = 0;
		}

		// Find regions to which an element of the universe belongs to
		for(int i=0;i<universe_size;i++){
			int index = get_region(universe, i, code_book, code_book_size);
			// Add element universe[i] to regions[index]
			add_element_to_region(universe,i,code_book,index,regions);
		}
		
		// Find Average Distortion
		for(int i=0;i<code_book_size;i++)
			dist += regions[i].distortion;
		dist /= universe_size;

		// Find Centroid of the region and update code_book
		for(int i=0;i<code_book_size;i++)
			for(int j=0;j<P;j++){
				regions[i].centroid[j] /= regions[i].count;
				code_book[i][j] = regions[i].centroid[j];
			}

		// Exit condition
		if(m != 0 && absolute(distortion-dist) < DELTA_VALUE)
			break;

		// Store distortion
		distortion = dist;
		m++;
	}
	return dist;
}

// Function to implement LBG algorithm. The value returned is the distortion.The code book at the end is modified.
long double linde_buzo_gray(double universe[][P], int universe_size, double code_book[][P]){
	long double sum = 0;
	int code_book_size = 0;
	long double distortion = 0;

	// Initialise code book of size one by finding centroid of the universe
	code_book_size = 1;
	for(int i=0;i<P;i++){
		sum = 0;
		for(int j=0;j<universe_size;j++)
			sum += universe[j][i];
		code_book[0][i] = sum/universe_size;
	}

	// Evaluate and modify code book till its size reaches TARGET_CODEBOOK_SIZE
	while(code_book_size < TARGET_CODEBOOK_SIZE){
		// Doubling size of code_book
		for(int i=0;i<code_book_size;i++){
			for(int j=0;j<P;j++){
				code_book[code_book_size+i][j] = code_book[i][j]*(1+EPSILON);
				code_book[i][j] = code_book[i][j]*(1-EPSILON);
			}
		}
		code_book_size *= 2;

		// Call k_means algorithm to get the best set of the centroids for double sized codebook
		distortion = k_means(universe, universe_size, code_book, code_book_size);
	}
	return distortion;
}