#pragma once

#include "hmm_problem.h"
#include "Instructions.h"
#include "About.h"

namespace vehicle_project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::TextBox^  textBox5;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  enableDeveloperModeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enableDeveloperModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(12, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(776, 608);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(768, 582);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Vehicle Search";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->richTextBox1);
			this->groupBox4->Controls->Add(this->pictureBox1);
			this->groupBox4->Location = System::Drawing::Point(26, 155);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(720, 404);
			this->groupBox4->TabIndex = 1;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Information";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(261, 38);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(436, 337);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"Hi! This is your own wikipedia, you can start searching by recording!!";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"item_data\\images\\mickey.png";
			this->pictureBox1->Location = System::Drawing::Point(25, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(216, 214);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(26, 25);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(720, 111);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Record";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(288, 71);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(96, 17);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->Text = L"My Own Model";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(161, 71);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(91, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Default Model";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(449, 41);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(117, 20);
			this->textBox3->TabIndex = 2;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::MidnightBlue;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(44, 27);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 47);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(345, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Searched Word";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(768, 582);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Model Training";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(14, 479);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(735, 87);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Model Updation";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(30, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Update Model";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(164, 30);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(144, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Recreate Default Model";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->richTextBox2);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Enabled = false;
			this->groupBox1->Location = System::Drawing::Point(14, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(735, 448);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Recording";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(332, 56);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(178, 17);
			this->radioButton4->TabIndex = 27;
			this->radioButton4->Text = L"Add new words to custom model";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Location = System::Drawing::Point(332, 34);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(217, 17);
			this->radioButton3->TabIndex = 26;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Create a new custom model from scratch";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(233, 60);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Add";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Add a word";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(569, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Words present in database";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox2->Location = System::Drawing::Point(589, 57);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(100, 159);
			this->richTextBox2->TabIndex = 22;
			this->richTextBox2->Text = L"Bike\nBoat\nBus\nCar\nPlane\nTonga\nShip\nJeep\nVan\nJet";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(106, 60);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(120, 20);
			this->textBox5->TabIndex = 21;
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(356, 164);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 18;
			this->button8->Text = L"Plot";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// chart1
			// 
			this->chart1->BorderlineColor = System::Drawing::Color::Silver;
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->chart1->Location = System::Drawing::Point(33, 254);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(680, 166);
			this->chart1->TabIndex = 17;
			this->chart1->Text = L"chart1";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(85, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(85, 174);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Count";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(151, 110);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Reset Form";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(18, 110);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(89, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Start Recording";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Utterances";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(106, 34);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 9;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 174);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Word";
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(356, 203);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Play";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(215, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Record";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->menuToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(800, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->enableDeveloperModeToolStripMenuItem, 
				this->helpToolStripMenuItem, this->aboutToolStripMenuItem});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// enableDeveloperModeToolStripMenuItem
			// 
			this->enableDeveloperModeToolStripMenuItem->CheckOnClick = true;
			this->enableDeveloperModeToolStripMenuItem->Name = L"enableDeveloperModeToolStripMenuItem";
			this->enableDeveloperModeToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->enableDeveloperModeToolStripMenuItem->Text = L"Enable Developer Mode";
			this->enableDeveloperModeToolStripMenuItem->CheckStateChanged += gcnew System::EventHandler(this, &Form1::enableDeveloperModeToolStripMenuItem_CheckStateChanged);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 649);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"My Vehicle Wikipedia";
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 NO_OF_ITEMS = NO_ITEMS_CUSTOM;
				 groupBox3->Enabled = false;
				 numericUpDown1->Enabled = false;
				 button6->Enabled = false;
				 button2->Enabled = false;
				 radioButton3->Enabled = false;
				 radioButton4->Enabled = false;
				 textBox5->Enabled = false;
				 button9->Enabled = false;

				 VAR_TRAINING_UTTERANCES = (System::Int32)(numericUpDown1->Value);
				 current_item = NO_ITEMS_ALREADY_PRESENT;
				 current_utterance = 0;

				 if(current_item < NO_ITEMS_CUSTOM){
					 button1->Enabled = true;
					 textBox1->Text = ""+ gcnew String(list_items_custom[current_item]);
					 textBox2->Text = ""+(current_utterance+1);

					 //Show Message Instruction
					 String^ message = "You have to speak " + VAR_TRAINING_UTTERANCES + " times for each of the " + (NO_OF_ITEMS-NO_ITEMS_ALREADY_PRESENT) + " words you have selected.";
					 message += "\n\nThe name of the word you have to speak is already mentioned. ";
					 message += "A plot of your recording is shown. You can also play your recording by clicking on the play button. ";
					 message += "Once you have recorded everything necessary, you will be prompted to update the model. ";
					 String^ caption = "Instructions";
					 MessageBox::Show(message, caption);

					 // create folders
					 create_folders_custom_model();
				 }else{
					 button2->Enabled = true;
					 MessageBox::Show("All the recordings have been done. You may proceed with Update Model.", "Information");
				 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 button4->Enabled = false;
			 button8->Enabled = false;
			 record(TRAINING);
			 if(current_utterance == VAR_TRAINING_UTTERANCES-1){ // if all recordings of an item has been completed
				 if(current_item < NO_ITEMS_CUSTOM-1){ // If some items are still left
					current_item++;
					current_utterance = 0;
					textBox1->Text = ""+ gcnew String(list_items_custom[current_item]);
					textBox2->Text = ""+(current_utterance+1);
				 }else if(current_item == NO_ITEMS_CUSTOM-1){ // If all items are also exhausted
					button1->Enabled = false;
					button2->Enabled = true;
					MessageBox::Show("All the recordings have been done. You may proceed with Update Model.", "Information");
				 }
			 }else if(current_utterance < VAR_TRAINING_UTTERANCES-1){ // if recordings of the same item are yet to be completed
				current_utterance++;
				textBox2->Text = ""+(current_utterance+1);;
			 }
			 button4->Enabled = true;
			 button8->Enabled = true;
			 plot_chart();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 button6->Enabled = true;
			 button1->Enabled = false;
			 button4->Enabled = false;
			 button2->Enabled = false;
			 button8->Enabled = false;
			 current_item = 0;
			 current_utterance = 0;
			 textBox1->Text = "";
			 textBox2->Text = "";
			 groupBox3->Enabled = true;
			 numericUpDown1->Enabled = true;
			 textBox5->Enabled = true;
			 textBox5->Text = "";
			 button9->Enabled = true;

			 //reset box of items
			 richTextBox2->Text = "";
			 for(int i=0;i<NO_ITEMS_DEFAULT;i++){
				richTextBox2->Text += gcnew String(list_items_default[i])+"\n";
			 }

			 //reset the items array
			 NO_ITEMS_CUSTOM = NO_ITEMS_DEFAULT;
			 NO_OF_ITEMS = NO_ITEMS_DEFAULT;
			 NO_ITEMS_ALREADY_PRESENT = 0;

			 //clear chart
			 this->chart1->ChartAreas->Clear();
			 this->chart1->Series->Clear();

			 //Check option 1
			 radioButton3->Checked = 1;
			 radioButton3->Enabled = true;
			 radioButton4->Enabled = true;
		 }
// Update Model
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 generate_observation_sequence(TRAINING, CUSTOM_MODEL);
			 
			 // Creating Model
			 for(int i=0;i<NO_ITEMS_CUSTOM;i++)
				converge(i, CUSTOM_MODEL);
			 groupBox3->Enabled = true;

			 //write items to file
			 write_items_to_file();

			 //Show Message Instruction
			 String^ message = "Custom Model has been recreated!";
			 String^ caption = "Instructions";
			 MessageBox::Show(message, caption);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 VAR_TRAINING_UTTERANCES = DEFAULT_TRAINING_UTTERANCES;
			 generate_observation_sequence(TRAINING, DEFAULT_MODEL);

			 // Creating Model
			 for(int i=0;i<NO_ITEMS_DEFAULT;i++)
				converge(i, DEFAULT_MODEL);
			 groupBox3->Enabled = true;

			 //Show Message Instruction
			 String^ message = "Default Model has been recreated!";
			 String^ caption = "Instructions";
			 MessageBox::Show(message, caption);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 //create required folders
			 if(live_testing_folders_created == 0)
				create_folders_live_testing();
			 
			 int index = -1;
			 if(radioButton1->Checked == 1){
				 index = do_live_test(DEFAULT_MODEL);
				 if(index != -1)
					textBox3->Text = ""+ gcnew String(list_items_default[index]);	
			 }
			 else{
				 index = do_live_test(CUSTOM_MODEL);
				 if(index != -1)
					textBox3->Text = ""+ gcnew String(list_items_custom[index]);
			 }
			 if(index == -1){
				textBox3->Text = ""+ gcnew String("Could not recognise!");
			 }
			 pictureBox1->ImageLocation = "item_data/images/"+index+".PNG";
			 
			 // Load Rich Text Box
			 String^ rtf_file = "item_data/info/"+index+".rtf";
			 try{
				richTextBox1->LoadFile( rtf_file );
			 }catch(Exception^ e){
				richTextBox1->Text = "Could Not Find File in Database.";
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
				 player->SoundLocation = gcnew String(recorded_audio_file);
				 player->Load();
				 player->PlaySync();
			 }catch(Exception^ ex){
				
			 }
		 }
private: System::Void plot_chart(){
			FILE* fptr;
			 double data;
			 if ((fptr = fopen(recorded_text_file,"r")) == NULL){
				printf("Error! opening file");
				return;
			}
			 
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			//System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			
			this->chart1->ChartAreas->Clear();
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			
			//this->chart1->Legends->Clear();
			//legend1->Name = L"Legend1";
			//this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(33, 254);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			//series1->Legend = L"Legend1";
			
			this->chart1->Series->Clear();
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(569, 166);
			this->chart1->TabIndex = 17;
			this->chart1->Text = L"chart1";

			 
			 int count = 0;
			 while((fscanf(fptr,"%lf", &data)) != EOF){
				series1->Points->Add((gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(count, data)));
				count++;
			 }
			 fclose(fptr);
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			plot_chart();
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	FILE *fptr;
	char item[500];
	int is_custom_model_present = 0;
	if(radioButton2->Checked == 1){
		if(is_custom_model_present == 0){
			if ((fptr = fopen("custom_model/items.txt","r")) == NULL){
				printf("Error! opening file");
				is_custom_model_present = 0;
				NO_OF_ITEMS = NO_ITEMS_DEFAULT;
				MessageBox::Show("There is no custom model present. You need to train it before you can use it!\nCurrent Model is set to default model!", "Warning");
				radioButton1->Checked = 1;
			}else{
				is_custom_model_present = 1;
			}
			if(is_custom_model_present == 1){
				NO_ITEMS_CUSTOM = 0;
				while((fscanf(fptr,"%s", item)) != EOF){
					int i=0;
					for(i=0;item[i]!='\0';i++)
						list_items_custom[NO_ITEMS_CUSTOM][i] = item[i];
					list_items_custom[NO_ITEMS_CUSTOM][i] = '\0';
					NO_ITEMS_CUSTOM++;
				}
				NO_OF_ITEMS = NO_ITEMS_CUSTOM;
				fclose(fptr);
			}
		}else{
			NO_OF_ITEMS = NO_ITEMS_CUSTOM;
		}
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ item = textBox5->Text;
			 int n = item->Length;
			 if(n>0){
				 char ch = item[0];

				 for(int i=0;i<n;i++){
					list_items_custom[NO_ITEMS_CUSTOM][i] = item[i];
				 }
				 list_items_custom[NO_ITEMS_CUSTOM][n] = '\0';
				 NO_ITEMS_CUSTOM++;

				 richTextBox2->Text = "";
				 for(int i=0;i<NO_ITEMS_CUSTOM;i++){
					richTextBox2->Text += gcnew String(list_items_custom[i])+"\n";
				 }

				 MessageBox::Show("Added word "+item+" to database!", "List of words updated");
			 }
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton1->Checked == 1){
				NO_OF_ITEMS = NO_ITEMS_DEFAULT;
			 }
		 }
private: System::Void enableDeveloperModeToolStripMenuItem_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(enableDeveloperModeToolStripMenuItem->Checked == 1){
				 groupBox1->Enabled = true;
				 groupBox2->Enabled = true;
				 MessageBox::Show("Using this option, Model Training page gets enabled and you can create new models or reset the default model.", "Warning!");
			 }else{
				 groupBox1->Enabled = false;
				 groupBox2->Enabled = false;
			 }
		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Instructions^ instr_obj = gcnew Instructions;
			 instr_obj->ShowDialog();
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 About^ about_obj = gcnew About;
			 about_obj->ShowDialog();
		 }
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	FILE *fptr, *fptr2;
	char item[500];
	int is_custom_model_present = 0;
	if(radioButton4->Checked == 1){
		if(is_custom_model_present == 0){
			if ((fptr = fopen("custom_model/items.txt","r")) == NULL){
				printf("Error! opening file");
				is_custom_model_present = 0;
				NO_OF_ITEMS = NO_ITEMS_DEFAULT;
				radioButton3->Checked = 1;
			}else{
				is_custom_model_present = 1;
			}
			if ((fptr2 = fopen("custom_model/utterances.txt","r")) == NULL){
				printf("Error! opening file");
				is_custom_model_present = 0;
				NO_OF_ITEMS = NO_ITEMS_DEFAULT;
				radioButton3->Checked = 1;
			}else{
				is_custom_model_present = 1;
			}
			if(is_custom_model_present == 1){
				NO_ITEMS_CUSTOM = 0;
				while((fscanf(fptr,"%s", item)) != EOF){
					int i=0;
					for(i=0;item[i]!='\0';i++)
						list_items_custom[NO_ITEMS_CUSTOM][i] = item[i];
					list_items_custom[NO_ITEMS_CUSTOM][i] = '\0';
					NO_ITEMS_CUSTOM++;
				}
				NO_OF_ITEMS = NO_ITEMS_CUSTOM;
				NO_ITEMS_ALREADY_PRESENT = NO_ITEMS_CUSTOM;
				fclose(fptr);

				// read utterances from file
				int val = 0;
				fscanf(fptr2,"%d", &val);
				numericUpDown1->Value = val;
				numericUpDown1->Enabled = false;
				fclose(fptr2);

				//reset box of items
				richTextBox2->Text = "";
				for(int i=0;i<NO_ITEMS_CUSTOM;i++){
					richTextBox2->Text += gcnew String(list_items_custom[i])+"\n";
				}
			}else{
				MessageBox::Show("There is no custom model present. You need to train it before you can use it!\nCurrent Model is set to default model!", "Warning");
			}
		}else{
			NO_OF_ITEMS = NO_ITEMS_CUSTOM;
		}
	}
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton3->Checked == 1){
				 //reset box of items
				 richTextBox2->Text = "";
				 for(int i=0;i<NO_ITEMS_DEFAULT;i++){
					 int j;
					 for(j=0;list_items_default[i][j]!='\0';j++)
						list_items_custom[i][j] = list_items_default[i][j];
					 list_items_custom[i][j] = '\0';
					 richTextBox2->Text += gcnew String(list_items_custom[i])+"\n";
				 }

				 //reset the items array
				 NO_ITEMS_CUSTOM = NO_ITEMS_DEFAULT;
				 NO_OF_ITEMS = NO_ITEMS_DEFAULT;
				 NO_ITEMS_ALREADY_PRESENT = 0;
				 numericUpDown1->Enabled = true;
			 }
		 }
};
}