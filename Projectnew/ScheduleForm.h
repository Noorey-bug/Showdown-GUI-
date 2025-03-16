#pragma once
#include "Schedule.h"
#include "Schedule2.h"
#include "Match.h"
#include <fstream>
#include <string>

#include <msclr/marshal_cppstd.h>

namespace Projectnew {

	using namespace System;
	using namespace System::Collections;
	using namespace System::Windows::Forms;

	public ref class ScheduleForm : public Form
	{
	private:
		Schedule* schedule;
		DataGridView^ dataGridView2;
		Button^ runButton;

	private: System::Windows::Forms::Panel^ Menupanel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ showButton;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ showButton2;
	private: System::Windows::Forms::Button^ runButton2;
	private: System::Windows::Forms::Button^ next;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::Panel^ panel1;


	public:
		ScheduleForm(void) {
			InitializeComponent();
			schedule = new Schedule();
		}

		~ScheduleForm() {
			delete schedule;
		}

	private:
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ScheduleForm::typeid));
			this->Menupanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->runButton = (gcnew System::Windows::Forms::Button());
			this->showButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->showButton2 = (gcnew System::Windows::Forms::Button());
			this->runButton2 = (gcnew System::Windows::Forms::Button());
			this->next = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Menupanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
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
			this->Menupanel->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(478, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(723, 68);
			this->label3->TabIndex = 2;
			this->label3->Text = L"                Schedule               ";
			this->label3->Click += gcnew System::EventHandler(this, &ScheduleForm::label3_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->panel1->Location = System::Drawing::Point(19, 92);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(52, 710);
			this->panel1->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(22, 190);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(754, 236);
			this->dataGridView2->TabIndex = 6;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ScheduleForm::dataGridView2_CellContentClick);
			// 
			// runButton
			// 
			this->runButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->runButton->ForeColor = System::Drawing::Color::Black;
			this->runButton->Location = System::Drawing::Point(548, 442);
			this->runButton->Margin = System::Windows::Forms::Padding(4);
			this->runButton->Name = L"runButton";
			this->runButton->Size = System::Drawing::Size(228, 42);
			this->runButton->TabIndex = 7;
			this->runButton->Text = L"Run";
			this->runButton->UseVisualStyleBackColor = true;
			this->runButton->Click += gcnew System::EventHandler(this, &ScheduleForm::runButton_Click_1);
			// 
			// showButton
			// 
			this->showButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showButton->ForeColor = System::Drawing::Color::Black;
			this->showButton->Location = System::Drawing::Point(19, 442);
			this->showButton->Margin = System::Windows::Forms::Padding(4);
			this->showButton->Name = L"showButton";
			this->showButton->Size = System::Drawing::Size(228, 42);
			this->showButton->TabIndex = 8;
			this->showButton->Text = L"Show";
			this->showButton->UseVisualStyleBackColor = true;
			this->showButton->Click += gcnew System::EventHandler(this, &ScheduleForm::button1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 95);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1929, 959);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &ScheduleForm::pictureBox3_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(805, 190);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(754, 236);
			this->dataGridView3->TabIndex = 11;
			// 
			// showButton2
			// 
			this->showButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showButton2->ForeColor = System::Drawing::Color::Black;
			this->showButton2->Location = System::Drawing::Point(805, 442);
			this->showButton2->Margin = System::Windows::Forms::Padding(4);
			this->showButton2->Name = L"showButton2";
			this->showButton2->Size = System::Drawing::Size(228, 42);
			this->showButton2->TabIndex = 12;
			this->showButton2->Text = L"Show";
			this->showButton2->UseVisualStyleBackColor = true;
			this->showButton2->Click += gcnew System::EventHandler(this, &ScheduleForm::showButton2_Click);
			// 
			// runButton2
			// 
			this->runButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->runButton2->ForeColor = System::Drawing::Color::Black;
			this->runButton2->Location = System::Drawing::Point(1331, 442);
			this->runButton2->Margin = System::Windows::Forms::Padding(4);
			this->runButton2->Name = L"runButton2";
			this->runButton2->Size = System::Drawing::Size(228, 42);
			this->runButton2->TabIndex = 13;
			this->runButton2->Text = L"Run";
			this->runButton2->UseVisualStyleBackColor = true;
			this->runButton2->Click += gcnew System::EventHandler(this, &ScheduleForm::runButton2_Click);
			// 
			// next
			// 
			this->next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->next->ForeColor = System::Drawing::Color::Black;
			this->next->Location = System::Drawing::Point(682, 640);
			this->next->Margin = System::Windows::Forms::Padding(4);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(228, 42);
			this->next->TabIndex = 14;
			this->next->Text = L"Next";
			this->next->UseVisualStyleBackColor = true;
			this->next->Click += gcnew System::EventHandler(this, &ScheduleForm::button1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(266, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 37);
			this->label2->TabIndex = 15;
			this->label2->Text = L"     Round 1     ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1053, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 37);
			this->label1->TabIndex = 16;
			this->label1->Text = L"     Round 2     ";
			this->label1->Click += gcnew System::EventHandler(this, &ScheduleForm::label1_Click);
			// 
			// ScheduleForm
			// 
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->next);
			this->Controls->Add(this->runButton2);
			this->Controls->Add(this->showButton2);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->showButton);
			this->Controls->Add(this->runButton);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->Menupanel);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"ScheduleForm";
			this->Text = L"Schedule Form";
			this->Load += gcnew System::EventHandler(this, &ScheduleForm::ScheduleForm_Load);
			this->Menupanel->ResumeLayout(false);
			this->Menupanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		// Populate DataGridView with match data
		void PopulateDataGridView(DataGridView^ gridView, Match* matches, int matchCount, bool includeResults) {
			gridView->Columns->Clear();
			gridView->Rows->Clear();

			// Add Columns
			gridView->Columns->Add("MatchNo", "Match No");
			gridView->Columns->Add("TeamA", "Team A");
			gridView->Columns->Add("TeamB", "Team B");
			gridView->Columns->Add("Time", "Time");
			gridView->Columns->Add("Date", "Date");
			gridView->Columns->Add("Status", "Status");
			gridView->Columns->Add("Result", "Result");

			// Add Rows
			for (int i = 0; i < matchCount; i++) {
				gridView->Rows->Add(
					matches[i].matchNo,
					gcnew String(matches[i].teamA.c_str()),
					gcnew String(matches[i].teamB.c_str()),
					gcnew String(matches[i].time.c_str()),
					gcnew String(matches[i].date.c_str()),
					gcnew String(matches[i].status.c_str()),
					gcnew String(includeResults ? matches[i].result.c_str() : "Pending") // Only display team name in the result
				);
			}
		}

		void PopulateRound2DataGrid(Match* round2Matches, int round2MatchCount) {
			dataGridView3->Columns->Clear();
			dataGridView3->Rows->Clear();

			// Add Columns
			dataGridView3->Columns->Add("MatchNo", "Match No");
			dataGridView3->Columns->Add("TeamA", "Team A");
			dataGridView3->Columns->Add("TeamB", "Team B");
			dataGridView3->Columns->Add("Time", "Time");
			dataGridView3->Columns->Add("Date", "Date");
			dataGridView3->Columns->Add("Status", "Status");
			dataGridView3->Columns->Add("Result", "Result");

			// Add Rows
			for (int i = 0; i < round2MatchCount; i++) {
				dataGridView3->Rows->Add(
					round2Matches[i].matchNo,
					gcnew String(round2Matches[i].teamA.c_str()), // Only display team name
					gcnew String(round2Matches[i].teamB.c_str()), // Only display team name
					gcnew String(round2Matches[i].time.c_str()),
					gcnew String(round2Matches[i].date.c_str()),
					gcnew String("Pending"),
					gcnew String("") // Empty result until simulation
				);
			}
		}


	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ScheduleForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void runButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		try {
			schedule->simulateResults();

			int count = 0;
			Match* matches = schedule->getMatches(count);
			PopulateDataGridView(this->dataGridView2, matches, count, true);
		}
		catch (const exception& ex) {
			MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string groupA[8], groupB[8];
		int groupSize = 0;

		try {
			schedule->readTeamsFromFile("C:/Users/user/Desktop/Data.txt", groupA, groupB, groupSize);
			schedule->generateMatches(groupA, groupSize, groupB, groupSize);

			int count = 0;
			Match* matches = schedule->getMatches(count);
			PopulateDataGridView(this->dataGridView2, matches, count, false);
		}
		catch (const exception& ex) {
			MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void showButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		string winners[8];
		int winnerCount = 0;

		try {
			for (int i = 0; i < 8; i++) {
				winners[i] = schedule->dequeue();
			}

			Match round2Matches[4];
			int round2MatchCount = 0;

			schedule->simulateRound2Matches(winners, 8, round2Matches, round2MatchCount);
			PopulateDataGridView(this->dataGridView3, round2Matches, round2MatchCount, false);
		}
		catch (const exception& ex) {
			MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void runButton2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try {
			// Open the file in append mode to store the winning teams
			std::ofstream outputFile("C:/Users/user/Desktop/WinningTeams.txt");
			if (!outputFile.is_open()) {
				throw std::runtime_error("Failed to open the file for writing.");
			}

			// Iterate through each row in the DataGridView
			for (int i = 0; i < this->dataGridView3->Rows->Count; i++) {
				if (this->dataGridView3->Rows[i]->IsNewRow) continue;

				// Retrieve values of TeamA and TeamB
				String^ teamAValue = this->dataGridView3->Rows[i]->Cells["TeamA"]->Value->ToString();
				String^ teamBValue = this->dataGridView3->Rows[i]->Cells["TeamB"]->Value->ToString();

				// Convert managed strings to std::string
				std::string teamA = msclr::interop::marshal_as<std::string>(teamAValue);
				std::string teamB = msclr::interop::marshal_as<std::string>(teamBValue);

				// Randomly decide the winner
				std::string result = (rand() % 2 == 0) ? teamA : teamB;

				// Write the winning team to the file
				outputFile << result << std::endl;

				// Update the DataGridView with the result and status
				this->dataGridView3->Rows[i]->Cells["Result"]->Value = gcnew String(result.c_str());
				this->dataGridView3->Rows[i]->Cells["Status"]->Value = "Completed";
			}

			// Close the file
			outputFile.close();
		}
		catch (const std::exception& ex) {
			// Show an error message if any exception occurs
			MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

	private: string simulateMatchResult(string teamA, string teamB) {
		// Simple simulation logic: randomly decide the winner
		// You can replace this with your own logic for simulating match outcomes
		if (rand() % 2 == 0) {
			return teamA;  // teamA wins
		}
		else {
			return teamB;  // teamB wins
		}
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Schedule2^ schedule2 = gcnew Schedule2();
		schedule2->Show();
			   }

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}