#pragma once
#include "Schedule.h"
#include "Match.h"
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <string>


namespace Projectnew {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Schedule2
	/// </summary>
	/// 
	public ref class Schedule2 : public System::Windows::Forms::Form

	{

	public:
		Schedule2(void)
		{
			InitializeComponent();
			schedule = new Schedule();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Schedule2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Schedule* schedule;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ Menupanel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ showButton;
	private: System::Windows::Forms::Button^ runButton;
	private: System::Windows::Forms::Button^ showButton2;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Schedule2::typeid));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Menupanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->showButton = (gcnew System::Windows::Forms::Button());
			this->runButton = (gcnew System::Windows::Forms::Button());
			this->showButton2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->Menupanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox3
			// 
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1924, 1055);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Schedule2::pictureBox3_Click);
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
			this->Menupanel->TabIndex = 12;
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
			this->dataGridView2->Location = System::Drawing::Point(19, 341);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(995, 236);
			this->dataGridView2->TabIndex = 7;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(1103, 341);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(995, 236);
			this->dataGridView3->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(345, 280);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 37);
			this->label2->TabIndex = 16;
			this->label2->Text = L"     Semi Final     ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1524, 280);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 37);
			this->label1->TabIndex = 17;
			this->label1->Text = L"       Final     ";
			// 
			// showButton
			// 
			this->showButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showButton->ForeColor = System::Drawing::Color::Black;
			this->showButton->Location = System::Drawing::Point(23, 598);
			this->showButton->Margin = System::Windows::Forms::Padding(4);
			this->showButton->Name = L"showButton";
			this->showButton->Size = System::Drawing::Size(228, 42);
			this->showButton->TabIndex = 18;
			this->showButton->Text = L"Show";
			this->showButton->UseVisualStyleBackColor = true;
			this->showButton->Click += gcnew System::EventHandler(this, &Schedule2::showButton_Click);
			// 
			// runButton
			// 
			this->runButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->runButton->ForeColor = System::Drawing::Color::Black;
			this->runButton->Location = System::Drawing::Point(744, 608);
			this->runButton->Margin = System::Windows::Forms::Padding(4);
			this->runButton->Name = L"runButton";
			this->runButton->Size = System::Drawing::Size(228, 42);
			this->runButton->TabIndex = 19;
			this->runButton->Text = L"Run";
			this->runButton->UseVisualStyleBackColor = true;
			this->runButton->Click += gcnew System::EventHandler(this, &Schedule2::runButton_Click);
			// 
			// showButton2
			// 
			this->showButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showButton2->ForeColor = System::Drawing::Color::Black;
			this->showButton2->Location = System::Drawing::Point(1103, 608);
			this->showButton2->Margin = System::Windows::Forms::Padding(4);
			this->showButton2->Name = L"showButton2";
			this->showButton2->Size = System::Drawing::Size(228, 42);
			this->showButton2->TabIndex = 20;
			this->showButton2->Text = L"Show";
			this->showButton2->UseVisualStyleBackColor = true;
			this->showButton2->Click += gcnew System::EventHandler(this, &Schedule2::showButton2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(1684, 608);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 42);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Schedule2::button1_Click);
			// 
			// Schedule2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->showButton2);
			this->Controls->Add(this->runButton);
			this->Controls->Add(this->showButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->Menupanel);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"Schedule2";
			this->Text = L"Schedule2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->Menupanel->ResumeLayout(false);
			this->Menupanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void showButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Read teams from the file
			std::string teams[4];
			readTeamsFromFile("C:/Users/user/Desktop/WinningTeams.txt", teams);

			// Generate Matches
			int matchCount = 2; // Fixed for two matches
			Match matches[2];
			generateMatches(teams, matches, matchCount);

			// Populate DataGridView without results
			PopulateDataGridView(this->dataGridView2, matches, matchCount, false);
		}
		catch (const exception& ex) {
			MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void runButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Only update results and status
		for (int i = 0; i < this->dataGridView2->Rows->Count; i++) {
			if (this->dataGridView2->Rows[i]->IsNewRow) continue;

			// Extract Team A and Team B for this row
			std::string teamA = msclr::interop::marshal_as<std::string>(this->dataGridView2->Rows[i]->Cells["TeamA"]->Value->ToString());
			std::string teamB = msclr::interop::marshal_as<std::string>(this->dataGridView2->Rows[i]->Cells["TeamB"]->Value->ToString());

			// Randomly select a winner
			std::string winner = (rand() % 2 == 0) ? teamA : teamB;

			// Update Result and Status columns
			this->dataGridView2->Rows[i]->Cells["Result"]->Value = gcnew String(winner.c_str());
			this->dataGridView2->Rows[i]->Cells["Status"]->Value = "Completed";
		}
	}
	catch (const std::exception& ex) {
		MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	}

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
				   // Random Time Generation (example: between 10:00 and 18:00)
				   int hour = rand() % 9 + 10; // Random hour between 10 and 18
				   int minute = rand() % 60;  // Random minute between 0 and 59
				   System::String^ time = hour.ToString() + ":" + (minute < 10 ? "0" : "") + minute.ToString();

				   // Generate a random date (using DateTime)
				   System::DateTime currentDate = System::DateTime::Now;
				   System::String^ date = currentDate.ToString("dd-MM-yyyy");

				   // Add row with random Time and Date
				   gridView->Rows->Add(
					   matches[i].matchNo,
					   gcnew String(matches[i].teamA.c_str()),
					   gcnew String(matches[i].teamB.c_str()),
					   time,   // Add random time
					   date,   // Add current date
					   gcnew String(matches[i].status.c_str()),
					   gcnew String(includeResults ? matches[i].result.c_str() : "Pending")
				   );
			   }
		   }


		   void readTeamsFromFile(const std::string& filePath, std::string* teams) {
			   std::ifstream inputFile(filePath);
			   if (!inputFile.is_open()) {
				   throw std::runtime_error("Failed to open the file.");
			   }

			   // Read exactly 4 teams
			   for (int i = 0; i < 4; ++i) {
				   if (!std::getline(inputFile, teams[i])) {
					   throw std::runtime_error("Insufficient teams in the file.");
				   }
			   }

			   inputFile.close();
		   }

		   void generateMatches(const std::string* teams, Match* matches, int matchCount) {
			   // Match 1
			   matches[0].matchNo = 1;
			   matches[0].teamA = teams[0];
			   matches[0].teamB = teams[1];
			   matches[0].status = "Scheduled";
			   matches[0].result = "";

			   // Match 2
			   matches[1].matchNo = 2;
			   matches[1].teamA = teams[2];
			   matches[1].teamB = teams[3];
			   matches[1].status = "Scheduled";
			   matches[1].result = "";
		   }

		   void simulateResults(Match* matches, int matchCount) {
			   for (int i = 0; i < matchCount; ++i) {
				   // Randomly decide the winner
				   matches[i].result = (rand() % 2 == 0) ? matches[i].teamA : matches[i].teamB;
				   matches[i].status = "Completed";
			   }
		   }

	private: System::Void showButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	
			try {
				// Read the winners from the Result column of dataGridView2
				std::string winners[2];
				int winnerCount = 0;

				// Loop through all the rows in dataGridView2 to find the winners
				for (int i = 0; i < this->dataGridView2->Rows->Count; i++) {
					if (this->dataGridView2->Rows[i]->IsNewRow) continue;

					// Extract the result (winner) from the "Result" column
					System::String^ result = this->dataGridView2->Rows[i]->Cells["Result"]->Value->ToString();

					// Convert result to std::string and store in winners array
					winners[winnerCount] = msclr::interop::marshal_as<std::string>(result);
					winnerCount++;

					// Stop once we have 2 winners (since we only need to schedule 1 match between them)
					if (winnerCount == 2) {
						break;
					}
				}

				// If we have two winners, schedule a match between them
				if (winnerCount == 2) {
					// Schedule the final match between the two winners
					Match finalMatch;
					finalMatch.matchNo = 3; // Match number 3 (final match)
					finalMatch.teamA = winners[0];
					finalMatch.teamB = winners[1];
					finalMatch.status = "Scheduled";
					finalMatch.result = "";

					// Create an array with the final match
					Match finalMatches[1] = { finalMatch };
					int finalMatchCount = 1;  // Only 1 match for the final

					// Populate DataGridView with the scheduled final match (without results)
					PopulateDataGridView(this->dataGridView3, finalMatches, finalMatchCount, false);
				}
				else {
					MessageBox::Show("Not enough winners to schedule a final match.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (const std::exception& ex) {
				MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		
	}

  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
   {
	try {
		// Loop through the rows of dataGridView3 (final match)
		for (int i = 0; i < this->dataGridView3->Rows->Count; i++) {
			if (this->dataGridView3->Rows[i]->IsNewRow) continue;

			// Extract Team A and Team B for this final match
			std::string teamA = msclr::interop::marshal_as<std::string>(this->dataGridView3->Rows[i]->Cells["TeamA"]->Value->ToString());
			std::string teamB = msclr::interop::marshal_as<std::string>(this->dataGridView3->Rows[i]->Cells["TeamB"]->Value->ToString());

			// Randomly select a winner (Team A or Team B)
			std::string winner = (rand() % 2 == 0) ? teamA : teamB;

			// Update the Result and Status columns in the final match
			this->dataGridView3->Rows[i]->Cells["Result"]->Value = gcnew String(winner.c_str());
			this->dataGridView3->Rows[i]->Cells["Status"]->Value = "Completed";
		}
	}
	catch (const std::exception& ex) 
	{
		MessageBox::Show(gcnew String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


   }
};
}

