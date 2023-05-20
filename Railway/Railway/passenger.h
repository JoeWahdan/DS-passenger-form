#pragma once
#include "BackEnd.h"

namespace Railway {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for passenger
	/// </summary>
	public ref class passenger : public System::Windows::Forms::Form
	{
	public:
		Form ^back;
		passenger(BackEnd* bb)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			backend = bb;
		}
		passenger(Form ^pass)
		{
			back = pass;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		BackEnd* backend;
		~passenger()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ Home;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ TrHisbutton;

	private: System::Windows::Forms::Button^ PrInbuttn;

	private: System::Windows::Forms::Button^ hmButtn;

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::Button^ button10;



	private: System::Windows::Forms::Panel^ panelcon;
	private: System::Windows::Forms::Panel^ PersonalInfo;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Panel^ TripsHistory;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel9;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox2;









	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(passenger::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->TrHisbutton = (gcnew System::Windows::Forms::Button());
			this->PrInbuttn = (gcnew System::Windows::Forms::Button());
			this->hmButtn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->Home = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelcon = (gcnew System::Windows::Forms::Panel());
			this->TripsHistory = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->PersonalInfo = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Home->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panelcon->SuspendLayout();
			this->TripsHistory->SuspendLayout();
			this->panel9->SuspendLayout();
			this->PersonalInfo->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->TrHisbutton);
			this->panel1->Controls->Add(this->PrInbuttn);
			this->panel1->Controls->Add(this->hmButtn);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(228, 720);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::panel1_Paint);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->Location = System::Drawing::Point(0, 651);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(228, 69);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Sign Out";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &passenger::button5_Click);
			// 
			// TrHisbutton
			// 
			this->TrHisbutton->BackColor = System::Drawing::Color::Transparent;
			this->TrHisbutton->FlatAppearance->BorderSize = 0;
			this->TrHisbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TrHisbutton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TrHisbutton->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->TrHisbutton->Location = System::Drawing::Point(-9, 353);
			this->TrHisbutton->Name = L"TrHisbutton";
			this->TrHisbutton->Size = System::Drawing::Size(237, 51);
			this->TrHisbutton->TabIndex = 5;
			this->TrHisbutton->Text = L"Trip History";
			this->TrHisbutton->UseVisualStyleBackColor = false;
			this->TrHisbutton->Click += gcnew System::EventHandler(this, &passenger::TrHisbutton_Click);
			// 
			// PrInbuttn
			// 
			this->PrInbuttn->BackColor = System::Drawing::Color::Transparent;
			this->PrInbuttn->FlatAppearance->BorderSize = 0;
			this->PrInbuttn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PrInbuttn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PrInbuttn->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->PrInbuttn->Location = System::Drawing::Point(0, 288);
			this->PrInbuttn->Name = L"PrInbuttn";
			this->PrInbuttn->Size = System::Drawing::Size(231, 51);
			this->PrInbuttn->TabIndex = 4;
			this->PrInbuttn->Text = L"Personal Information";
			this->PrInbuttn->UseVisualStyleBackColor = false;
			this->PrInbuttn->Click += gcnew System::EventHandler(this, &passenger::PrInbuttn_Click);
			// 
			// hmButtn
			// 
			this->hmButtn->BackColor = System::Drawing::Color::Transparent;
			this->hmButtn->FlatAppearance->BorderSize = 0;
			this->hmButtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hmButtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hmButtn->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->hmButtn->Location = System::Drawing::Point(-3, 231);
			this->hmButtn->Name = L"hmButtn";
			this->hmButtn->Size = System::Drawing::Size(231, 51);
			this->hmButtn->TabIndex = 3;
			this->hmButtn->Text = L"Home";
			this->hmButtn->UseVisualStyleBackColor = false;
			this->hmButtn->Click += gcnew System::EventHandler(this, &passenger::hmButtn_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(228, 153);
			this->panel3->TabIndex = 0;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::panel3_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Aqua;
			this->label2->Location = System::Drawing::Point(69, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Passenger";
			this->label2->Click += gcnew System::EventHandler(this, &passenger::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(56, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name";
			this->label1->Click += gcnew System::EventHandler(this, &passenger::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(37, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(152, 67);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &passenger::pictureBox1_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Transparent;
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::White;
			this->btn1->Location = System::Drawing::Point(991, 0);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(50, 50);
			this->btn1->TabIndex = 8;
			this->btn1->Text = L"X";
			this->btn1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &passenger::btn1_Click);
			// 
			// Home
			// 
			this->Home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Home.BackgroundImage")));
			this->Home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Home->Controls->Add(this->button6);
			this->Home->Controls->Add(this->panel5);
			this->Home->Controls->Add(this->label7);
			this->Home->Controls->Add(this->panel4);
			this->Home->Controls->Add(this->label3);
			this->Home->Controls->Add(this->btn1);
			this->Home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Home->Location = System::Drawing::Point(0, 0);
			this->Home->Name = L"Home";
			this->Home->Size = System::Drawing::Size(976, 720);
			this->Home->TabIndex = 1;
			this->Home->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::panel2_Paint);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(926, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 17;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &passenger::button6_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Navy;
			this->panel5->Controls->Add(this->button10);
			this->panel5->Controls->Add(this->listBox1);
			this->panel5->Location = System::Drawing::Point(71, 375);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(854, 261);
			this->panel5->TabIndex = 12;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::panel5_Paint);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(299, 191);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(233, 50);
			this->button10->TabIndex = 20;
			this->button10->Text = L"Book";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &passenger::button10_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Navy;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::White;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 36;
			this->listBox1->Location = System::Drawing::Point(24, 21);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(799, 146);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &passenger::listBox1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Semibol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(74, 324);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(192, 37);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Avilable Trips";
			this->label7->Click += gcnew System::EventHandler(this, &passenger::label7_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Navy;
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->comboBox3);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->comboBox2);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(71, 132);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(854, 178);
			this->panel4->TabIndex = 10;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::panel4_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(301, 120);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(231, 44);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Search Trains";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &passenger::button4_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(571, 71);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(238, 32);
			this->comboBox3->TabIndex = 15;
			this->comboBox3->Text = L"Day, Month, DayName";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &passenger::comboBox3_SelectedIndexChanged);
			this->comboBox3->Click += gcnew System::EventHandler(this, &passenger::comboBox3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(569, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(173, 31);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Departure Date";
			this->label6->Click += gcnew System::EventHandler(this, &passenger::label6_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(301, 71);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(238, 32);
			this->comboBox2->TabIndex = 13;
			this->comboBox2->Text = L"Train station";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &passenger::comboBox2_SelectedIndexChanged);
			this->comboBox2->Click += gcnew System::EventHandler(this, &passenger::comboBox2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(299, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 31);
			this->label5->TabIndex = 12;
			this->label5->Text = L"To";
			this->label5->Click += gcnew System::EventHandler(this, &passenger::label5_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(31, 71);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(238, 32);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->Text = L"Train station";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &passenger::comboBox1_SelectedIndexChanged);
			this->comboBox1->Click += gcnew System::EventHandler(this, &passenger::comboBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(29, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 31);
			this->label4->TabIndex = 10;
			this->label4->Text = L"From";
			this->label4->Click += gcnew System::EventHandler(this, &passenger::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 33.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(35, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 74);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Home";
			this->label3->Click += gcnew System::EventHandler(this, &passenger::label3_Click);
			// 
			// panelcon
			// 
			this->panelcon->Controls->Add(this->Home);
			this->panelcon->Controls->Add(this->TripsHistory);
			this->panelcon->Controls->Add(this->PersonalInfo);
			this->panelcon->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelcon->Location = System::Drawing::Point(228, 0);
			this->panelcon->Name = L"panelcon";
			this->panelcon->Size = System::Drawing::Size(976, 720);
			this->panelcon->TabIndex = 2;
			this->panelcon->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::panelcon_Paint);
			// 
			// TripsHistory
			// 
			this->TripsHistory->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TripsHistory.BackgroundImage")));
			this->TripsHistory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TripsHistory->Controls->Add(this->panel9);
			this->TripsHistory->Controls->Add(this->button11);
			this->TripsHistory->Controls->Add(this->label9);
			this->TripsHistory->Controls->Add(this->button12);
			this->TripsHistory->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TripsHistory->Location = System::Drawing::Point(0, 0);
			this->TripsHistory->Name = L"TripsHistory";
			this->TripsHistory->Size = System::Drawing::Size(976, 720);
			this->TripsHistory->TabIndex = 3;
			this->TripsHistory->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::TripsHistory_Paint);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Navy;
			this->panel9->Controls->Add(this->listBox2);
			this->panel9->Controls->Add(this->button2);
			this->panel9->Location = System::Drawing::Point(61, 146);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(851, 515);
			this->panel9->TabIndex = 18;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::Navy;
			this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::Color::White;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 36;
			this->listBox2->Location = System::Drawing::Point(26, 40);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(799, 362);
			this->listBox2->TabIndex = 22;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &passenger::listBox2_SelectedIndexChanged_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(354, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 50);
			this->button2->TabIndex = 21;
			this->button2->Text = L"View Trips";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &passenger::button2_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(926, 0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 17;
			this->button11->Text = L"X";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &passenger::button11_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 33.25F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(35, 35);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(366, 74);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Trips History";
			this->label9->Click += gcnew System::EventHandler(this, &passenger::label9_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(991, 0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 8;
			this->button12->Text = L"X";
			this->button12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &passenger::button12_Click);
			// 
			// PersonalInfo
			// 
			this->PersonalInfo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PersonalInfo.BackgroundImage")));
			this->PersonalInfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PersonalInfo->Controls->Add(this->panel7);
			this->PersonalInfo->Controls->Add(this->panel8);
			this->PersonalInfo->Controls->Add(this->panel6);
			this->PersonalInfo->Controls->Add(this->panel2);
			this->PersonalInfo->Controls->Add(this->button8);
			this->PersonalInfo->Controls->Add(this->label14);
			this->PersonalInfo->Controls->Add(this->button15);
			this->PersonalInfo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PersonalInfo->Location = System::Drawing::Point(0, 0);
			this->PersonalInfo->Name = L"PersonalInfo";
			this->PersonalInfo->Size = System::Drawing::Size(976, 720);
			this->PersonalInfo->TabIndex = 2;
			this->PersonalInfo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &passenger::PersonalInfo_Paint);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Navy;
			this->panel7->Controls->Add(this->textBox1);
			this->panel7->Controls->Add(this->button1);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Location = System::Drawing::Point(497, 430);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(383, 231);
			this->panel7->TabIndex = 23;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Navy;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(37, 115);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(331, 50);
			this->textBox1->TabIndex = 23;
			this->textBox1->Text = L"Change Password";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(268, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 35);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Edit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &passenger::button1_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(18, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(218, 57);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Password";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Navy;
			this->panel8->Controls->Add(this->label19);
			this->panel8->Controls->Add(this->label12);
			this->panel8->Location = System::Drawing::Point(50, 430);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(383, 231);
			this->panel8->TabIndex = 23;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(33, 121);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(308, 44);
			this->label19->TabIndex = 21;
			this->label19->Text = L"Email appears here";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(5, 24);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(308, 57);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Email Address";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Navy;
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->label16);
			this->panel6->Location = System::Drawing::Point(490, 141);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(383, 231);
			this->panel6->TabIndex = 23;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(33, 111);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(339, 44);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Gender appears here";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(24, 33);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(189, 63);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Gender";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Navy;
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Location = System::Drawing::Point(50, 141);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(383, 231);
			this->panel2->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(33, 111);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(317, 44);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Name appears here";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(24, 33);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(158, 63);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Name";
			this->label10->Click += gcnew System::EventHandler(this, &passenger::label10_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(926, 0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 17;
			this->button8->Text = L"X";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &passenger::button8_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 33.25F, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(35, 35);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(582, 74);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Personal Information";
			this->label14->Click += gcnew System::EventHandler(this, &passenger::label14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(991, 0);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 50);
			this->button15->TabIndex = 8;
			this->button15->Text = L"X";
			this->button15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &passenger::button15_Click);
			// 
			// passenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1204, 720);
			this->Controls->Add(this->panelcon);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"passenger";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"passenger";
			this->Load += gcnew System::EventHandler(this, &passenger::passenger_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Home->ResumeLayout(false);
			this->Home->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panelcon->ResumeLayout(false);
			this->TripsHistory->ResumeLayout(false);
			this->TripsHistory->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->PersonalInfo->ResumeLayout(false);
			this->PersonalInfo->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void passenger_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
		
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	backend->save_data();
	this->Close();
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Add("From " + comboBox1->GetItemText(comboBox1->SelectedItem) + " to "+ comboBox2->GetItemText(comboBox2->SelectedItem)+ " on "+comboBox3->GetItemText(comboBox3->SelectedItem));

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void comboBox2_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void comboBox3_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void hmButtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Home->BringToFront();
}
private: System::Void PrInbuttn_Click(System::Object^ sender, System::EventArgs^ e) {
	PersonalInfo->BringToFront();
}
private: System::Void TrHisbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	TripsHistory->BringToFront();
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label8_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelcon_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void PersonalInfo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TripsHistory_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox2_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	listBox2->Items->Add("From " + comboBox1->GetItemText(comboBox1->SelectedItem) + " to " + comboBox2->GetItemText(comboBox2->SelectedItem) + " on " + comboBox3->GetItemText(comboBox3->SelectedItem));
}
};
};
