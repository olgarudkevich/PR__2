#pragma once

namespace PR6 {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(330, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(480, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(330, 212);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(480, 150);
			this->dataGridView2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ПІБ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Курс";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Група";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Пропуски з поважної причини";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(171, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Пропуски без поважної причини";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(65, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(223, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(65, 90);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(81, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(65, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(81, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(189, 209);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(99, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(189, 270);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(99, 20);
			this->textBox5->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 39);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Додати студента";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(522, 383);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 38);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Перевірити пропуски";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(864, 442);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ref struct Student {
			String^ FIO;
			String^ Curs;
			String^ Gruppa;
			int validPass;
			int invalidPass;
		};
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			dataGridView1->Columns->Add("FIO", "ПІБ");
			dataGridView1->Columns->Add("Curs", "Курс");
			dataGridView1->Columns->Add("Gruppa", "Група");
			dataGridView1->Columns->Add("validPass", "Пропуски з поважної причини");
			dataGridView1->Columns->Add("invalidPass", "Пропуски без поважної причини");
			dataGridView2->Columns->Add("FIO", "ПІБ");
			dataGridView2->Columns->Add("Curs", "Курс");
			dataGridView2->Columns->Add("Gruppa", "Група");
			dataGridView2->Columns->Add("validPass", "Пропуски з поважної причини");
			dataGridView2->Columns->Add("invalidPass", "Пропуски без поважної причини");
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Student^ stud = gcnew Student();

	stud->FIO = textBox1->Text;
	stud->Curs = textBox2->Text;
	stud->Gruppa = textBox3->Text;
	stud->validPass = Convert::ToInt32(textBox4->Text);
	stud->invalidPass = Convert::ToInt32(textBox5->Text);

	dataGridView1->Rows->Add(stud->FIO, stud->Curs, stud->Gruppa, stud->validPass, stud->invalidPass);

	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView2->Rows->Clear();

	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		if (dataGridView1->Rows[i]->Cells["InvalidPass"]->Value != nullptr) {
			String^ FIO = dataGridView1->Rows[i]->Cells["FIO"]->Value->ToString();
			String^ Curs = dataGridView1->Rows[i]->Cells["Curs"]->Value->ToString();
			String^ Gruppa = dataGridView1->Rows[i]->Cells["Gruppa"]->Value->ToString();
			int invalidPass = Convert::ToInt32(dataGridView1->Rows[i]->Cells["InvalidPass"]->Value);

			if (invalidPass > 10) {
				dataGridView2->Rows->Add(FIO, Curs, Gruppa, invalidPass);
			}
		}
	}
	int studentCount = dataGridView2->Rows->Count;

	if (dataGridView2->AllowUserToAddRows && studentCount > 0) {
		studentCount--;
	}

	MessageBox::Show("Кількість студентів: " + studentCount.ToString(), "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}