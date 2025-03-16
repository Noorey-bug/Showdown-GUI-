#pragma once
#include "Teams.h"
#include <msclr/marshal_cppstd.h>

namespace Projectnew {
    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;
    using namespace msclr::interop;

    public ref class TeamsForm : public System::Windows::Forms::Form {
    public:
        TeamsForm(void) {
            InitializeComponent();
            manager = new TeamManager(); // Initialize the unmanaged TeamManager
        }

    protected:
        ~TeamsForm() {
            delete manager; // Clean up unmanaged TeamManager
            if (components) {
                delete components;
            }
        }

    private:
        TeamManager* manager; // Pointer to unmanaged TeamManager
        System::Windows::Forms::DataGridView^ dataGridViewGroupA;
        System::Windows::Forms::DataGridView^ dataGridViewGroupB;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Panel^ Menupanel;

    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::PictureBox^ pictureBox3;




           System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TeamsForm::typeid));
            this->dataGridViewGroupA = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewGroupB = (gcnew System::Windows::Forms::DataGridView());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->Menupanel = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewGroupA))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewGroupB))->BeginInit();
            this->Menupanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->SuspendLayout();
            // 
            // dataGridViewGroupA
            // 
            this->dataGridViewGroupA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridViewGroupA->Location = System::Drawing::Point(382, 332);
            this->dataGridViewGroupA->Name = L"dataGridViewGroupA";
            this->dataGridViewGroupA->RowHeadersWidth = 51;
            this->dataGridViewGroupA->RowTemplate->Height = 24;
            this->dataGridViewGroupA->Size = System::Drawing::Size(471, 295);
            this->dataGridViewGroupA->TabIndex = 0;
            // 
            // dataGridViewGroupB
            // 
            this->dataGridViewGroupB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridViewGroupB->Location = System::Drawing::Point(1158, 332);
            this->dataGridViewGroupB->Name = L"dataGridViewGroupB";
            this->dataGridViewGroupB->RowHeadersWidth = 51;
            this->dataGridViewGroupB->RowTemplate->Height = 24;
            this->dataGridViewGroupB->Size = System::Drawing::Size(471, 295);
            this->dataGridViewGroupB->TabIndex = 1;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::SystemColors::ButtonShadow;
            this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(502, 258);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(235, 37);
            this->label1->TabIndex = 2;
            this->label1->Text = L"      Group_A     ";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::ButtonShadow;
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(1317, 258);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(228, 37);
            this->label2->TabIndex = 3;
            this->label2->Text = L"     Group_B     ";
            // 
            // Menupanel
            // 
            this->Menupanel->BackColor = System::Drawing::Color::DimGray;
            this->Menupanel->Controls->Add(this->label3);
            this->Menupanel->Controls->Add(this->panel1);
            this->Menupanel->Dock = System::Windows::Forms::DockStyle::Top;
            this->Menupanel->ForeColor = System::Drawing::Color::Brown;
            this->Menupanel->Location = System::Drawing::Point(0, 0);
            this->Menupanel->Margin = System::Windows::Forms::Padding(4);
            this->Menupanel->Name = L"Menupanel";
            this->Menupanel->Size = System::Drawing::Size(1924, 92);
            this->Menupanel->TabIndex = 4;
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
            this->label3->Size = System::Drawing::Size(631, 68);
            this->label3->TabIndex = 2;
            this->label3->Text = L"              TEAMS            ";
            // 
            // panel1
            // 
            this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->panel1->Location = System::Drawing::Point(19, 92);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(52, 710);
            this->panel1->TabIndex = 1;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(0, 92);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(2242, 1154);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 11;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &TeamsForm::pictureBox3_Click);
            // 
            // TeamsForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->ClientSize = System::Drawing::Size(1924, 1055);
            this->Controls->Add(this->Menupanel);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->dataGridViewGroupA);
            this->Controls->Add(this->dataGridViewGroupB);
            this->Controls->Add(this->pictureBox3);
            this->Name = L"TeamsForm";
            this->Text = L"Teams Form - Group A & B";
            this->Load += gcnew System::EventHandler(this, &TeamsForm::TeamsForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewGroupA))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewGroupB))->EndInit();
            this->Menupanel->ResumeLayout(false);
            this->Menupanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        void PopulateGroupA() {
            dataGridViewGroupA->Columns->Clear();
            dataGridViewGroupA->Rows->Clear();

            dataGridViewGroupA->Columns->Add("Name", "Team Name");
            dataGridViewGroupA->Columns->Add("Members", "Members");
            dataGridViewGroupA->Columns->Add("Rank", "Rank");

            for (int i = 0; i < 8; i++) {
                const Team* team = manager->getTeam(i);
                if (!team) break;

                String^ name = gcnew String(team->getName().c_str());
                String^ members = gcnew String(team->getMembers().c_str());
                String^ rank = team->getRank().ToString();

                dataGridViewGroupA->Rows->Add(name, members, rank);
            }
        }

        void PopulateGroupB() {
            dataGridViewGroupB->Columns->Clear();
            dataGridViewGroupB->Rows->Clear();

            dataGridViewGroupB->Columns->Add("Name", "Team Name");
            dataGridViewGroupB->Columns->Add("Members", "Members");
            dataGridViewGroupB->Columns->Add("Rank", "Rank");

            for (int i = 8; i < 16; i++) {
                const Team* team = manager->getTeam(i);
                if (!team) break;

                String^ name = gcnew String(team->getName().c_str());
                String^ members = gcnew String(team->getMembers().c_str());
                String^ rank = team->getRank().ToString();

                dataGridViewGroupB->Rows->Add(name, members, rank);
            }
        }


        System::Void TeamsForm_Load(System::Object^ sender, System::EventArgs^ e) {
            if (!manager->loadFromFile("C:/Users/user/Desktop/Data.txt")) {
                MessageBox::Show("Error: Could not load data.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
            PopulateGroupA();
            PopulateGroupB();
        }
    private: System::Void Homebutton_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
