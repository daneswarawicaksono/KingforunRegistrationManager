#pragma once
#include "ParticipantManager.h"

namespace KingforunRegistrationManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		ParticipantManager^ manager;

		bool isEditMode = false;
		String^ editingEmailOriginal = "";

	public:
		MyForm(void)
		{
			InitializeComponent();
			manager = gcnew ParticipantManager();
			LoadRegistrationData();
		}

	protected:
		~MyForm()
		{
			if (components) delete components;
		}

	private:
		// --- Declaration of Controls (Auto Generated) ---
		System::Windows::Forms::MenuStrip^ menuStrip1;
		System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ importCSVToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ exportCSVToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ refreshDataToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ statisticsToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
		System::Windows::Forms::TextBox^ txtnama;
		System::Windows::Forms::TextBox^ txtemail;
		System::Windows::Forms::TextBox^ textnomor;
		System::Windows::Forms::Button^ btn_enter;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::DateTimePicker^ birthDatePicker;
		System::Windows::Forms::RadioButton^ lk;
		System::Windows::Forms::RadioButton^ pr;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::TextBox^ txtalergi;
		System::Windows::Forms::Button^ btn_reset;
		System::Windows::Forms::DataGridView^ dataGridView1;
		System::Windows::Forms::TextBox^ txtSearch;
		System::Windows::Forms::Label^ lblSearch;
		System::Windows::Forms::Button^ btnSearch;
		System::Windows::Forms::Button^ btnEdit;
		System::Windows::Forms::Button^ btnDelete;
		System::Windows::Forms::Label^ lblTotalRecords;
		System::Windows::Forms::GroupBox^ groupBox1;
		System::Windows::Forms::GroupBox^ groupBox2;
		System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
		System::Windows::Forms::ToolStripMenuItem^ editRowMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ deleteRowMenuItem;
		System::Windows::Forms::PictureBox^ pictureBox2;
		System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importCSVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportCSVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->refreshDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statisticsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtnama = (gcnew System::Windows::Forms::TextBox());
			this->txtemail = (gcnew System::Windows::Forms::TextBox());
			this->textnomor = (gcnew System::Windows::Forms::TextBox());
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->birthDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->lk = (gcnew System::Windows::Forms::RadioButton());
			this->pr = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtalergi = (gcnew System::Windows::Forms::TextBox());
			this->btn_reset = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->editRowMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteRowMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->lblSearch = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->lblTotalRecords = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->viewToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1200, 24);
			this->menuStrip1->TabIndex = 0;
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->importCSVToolStripMenuItem,
					this->exportCSVToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// importCSVToolStripMenuItem
			// 
			this->importCSVToolStripMenuItem->Name = L"importCSVToolStripMenuItem";
			this->importCSVToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->importCSVToolStripMenuItem->Text = L"Import CSV Peserta";
			this->importCSVToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::importCSVToolStripMenuItem_Click);
			// 
			// exportCSVToolStripMenuItem
			// 
			this->exportCSVToolStripMenuItem->Name = L"exportCSVToolStripMenuItem";
			this->exportCSVToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->exportCSVToolStripMenuItem->Text = L"Export CSV";
			this->exportCSVToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exportCSVToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->refreshDataToolStripMenuItem,
					this->statisticsToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// refreshDataToolStripMenuItem
			// 
			this->refreshDataToolStripMenuItem->Name = L"refreshDataToolStripMenuItem";
			this->refreshDataToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->refreshDataToolStripMenuItem->Text = L"Refresh Data";
			this->refreshDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::refreshDataToolStripMenuItem_Click);
			// 
			// statisticsToolStripMenuItem
			// 
			this->statisticsToolStripMenuItem->Name = L"statisticsToolStripMenuItem";
			this->statisticsToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->statisticsToolStripMenuItem->Text = L"Statistics";
			this->statisticsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::statisticsToolStripMenuItem_Click);
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
			this->txtnama->Location = System::Drawing::Point(100, 27);
			this->txtnama->MaxLength = 100;
			this->txtnama->Name = L"txtnama";
			this->txtnama->Size = System::Drawing::Size(260, 20);
			this->txtnama->TabIndex = 21;
			// 
			// txtemail
			// 
			this->txtemail->Location = System::Drawing::Point(100, 53);
			this->txtemail->MaxLength = 100;
			this->txtemail->Name = L"txtemail";
			this->txtemail->Size = System::Drawing::Size(260, 20);
			this->txtemail->TabIndex = 20;
			// 
			// textnomer
			// 
			this->textnomor->Location = System::Drawing::Point(100, 79);
			this->textnomor->MaxLength = 15;
			this->textnomor->Name = L"textnomor";
			this->textnomor->Size = System::Drawing::Size(260, 20);
			this->textnomor->TabIndex = 19;
			// 
			// btn_enter
			// 
			this->btn_enter->BackColor = System::Drawing::Color::LightGreen;
			this->btn_enter->Location = System::Drawing::Point(285, 290);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(75, 30);
			this->btn_enter->TabIndex = 7;
			this->btn_enter->Text = L"Simpan";
			this->btn_enter->UseVisualStyleBackColor = false;
			this->btn_enter->Click += gcnew System::EventHandler(this, &MyForm::btn_enter_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Nama";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Email Pribadi";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Peru;
			this->pictureBox1->Location = System::Drawing::Point(13, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(265, 69);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Nomor Telp.";
			// 
			// birthDatePicker
			// 
			this->birthDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->birthDatePicker->Location = System::Drawing::Point(100, 132);
			this->birthDatePicker->Name = L"birthDatePicker";
			this->birthDatePicker->Size = System::Drawing::Size(260, 20);
			this->birthDatePicker->TabIndex = 15;
			// 
			// lk
			// 
			this->lk->AutoSize = true;
			this->lk->Location = System::Drawing::Point(100, 106);
			this->lk->Name = L"lk";
			this->lk->Size = System::Drawing::Size(68, 17);
			this->lk->TabIndex = 14;
			this->lk->Text = L"Laki-Laki";
			// 
			// pr
			// 
			this->pr->AutoSize = true;
			this->pr->Location = System::Drawing::Point(180, 106);
			this->pr->Name = L"pr";
			this->pr->Size = System::Drawing::Size(79, 17);
			this->pr->TabIndex = 13;
			this->pr->Text = L"Perempuan";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Jenis Kelamin";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Tanggal Lahir";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Alergi";
			// 
			// txtalergi
			// 
			this->txtalergi->Location = System::Drawing::Point(100, 158);
			this->txtalergi->MaxLength = 500;
			this->txtalergi->Multiline = true;
			this->txtalergi->Name = L"txtalergi";
			this->txtalergi->Size = System::Drawing::Size(260, 60);
			this->txtalergi->TabIndex = 9;
			// 
			// btn_reset
			// 
			this->btn_reset->BackColor = System::Drawing::Color::LightCoral;
			this->btn_reset->Location = System::Drawing::Point(204, 290);
			this->btn_reset->Name = L"btn_reset";
			this->btn_reset->Size = System::Drawing::Size(75, 30);
			this->btn_reset->TabIndex = 8;
			this->btn_reset->Text = L"Reset";
			this->btn_reset->UseVisualStyleBackColor = false;
			this->btn_reset->Click += gcnew System::EventHandler(this, &MyForm::btn_reset_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ContextMenuStrip = this->contextMenuStrip1;
			this->dataGridView1->Location = System::Drawing::Point(15, 50);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(760, 465);
			this->dataGridView1->TabIndex = 2;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->editRowMenuItem,
					this->deleteRowMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(136, 48);
			// 
			// editRowMenuItem
			// 
			this->editRowMenuItem->Name = L"editRowMenuItem";
			this->editRowMenuItem->Size = System::Drawing::Size(135, 22);
			this->editRowMenuItem->Text = L"Edit Data";
			this->editRowMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btnEdit_Click);
			// 
			// deleteRowMenuItem
			// 
			this->deleteRowMenuItem->Name = L"deleteRowMenuItem";
			this->deleteRowMenuItem->Size = System::Drawing::Size(135, 22);
			this->deleteRowMenuItem->Text = L"Hapus Data";
			this->deleteRowMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(50, 22);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(300, 20);
			this->txtSearch->TabIndex = 0;
			// 
			// lblSearch
			// 
			this->lblSearch->AutoSize = true;
			this->lblSearch->Location = System::Drawing::Point(15, 25);
			this->lblSearch->Name = L"lblSearch";
			this->lblSearch->Size = System::Drawing::Size(25, 13);
			this->lblSearch->TabIndex = 4;
			this->lblSearch->Text = L"Cari";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(360, 20);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->Text = L"Cari";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(445, 20);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(75, 23);
			this->btnEdit->TabIndex = 2;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &MyForm::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(530, 20);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 3;
			this->btnDelete->Text = L"Hapus";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// lblTotalRecords
			// 
			this->lblTotalRecords->AutoSize = true;
			this->lblTotalRecords->Location = System::Drawing::Point(15, 525);
			this->lblTotalRecords->Name = L"lblTotalRecords";
			this->lblTotalRecords->Size = System::Drawing::Size(86, 13);
			this->lblTotalRecords->TabIndex = 0;
			this->lblTotalRecords->Text = L"Total Records: 0";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_reset);
			this->groupBox1->Controls->Add(this->btn_enter);
			this->groupBox1->Controls->Add(this->txtalergi);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->pr);
			this->groupBox1->Controls->Add(this->lk);
			this->groupBox1->Controls->Add(this->birthDatePicker);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textnomor);
			this->groupBox1->Controls->Add(this->txtemail);
			this->groupBox1->Controls->Add(this->txtnama);
			this->groupBox1->Location = System::Drawing::Point(12, 103);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(380, 340);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Form Registrasi";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblTotalRecords);
			this->groupBox2->Controls->Add(this->btnSearch);
			this->groupBox2->Controls->Add(this->btnEdit);
			this->groupBox2->Controls->Add(this->btnDelete);
			this->groupBox2->Controls->Add(this->lblSearch);
			this->groupBox2->Controls->Add(this->txtSearch);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(398, 103);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(790, 550);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Data Registrasi";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::SaddleBrown;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(13, 28);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(265, 69);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->ClientSize = System::Drawing::Size(1200, 665);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kingforun Registration Manager v1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: void LoadRegistrationData() {
		LoadDataToList(manager->GetAllParticipants());
	}

	private: void LoadDataToList(List<Participant^>^ list) {
		dataGridView1->Rows->Clear();

		// Ensure columns exist (Defensive coding)
		if (dataGridView1->Columns->Count == 0) {
			dataGridView1->Columns->Add("Nama", "Nama");
			dataGridView1->Columns->Add("Email", "Email");
			dataGridView1->Columns->Add("Nomor", "Nomor Telepon");
			dataGridView1->Columns->Add("Gender", "Jenis Kelamin");
			dataGridView1->Columns->Add("BirthDate", "Tanggal Lahir");
			dataGridView1->Columns->Add("Alergi", "Alergi");
		}

		for each (Participant ^ p in list) {
			dataGridView1->Rows->Add(
				p->Nama, p->Email, p->NomorTelepon,
				p->Gender, p->TanggalLahir.ToShortDateString(), p->Alergi
			);
		}
		lblTotalRecords->Text = "Total Records: " + list->Count;
	}

	private: System::Void btn_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtnama->Text == "" || txtemail->Text == "" || textnomor->Text == "" || (!lk->Checked && !pr->Checked)) {
			MessageBox::Show("Semua kolom harus diisi!", "Validasi", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (!manager->IsValidEmail(txtemail->Text)) {
			MessageBox::Show("Email tidak valid!", "Validasi", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (isEditMode) {
			if (txtemail->Text->Trim()->ToLower() != editingEmailOriginal->Trim()->ToLower()) {
				if (manager->IsDuplicate(txtemail->Text)) {
					MessageBox::Show("Email baru ini sudah terdaftar!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}
			}
		}
		else {
			if (manager->IsDuplicate(txtemail->Text)) {
				MessageBox::Show("Email sudah terdaftar!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
		}

		Participant^ p = gcnew Participant();
		p->Nama = txtnama->Text->Trim();
		p->Email = txtemail->Text->Trim();
		p->NomorTelepon = textnomor->Text->Trim();
		p->Gender = lk->Checked ? "Laki-Laki" : "Perempuan";
		p->TanggalLahir = birthDatePicker->Value;
		p->Alergi = txtalergi->Text->Trim();

		try {
			this->Cursor = Cursors::WaitCursor;
			if (isEditMode) {
				manager->UpdateParticipant(editingEmailOriginal, p);
				MessageBox::Show("Data berhasil diperbarui!", "Sukses");
			}
			else {
				manager->AddParticipant(p);
				MessageBox::Show("Data berhasil disimpan!", "Sukses");
			}
			LoadRegistrationData();
			btn_reset_Click(sender, e);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			this->Cursor = Cursors::Default;
		}
	}

	private: System::Void btn_reset_Click(System::Object^ sender, System::EventArgs^ e) {
		txtnama->Clear(); txtemail->Clear(); textnomor->Clear(); txtalergi->Clear();
		lk->Checked = false; pr->Checked = false; birthDatePicker->Value = DateTime::Now;
		isEditMode = false; editingEmailOriginal = "";
		btn_enter->Text = "Simpan"; btn_enter->BackColor = System::Drawing::Color::LightGreen;
		groupBox1->Text = "Form Registrasi";
	}

	private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count == 0) return;

		DataGridViewRow^ row = dataGridView1->SelectedRows[0];
		txtnama->Text = row->Cells[0]->Value->ToString();
		txtemail->Text = row->Cells[1]->Value->ToString();
		textnomor->Text = row->Cells[2]->Value->ToString();

		String^ gender = row->Cells[3]->Value->ToString();
		if (gender == "Laki-Laki") lk->Checked = true; else pr->Checked = true;

		try { birthDatePicker->Value = DateTime::Parse(row->Cells[4]->Value->ToString()); }
		catch (...) { birthDatePicker->Value = DateTime::Now; }

		txtalergi->Text = row->Cells[5]->Value->ToString();

		isEditMode = true;
		editingEmailOriginal = txtemail->Text;
		btn_enter->Text = "Update"; btn_enter->BackColor = System::Drawing::Color::LightBlue;
		groupBox1->Text = "Edit Data Peserta";
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count == 0) return;

		if (MessageBox::Show("Hapus data terpilih?", "Konfirmasi", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			List<String^>^ emailsToDelete = gcnew List<String^>();
			for (int i = 0; i < dataGridView1->SelectedRows->Count; i++) {
				emailsToDelete->Add(dataGridView1->SelectedRows[i]->Cells[1]->Value->ToString());
			}

			manager->DeleteParticipants(emailsToDelete);

			MessageBox::Show("Data dihapus.");
			LoadRegistrationData();

			if (isEditMode && emailsToDelete->Contains(editingEmailOriginal)) {
				btn_reset_Click(nullptr, nullptr);
			}
		}
	}

	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ term = txtSearch->Text->Trim();
		if (String::IsNullOrWhiteSpace(term)) {
			LoadRegistrationData();
		}
		else {
			LoadDataToList(manager->SearchParticipants(term));
		}
	}

	private: System::Void importCSVToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openDialog = gcnew OpenFileDialog();
		openDialog->Filter = "CSV Files|*.csv";
		if (openDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			manager->ImportCSV(openDialog->FileName);
			LoadRegistrationData();
			MessageBox::Show("Import Sukses!");
		}
	}

	private: System::Void exportCSVToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
		saveDialog->Filter = "CSV Files|*.csv";
		saveDialog->FileName = "export_" + DateTime::Now.ToString("yyyyMMdd") + ".csv";
		if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			manager->ExportCSV(saveDialog->FileName);
			MessageBox::Show("Export Sukses!");
		}
	}

	private: System::Void refreshDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { LoadRegistrationData(); }
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit(); }
	private: System::Void statisticsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { MessageBox::Show("Fitur statistik aktif."); }
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { MessageBox::Show("Kingforun Registration v1"); }
	};
}