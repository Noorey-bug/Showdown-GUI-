#pragma once
#include "TeamsForm.h" // Include TeamsForm header
#include "ScheduleForm.h" // Include TeamsForm header

namespace Projectnew
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Menupanel;
	private: System::Windows::Forms::Button^ Homebutton;
	private: System::Windows::Forms::Button^ Aboutbutton;




	private: System::Windows::Forms::Button^ Teamsbutton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;




	private: System::Windows::Forms::PictureBox^ Homelogo;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;




	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Menupanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Aboutbutton = (gcnew System::Windows::Forms::Button());
			this->Teamsbutton = (gcnew System::Windows::Forms::Button());
			this->Homebutton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Homelogo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Menupanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Homelogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// Menupanel
			// 
			this->Menupanel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Menupanel->BackColor = System::Drawing::Color::DimGray;
			this->Menupanel->Controls->Add(this->button1);
			this->Menupanel->Controls->Add(this->panel1);
			this->Menupanel->Controls->Add(this->Aboutbutton);
			this->Menupanel->Controls->Add(this->Teamsbutton);
			this->Menupanel->Controls->Add(this->Homebutton);
			this->Menupanel->ForeColor = System::Drawing::Color::Brown;
			this->Menupanel->Location = System::Drawing::Point(0, 0);
			this->Menupanel->Margin = System::Windows::Forms::Padding(4);
			this->Menupanel->Name = L"Menupanel";
			this->Menupanel->Size = System::Drawing::Size(1901, 92);
			this->Menupanel->TabIndex = 0;
			this->Menupanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Menupanel_Paint);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(866, 23);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 37);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Schedule";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->panel1->Location = System::Drawing::Point(19, 92);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(52, 710);
			this->panel1->TabIndex = 1;
			// 
			// Aboutbutton
			// 
			this->Aboutbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aboutbutton->ForeColor = System::Drawing::Color::Black;
			this->Aboutbutton->Location = System::Drawing::Point(1108, 23);
			this->Aboutbutton->Margin = System::Windows::Forms::Padding(4);
			this->Aboutbutton->Name = L"Aboutbutton";
			this->Aboutbutton->Size = System::Drawing::Size(168, 37);
			this->Aboutbutton->TabIndex = 4;
			this->Aboutbutton->Text = L"About";
			this->Aboutbutton->UseVisualStyleBackColor = true;
			this->Aboutbutton->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// Teamsbutton
			// 
			this->Teamsbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Teamsbutton->ForeColor = System::Drawing::Color::Black;
			this->Teamsbutton->Location = System::Drawing::Point(629, 23);
			this->Teamsbutton->Margin = System::Windows::Forms::Padding(4);
			this->Teamsbutton->Name = L"Teamsbutton";
			this->Teamsbutton->Size = System::Drawing::Size(168, 37);
			this->Teamsbutton->TabIndex = 1;
			this->Teamsbutton->Text = L"Teams";
			this->Teamsbutton->UseVisualStyleBackColor = true;
			this->Teamsbutton->Click += gcnew System::EventHandler(this, &MyForm::Teamsbutton_Click);
			// 
			// Homebutton
			// 
			this->Homebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Homebutton->ForeColor = System::Drawing::Color::Black;
			this->Homebutton->Location = System::Drawing::Point(405, 23);
			this->Homebutton->Margin = System::Windows::Forms::Padding(4);
			this->Homebutton->Name = L"Homebutton";
			this->Homebutton->Size = System::Drawing::Size(168, 37);
			this->Homebutton->TabIndex = 0;
			this->Homebutton->Text = L"Home";
			this->Homebutton->UseVisualStyleBackColor = true;
			this->Homebutton->Click += gcnew System::EventHandler(this, &MyForm::Homebutton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(10, 809);
			this->panel2->TabIndex = 1;
			// 
			// Homelogo
			// 
			this->Homelogo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Homelogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Homelogo.Image")));
			this->Homelogo->Location = System::Drawing::Point(425, 215);
			this->Homelogo->Name = L"Homelogo";
			this->Homelogo->Size = System::Drawing::Size(1024, 433);
			this->Homelogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Homelogo->TabIndex = 6;
			this->Homelogo->TabStop = false;
			this->Homelogo->UseWaitCursor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(694, 269);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(425, 608);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1024, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 95);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1929, 906);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1903, 809);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Homelogo);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Menupanel);
			this->Controls->Add(this->pictureBox3);
			this->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Navy;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Menupanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Homelogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Button clicked");
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Homebutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MyForm^ myForm = gcnew MyForm();
	myForm->Show();
}
private: System::Void Teamsbutton_Click(System::Object^ sender, System::EventArgs^ e)
{
	TeamsForm^ teamsForm = gcnew TeamsForm();
	teamsForm->Show();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	ScheduleForm^ scheduleForm = gcnew ScheduleForm();
	scheduleForm->Show();

}

private: System::Void Menupanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
