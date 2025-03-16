#pragma once
#include"Match.h"
namespace Projectnew {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TreeForm
	/// </summary>
	public ref class TreeForm : public System::Windows::Forms::Form
	{
	public:
		TreeForm(void)
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
		~TreeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Menupanel;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Aboutbutton;
	private: System::Windows::Forms::Button^ Treebutton;
	private: System::Windows::Forms::Button^ Teamsbutton;
	private: System::Windows::Forms::Button^ Homebutton;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TreeView^ treeView1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TreeForm::typeid));
			this->Menupanel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Aboutbutton = (gcnew System::Windows::Forms::Button());
			this->Treebutton = (gcnew System::Windows::Forms::Button());
			this->Teamsbutton = (gcnew System::Windows::Forms::Button());
			this->Homebutton = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->Menupanel->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// Menupanel
			// 
			this->Menupanel->BackColor = System::Drawing::Color::DimGray;
			this->Menupanel->Controls->Add(this->panel2);
			this->Menupanel->Controls->Add(this->button1);
			this->Menupanel->Controls->Add(this->panel1);
			this->Menupanel->Controls->Add(this->Aboutbutton);
			this->Menupanel->Controls->Add(this->Treebutton);
			this->Menupanel->Controls->Add(this->Teamsbutton);
			this->Menupanel->Controls->Add(this->Homebutton);
			this->Menupanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Menupanel->ForeColor = System::Drawing::Color::Brown;
			this->Menupanel->Location = System::Drawing::Point(0, 0);
			this->Menupanel->Margin = System::Windows::Forms::Padding(4);
			this->Menupanel->Name = L"Menupanel";
			this->Menupanel->Size = System::Drawing::Size(1412, 92);
			this->Menupanel->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DimGray;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->ForeColor = System::Drawing::Color::Brown;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1412, 92);
			this->panel2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(681, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(611, 68);
			this->label3->TabIndex = 2;
			this->label3->Text = L"                TREE            ";
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->panel3->Location = System::Drawing::Point(19, 92);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(52, 710);
			this->panel3->TabIndex = 1;
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
			this->Aboutbutton->Location = System::Drawing::Point(1329, 23);
			this->Aboutbutton->Margin = System::Windows::Forms::Padding(4);
			this->Aboutbutton->Name = L"Aboutbutton";
			this->Aboutbutton->Size = System::Drawing::Size(168, 37);
			this->Aboutbutton->TabIndex = 4;
			this->Aboutbutton->Text = L"About";
			this->Aboutbutton->UseVisualStyleBackColor = true;
			// 
			// Treebutton
			// 
			this->Treebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Treebutton->ForeColor = System::Drawing::Color::Black;
			this->Treebutton->Location = System::Drawing::Point(1103, 23);
			this->Treebutton->Margin = System::Windows::Forms::Padding(4);
			this->Treebutton->Name = L"Treebutton";
			this->Treebutton->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Treebutton->Size = System::Drawing::Size(168, 37);
			this->Treebutton->TabIndex = 3;
			this->Treebutton->Text = L"Tree";
			this->Treebutton->UseVisualStyleBackColor = true;
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
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-386, -185);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1929, 906);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &TreeForm::pictureBox3_Click);
			// 
			// treeView1
			// 
			this->treeView1->LineColor = System::Drawing::Color::Empty;
			this->treeView1->Location = System::Drawing::Point(0, 0);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(121, 97);
			this->treeView1->TabIndex = 0;
			// 
			// TreeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1412, 585);
			this->Controls->Add(this->Menupanel);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"TreeForm";
			this->Text = L"TreeForm";
			this->Menupanel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}

		private:
			//void PopulateTreeView(Match* matches, int matchCount) {
			//	// Clear existing nodes
			//	this->treeView->Nodes->Clear();

			//	// Create a root node for the tournament
			//	System::Windows::Forms::TreeNode^ rootNode = gcnew System::Windows::Forms::TreeNode("Tournament Bracket");

			//	// Add matches as child nodes
			//	for (int i = 0; i < matchCount; i++) {
			//		System::String^ matchInfo = "Match " + matches[i].matchNo + ": " +
			//			gcnew String(matches[i].teamA.c_str()) + " vs " +
			//			gcnew String(matches[i].teamB.c_str());
			//		rootNode->Nodes->Add(gcnew System::Windows::Forms::TreeNode(matchInfo));
			//	}

			//	// Add root to TreeView
			//	this->treeView->Nodes->Add(rootNode);

			//	// Expand all nodes for better visibility
			//	this->treeView->ExpandAll();
			//}

#pragma endregion
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
