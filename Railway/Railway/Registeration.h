#pragma once
#include "BackEnd.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include "passenger.h"


namespace Railway {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Registeration
	/// </summary>
	public ref class Registeration : public System::Windows::Forms::Form
	{
	public:
		

		Registeration(BackEnd* bb)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			backend = bb;
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		BackEnd* backend;
		~Registeration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Panel^ panel5;

	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ PsTxtBox;

	private: System::Windows::Forms::TextBox^ EaTxtBox;

	private: System::Windows::Forms::TextBox^ UserTxtBox;

	private: System::Windows::Forms::TextBox^ FrstTxtBox;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ LstTxtBox;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registeration::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->LstTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->PsTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->EaTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->UserTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->FrstTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1204, 720);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &Registeration::otherclk);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Registeration::panel1_Paint);
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Controls->Add(this->panel8);
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->pictureBox1);
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->panel5);
			this->panel6->Controls->Add(this->panel4);
			this->panel6->Controls->Add(this->panel3);
			this->panel6->Controls->Add(this->panel2);
			this->panel6->Controls->Add(this->label1);
			this->panel6->Location = System::Drawing::Point(212, 46);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(773, 623);
			this->panel6->TabIndex = 13;
			this->panel6->Click += gcnew System::EventHandler(this, &Registeration::otherclk);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Navy;
			this->panel8->Controls->Add(this->radioButton2);
			this->panel8->Controls->Add(this->radioButton1);
			this->panel8->Controls->Add(this->label2);
			this->panel8->Location = System::Drawing::Point(121, 454);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(525, 62);
			this->panel8->TabIndex = 17;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(281, 8);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(130, 41);
			this->radioButton2->TabIndex = 19;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(172, 8);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(103, 41);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 40);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Gender";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Navy;
			this->panel7->Controls->Add(this->LstTxtBox);
			this->panel7->Location = System::Drawing::Point(383, 140);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(263, 62);
			this->panel7->TabIndex = 2;
			// 
			// LstTxtBox
			// 
			this->LstTxtBox->BackColor = System::Drawing::Color::Navy;
			this->LstTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LstTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LstTxtBox->ForeColor = System::Drawing::Color::White;
			this->LstTxtBox->Location = System::Drawing::Point(19, 13);
			this->LstTxtBox->Name = L"LstTxtBox";
			this->LstTxtBox->Size = System::Drawing::Size(226, 36);
			this->LstTxtBox->TabIndex = 0;
			this->LstTxtBox->Text = L"Last Name";
			this->LstTxtBox->Click += gcnew System::EventHandler(this, &Registeration::LstTxtBox_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(121, -11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(104, 145);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(121, 532);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(523, 75);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Sign Up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Registeration::button2_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Navy;
			this->panel5->Controls->Add(this->PsTxtBox);
			this->panel5->Location = System::Drawing::Point(121, 298);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(525, 62);
			this->panel5->TabIndex = 7;
			// 
			// PsTxtBox
			// 
			this->PsTxtBox->BackColor = System::Drawing::Color::Navy;
			this->PsTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PsTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PsTxtBox->ForeColor = System::Drawing::Color::White;
			this->PsTxtBox->Location = System::Drawing::Point(14, 13);
			this->PsTxtBox->Name = L"PsTxtBox";
			this->PsTxtBox->Size = System::Drawing::Size(478, 36);
			this->PsTxtBox->TabIndex = 1;
			this->PsTxtBox->Text = L"Password";
			this->PsTxtBox->Click += gcnew System::EventHandler(this, &Registeration::textBox4_Click);
			this->PsTxtBox->TextChanged += gcnew System::EventHandler(this, &Registeration::PsTxtBox_TextChanged);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Navy;
			this->panel4->Controls->Add(this->EaTxtBox);
			this->panel4->Location = System::Drawing::Point(121, 220);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(525, 62);
			this->panel4->TabIndex = 5;
			// 
			// EaTxtBox
			// 
			this->EaTxtBox->BackColor = System::Drawing::Color::Navy;
			this->EaTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EaTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EaTxtBox->ForeColor = System::Drawing::Color::White;
			this->EaTxtBox->Location = System::Drawing::Point(14, 12);
			this->EaTxtBox->Name = L"EaTxtBox";
			this->EaTxtBox->Size = System::Drawing::Size(449, 36);
			this->EaTxtBox->TabIndex = 1;
			this->EaTxtBox->Text = L"Email Address";
			this->EaTxtBox->Click += gcnew System::EventHandler(this, &Registeration::textBox3_Click);
			this->EaTxtBox->TextChanged += gcnew System::EventHandler(this, &Registeration::EaTxtBox_TextChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Navy;
			this->panel3->Controls->Add(this->UserTxtBox);
			this->panel3->Location = System::Drawing::Point(121, 376);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(525, 62);
			this->panel3->TabIndex = 3;
			// 
			// UserTxtBox
			// 
			this->UserTxtBox->BackColor = System::Drawing::Color::Navy;
			this->UserTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserTxtBox->ForeColor = System::Drawing::Color::White;
			this->UserTxtBox->Location = System::Drawing::Point(18, 13);
			this->UserTxtBox->Name = L"UserTxtBox";
			this->UserTxtBox->Size = System::Drawing::Size(489, 36);
			this->UserTxtBox->TabIndex = 1;
			this->UserTxtBox->Text = L"Confirm Password";
			this->UserTxtBox->Click += gcnew System::EventHandler(this, &Registeration::textBox2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Navy;
			this->panel2->Controls->Add(this->FrstTxtBox);
			this->panel2->Location = System::Drawing::Point(121, 140);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(244, 62);
			this->panel2->TabIndex = 1;
			// 
			// FrstTxtBox
			// 
			this->FrstTxtBox->BackColor = System::Drawing::Color::Navy;
			this->FrstTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->FrstTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FrstTxtBox->ForeColor = System::Drawing::Color::White;
			this->FrstTxtBox->Location = System::Drawing::Point(19, 13);
			this->FrstTxtBox->Name = L"FrstTxtBox";
			this->FrstTxtBox->Size = System::Drawing::Size(212, 36);
			this->FrstTxtBox->TabIndex = 0;
			this->FrstTxtBox->Text = L"First Name";
			this->FrstTxtBox->Click += gcnew System::EventHandler(this, &Registeration::textBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 33.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(218, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 74);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign Up";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1151, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 11;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Registeration::button1_Click);
			// 
			// Registeration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1204, 720);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimizeBox = false;
			this->Name = L"Registeration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registeration";
			this->Load += gcnew System::EventHandler(this, &Registeration::Registeration_Load);
			this->panel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Registeration_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}


	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (FrstTxtBox->Text == "First Name")
		{
			FrstTxtBox->Text = "";
		}
	}
private: System::Void LstTxtBox_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (LstTxtBox->Text == "Last Name")
		{
			LstTxtBox->Text = "";
		}
	}
	
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (UserTxtBox->Text == "Confirm Password")
		{
			UserTxtBox->Text = "";
		}
	}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (EaTxtBox->Text == "Email Address")
		{
			EaTxtBox->Text = "";
		}
	}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (PsTxtBox->Text == "Password")
		{
			PsTxtBox->Text = "";
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//handle all filleds are requirs
		//validation that password == password
		string fname_txt = msclr::interop::marshal_as<std::string>(FrstTxtBox->Text);
		string lname_txt = msclr::interop::marshal_as<std::string>(LstTxtBox->Text);
		string mail_txt = msclr::interop::marshal_as<std::string>(EaTxtBox->Text);
		string pass_txt = msclr::interop::marshal_as<std::string>(PsTxtBox->Text);
		string pass2_txt = msclr::interop::marshal_as<std::string>(UserTxtBox->Text);
		//region data validation
		char gender_boolean;
		if (radioButton1->Checked)
		{
			gender_boolean = 'm';
		}
		else if(radioButton2->Checked)
		{
			gender_boolean = 'f';
		}
		else
		{
			MessageBox::Show("PLease Choose one of the genders", "Invalid Data ", MessageBoxButtons::OK);
			return;
		}
		if (fname_txt == "First Name" || fname_txt == "")
		{
			MessageBox::Show("First Name is missing", "Invalid Data ", MessageBoxButtons::OK);
			return;
		}
		if (lname_txt == "Last Name" || lname_txt == "")
		{
			MessageBox::Show("Last Name is missing", "Invalid Data ", MessageBoxButtons::OK);
			return;
		}
		if (mail_txt == "Email Address" || mail_txt == "")
		{
			MessageBox::Show("Email is missing", "Invalid Data ", MessageBoxButtons::OK);
			return;
		}
		if (mail_txt.find(".com") == string::npos || mail_txt.find("@") == string::npos)
		{
			MessageBox::Show("Email is invalid", "Invalid Data ", MessageBoxButtons::OK);
			return;
		}
		if (pass_txt == "Password" || mail_txt == "")
		{
			MessageBox::Show("Password is missing", "Invalid Data ", MessageBoxButtons::OK);
			return;
		}
		if (pass2_txt == "Confirm Password" || mail_txt == "")
		{
			MessageBox::Show("Password is missimg", "Password ", MessageBoxButtons::OK);
			return;
		}
		if (pass2_txt != pass_txt)
		{
			MessageBox::Show("Password is not the same", "Password ", MessageBoxButtons::OK);
			return;
		}
		if (pass_txt.size() < 8)
		{
			MessageBox::Show("Password is weak", "Password ", MessageBoxButtons::OK);
			return;
		}
		//endregion
		int ret = backend->registration(mail_txt, pass_txt, fname_txt, lname_txt, gender_boolean);
		if (ret == 1)
		{
			MessageBox::Show("User Already Exists", "Registrate ", MessageBoxButtons::OK);
		}
		else
		{
			passenger^ pass = gcnew passenger(this);
			pass->Show();
			backend->save_data();
			this->Close();
			
		}
	}
private: System::Void otherclk(System::Object^ sender, System::EventArgs^ e) 
	{
		if (FrstTxtBox->Text == "")
		{
			FrstTxtBox->Text = "First Name";
		}

		if (LstTxtBox->Text == "")
		{
			LstTxtBox->Text = "Last Name";
		}

		if (UserTxtBox->Text == "")
		{
			UserTxtBox->Text = "Confirm Password";
		}

		if (EaTxtBox->Text == "")
		{
			EaTxtBox->Text = "Email Address";
		}

		if (PsTxtBox->Text == "")
		{
			PsTxtBox->Text = "Password";
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {



}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void EaTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PsTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
