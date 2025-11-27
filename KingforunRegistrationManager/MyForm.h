#pragma once

namespace KingforunRegistrationManager {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ importCSVToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exportXLSXSementaraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtnama;


	private: System::Windows::Forms::TextBox^ txtemail;

	private: System::Windows::Forms::TextBox^ textnomor;


	private: System::Windows::Forms::Button^ btn_enter;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MonthCalendar^ ttl;
	private: System::Windows::Forms::RadioButton^ lk;
	private: System::Windows::Forms::RadioButton^ pr;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtalergi;


	private: System::Windows::Forms::Button^ btn_reset;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importCSVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportXLSXSementaraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtnama = (gcnew System::Windows::Forms::TextBox());
			this->txtemail = (gcnew System::Windows::Forms::TextBox());
			this->textnomor = (gcnew System::Windows::Forms::TextBox());
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ttl = (gcnew System::Windows::Forms::MonthCalendar());
			this->lk = (gcnew System::Windows::Forms::RadioButton());
			this->pr = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtalergi = (gcnew System::Windows::Forms::TextBox());
			this->btn_reset = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(579, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->UseWaitCursor = true;
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->importCSVToolStripMenuItem,
					this->exportXLSXSementaraToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// importCSVToolStripMenuItem
			// 
			this->importCSVToolStripMenuItem->Name = L"importCSVToolStripMenuItem";
			this->importCSVToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->importCSVToolStripMenuItem->Text = L"Import CSV Peserta";
			this->importCSVToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::importCSVToolStripMenuItem_Click);
			// 
			// exportXLSXSementaraToolStripMenuItem
			// 
			this->exportXLSXSementaraToolStripMenuItem->Name = L"exportXLSXSementaraToolStripMenuItem";
			this->exportXLSXSementaraToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->exportXLSXSementaraToolStripMenuItem->Text = L"Export XLSX Sementara";
			this->exportXLSXSementaraToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exportXLSXSementaraToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// txtnama
			// 
			this->txtnama->Location = System::Drawing::Point(88, 106);
			this->txtnama->Name = L"txtnama";
			this->txtnama->Size = System::Drawing::Size(477, 20);
			this->txtnama->TabIndex = 1;
			this->txtnama->UseWaitCursor = true;
			this->txtnama->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txtemail
			// 
			this->txtemail->Location = System::Drawing::Point(88, 132);
			this->txtemail->Name = L"txtemail";
			this->txtemail->Size = System::Drawing::Size(477, 20);
			this->txtemail->TabIndex = 2;
			this->txtemail->UseWaitCursor = true;
			// 
			// textnomor
			// 
			this->textnomor->Location = System::Drawing::Point(88, 158);
			this->textnomor->Name = L"textnomor";
			this->textnomor->Size = System::Drawing::Size(477, 20);
			this->textnomor->TabIndex = 4;
			this->textnomor->UseWaitCursor = true;
			// 
			// btn_enter
			// 
			this->btn_enter->Location = System::Drawing::Point(490, 453);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(75, 23);
			this->btn_enter->TabIndex = 5;
			this->btn_enter->Text = L"Enter";
			this->btn_enter->UseVisualStyleBackColor = true;
			this->btn_enter->UseWaitCursor = true;
			this->btn_enter->Click += gcnew System::EventHandler(this, &MyForm::btn_enter_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(15, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nama";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->UseWaitCursor = true;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Email Pribadi";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->UseWaitCursor = true;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Peru;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->pictureBox1->ImageLocation = L"D:\\tugas-progdas\\project akhir sem 1\\KingforunRegistrationManager\\mainlogo.bmp";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(13, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(265, 69);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label3->Location = System::Drawing::Point(14, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Nomor Telp.";
			this->label3->UseWaitCursor = true;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// ttl
			// 
			this->ttl->Location = System::Drawing::Point(88, 212);
			this->ttl->Name = L"ttl";
			this->ttl->TabIndex = 10;
			this->ttl->UseWaitCursor = true;
			// 
			// lk
			// 
			this->lk->AutoSize = true;
			this->lk->Location = System::Drawing::Point(92, 184);
			this->lk->Name = L"lk";
			this->lk->Size = System::Drawing::Size(68, 17);
			this->lk->TabIndex = 11;
			this->lk->TabStop = true;
			this->lk->Text = L"Laki-Laki";
			this->lk->UseVisualStyleBackColor = true;
			this->lk->UseWaitCursor = true;
			// 
			// pr
			// 
			this->pr->AutoSize = true;
			this->pr->Location = System::Drawing::Point(199, 184);
			this->pr->Name = L"pr";
			this->pr->Size = System::Drawing::Size(79, 17);
			this->pr->TabIndex = 12;
			this->pr->TabStop = true;
			this->pr->Text = L"Perempuan";
			this->pr->UseVisualStyleBackColor = true;
			this->pr->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Jenis Kelamin";
			this->label4->UseWaitCursor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Tanggal Lahir";
			this->label5->UseWaitCursor = true;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label6->Location = System::Drawing::Point(14, 389);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Alergi";
			this->label6->UseWaitCursor = true;
			// 
			// txtalergi
			// 
			this->txtalergi->Location = System::Drawing::Point(88, 386);
			this->txtalergi->Name = L"txtalergi";
			this->txtalergi->Size = System::Drawing::Size(477, 20);
			this->txtalergi->TabIndex = 15;
			this->txtalergi->UseWaitCursor = true;
			// 
			// btn_reset
			// 
			this->btn_reset->Location = System::Drawing::Point(409, 453);
			this->btn_reset->Name = L"btn_reset";
			this->btn_reset->Size = System::Drawing::Size(75, 23);
			this->btn_reset->TabIndex = 17;
			this->btn_reset->Text = L"Reset";
			this->btn_reset->UseVisualStyleBackColor = true;
			this->btn_reset->UseWaitCursor = true;
			this->btn_reset->Click += gcnew System::EventHandler(this, &MyForm::btn_reset_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->ClientSize = System::Drawing::Size(579, 488);
			this->Controls->Add(this->btn_reset);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtalergi);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pr);
			this->Controls->Add(this->lk);
			this->Controls->Add(this->ttl);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_enter);
			this->Controls->Add(this->textnomor);
			this->Controls->Add(this->txtemail);
			this->Controls->Add(this->txtnama);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Kingforun Registration Manager v.1.0";
			this->UseWaitCursor = true;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	   // FUNCTION 1: Replace your btn_enter_Click function (around line 408)
private: System::Void btn_enter_Click(System::Object^ sender, System::EventArgs^ e) {
	// Validate required fields
	if (String::IsNullOrWhiteSpace(txtnama->Text) ||
		String::IsNullOrWhiteSpace(txtemail->Text) ||
		String::IsNullOrWhiteSpace(textnomor->Text) ||
		(!lk->Checked && !pr->Checked)) {
		MessageBox::Show("Please fill in all required fields!", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Get gender
	String^ gender = lk->Checked ? "Laki-Laki" : "Perempuan";

	// Get birth date
	String^ birthDate = ttl->SelectionStart.ToString("dd/MM/yyyy");

	// Prepare CSV line
	String^ csvLine = String::Format("{0},{1},{2},{3},{4},{5}\n",
		txtnama->Text,
		txtemail->Text,
		textnomor->Text,
		gender,
		birthDate,
		txtalergi->Text);

	try {
		// Check if file exists, if not create with header
		String^ filePath = "registrations.csv";
		if (!System::IO::File::Exists(filePath)) {
			System::IO::File::WriteAllText(filePath, "Nama,Email,Nomor,Jenis Kelamin,Tanggal Lahir,Alergi\n");
		}

		// Append data to CSV
		System::IO::File::AppendAllText(filePath, csvLine);

		MessageBox::Show("Data saved successfully to registrations.csv!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Clear form after saving
		btn_reset_Click(sender, e);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error saving data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   // FUNCTION 2: Replace your btn_reset_Click function
private: System::Void btn_reset_Click(System::Object^ sender, System::EventArgs^ e) {
	// Clear all form fields
	txtnama->Clear();
	txtemail->Clear();
	textnomor->Clear();
	txtalergi->Clear();
	lk->Checked = false;
	pr->Checked = false;
	ttl->SetDate(DateTime::Now);
}

	   // FUNCTION 3: Replace your exportXLSXSementaraToolStripMenuItem_Click function
private: System::Void exportXLSXSementaraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
	saveDialog->Filter = "CSV Files (*.csv)|*.csv";
	saveDialog->DefaultExt = "csv";
	saveDialog->FileName = "registrations_export.csv";

	if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			if (!System::IO::File::Exists("registrations.csv")) {
				MessageBox::Show("No registration data found to export!", "Export", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Copy CSV file
			System::IO::File::Copy("registrations.csv", saveDialog->FileName, true);
			MessageBox::Show("Data exported successfully!\n\nYou can open this CSV file directly in Excel.", "Export", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error exporting: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

	   // FUNCTION 4: Replace your exitToolStripMenuItem_Click function
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Close the application
	Application::Exit();
}

	   // Keep your existing event handlers
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // REPLACE your empty importCSVToolStripMenuItem_Click function with this:
private: System::Void importCSVToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openDialog = gcnew OpenFileDialog();
	openDialog->Filter = "CSV Files (*.csv)|*.csv";
	openDialog->Title = "Select CSV File to Import";

	if (openDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			// Read all lines from CSV
			array<String^>^ lines = System::IO::File::ReadAllLines(openDialog->FileName);

			if (lines->Length <= 1) {
				MessageBox::Show("CSV file is empty or only contains headers!", "Import Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Skip header (first line) and append data to registrations.csv
			String^ filePath = "registrations.csv";

			// Create file with header if it doesn't exist
			if (!System::IO::File::Exists(filePath)) {
				System::IO::File::WriteAllText(filePath, "Nama,Email,Nomor,Jenis Kelamin,Tanggal Lahir,Alergi\n");
			}

			// Append all data lines (skip the header from imported file)
			for (int i = 1; i < lines->Length; i++) {
				System::IO::File::AppendAllText(filePath, lines[i] + "\n");
			}

			int recordCount = lines->Length - 1;
			MessageBox::Show(String::Format("Successfully imported {0} records!", recordCount),
				"Import Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error importing CSV: " + ex->Message, "Import Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Kingforun Registration Manager v.1.0\nDeveloped by Daneswara, Faiz, and Rezon \n2025", "About Kingforun Registration Manager", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
