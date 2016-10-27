#pragma once

namespace Info450ExtraCredit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::TextBox^  breweryTB;
	private: System::Windows::Forms::TextBox^  bNameTB;
	private: System::Windows::Forms::TextBox^  ratingTB;



	private: System::Windows::Forms::ComboBox^  bTypeCB;
	private: System::Windows::Forms::TextBox^  alcContTB;


	private: System::Windows::Forms::Label^  breweryL;
	private: System::Windows::Forms::Label^  bNameL;
	private: System::Windows::Forms::Label^  bTypeL;
	private: System::Windows::Forms::Label^  ratingL;
	private: System::Windows::Forms::Label^  alcContL;






	private: System::Windows::Forms::Button^  bOpen;






	private: System::Windows::Forms::Button^  bAdd;

	private: System::Windows::Forms::Button^  bClose;


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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->breweryTB = (gcnew System::Windows::Forms::TextBox());
			this->bNameTB = (gcnew System::Windows::Forms::TextBox());
			this->ratingTB = (gcnew System::Windows::Forms::TextBox());
			this->bTypeCB = (gcnew System::Windows::Forms::ComboBox());
			this->alcContTB = (gcnew System::Windows::Forms::TextBox());
			this->breweryL = (gcnew System::Windows::Forms::Label());
			this->bNameL = (gcnew System::Windows::Forms::Label());
			this->bTypeL = (gcnew System::Windows::Forms::Label());
			this->ratingL = (gcnew System::Windows::Forms::Label());
			this->alcContL = (gcnew System::Windows::Forms::Label());
			this->bOpen = (gcnew System::Windows::Forms::Button());
			this->bAdd = (gcnew System::Windows::Forms::Button());
			this->bClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->Location = System::Drawing::Point(9, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(361, 247);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Brewery";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Beer Name";
			this->columnHeader2->Width = 72;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Beer Type";
			this->columnHeader3->Width = 70;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Rating";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Alcohol Content";
			this->columnHeader5->Width = 91;
			// 
			// breweryTB
			// 
			this->breweryTB->Location = System::Drawing::Point(379, 28);
			this->breweryTB->Name = L"breweryTB";
			this->breweryTB->Size = System::Drawing::Size(171, 20);
			this->breweryTB->TabIndex = 1;
			// 
			// bNameTB
			// 
			this->bNameTB->Location = System::Drawing::Point(379, 73);
			this->bNameTB->Name = L"bNameTB";
			this->bNameTB->Size = System::Drawing::Size(171, 20);
			this->bNameTB->TabIndex = 2;
			// 
			// ratingTB
			// 
			this->ratingTB->Location = System::Drawing::Point(380, 170);
			this->ratingTB->Name = L"ratingTB";
			this->ratingTB->Size = System::Drawing::Size(171, 20);
			this->ratingTB->TabIndex = 3;
			// 
			// bTypeCB
			// 
			this->bTypeCB->FormattingEnabled = true;
			this->bTypeCB->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Lager", L"Stout", L"Ale", L"IPA", L"Sour", L"Gose",
					L"Cider", L"Other"
			});
			this->bTypeCB->Location = System::Drawing::Point(379, 120);
			this->bTypeCB->Name = L"bTypeCB";
			this->bTypeCB->Size = System::Drawing::Size(171, 21);
			this->bTypeCB->TabIndex = 4;
			// 
			// alcContTB
			// 
			this->alcContTB->Location = System::Drawing::Point(379, 226);
			this->alcContTB->Name = L"alcContTB";
			this->alcContTB->Size = System::Drawing::Size(171, 20);
			this->alcContTB->TabIndex = 5;
			// 
			// breweryL
			// 
			this->breweryL->AutoSize = true;
			this->breweryL->Location = System::Drawing::Point(376, 12);
			this->breweryL->Name = L"breweryL";
			this->breweryL->Size = System::Drawing::Size(45, 13);
			this->breweryL->TabIndex = 6;
			this->breweryL->Text = L"Brewery";
			// 
			// bNameL
			// 
			this->bNameL->AutoSize = true;
			this->bNameL->Location = System::Drawing::Point(376, 57);
			this->bNameL->Name = L"bNameL";
			this->bNameL->Size = System::Drawing::Size(60, 13);
			this->bNameL->TabIndex = 7;
			this->bNameL->Text = L"Beer Name";
			// 
			// bTypeL
			// 
			this->bTypeL->AutoSize = true;
			this->bTypeL->Location = System::Drawing::Point(376, 104);
			this->bTypeL->Name = L"bTypeL";
			this->bTypeL->Size = System::Drawing::Size(56, 13);
			this->bTypeL->TabIndex = 8;
			this->bTypeL->Text = L"Beer Type";
			// 
			// ratingL
			// 
			this->ratingL->AutoSize = true;
			this->ratingL->Location = System::Drawing::Point(377, 154);
			this->ratingL->Name = L"ratingL";
			this->ratingL->Size = System::Drawing::Size(63, 13);
			this->ratingL->TabIndex = 9;
			this->ratingL->Text = L"Beer Rating";
			// 
			// alcContL
			// 
			this->alcContL->AutoSize = true;
			this->alcContL->Location = System::Drawing::Point(376, 210);
			this->alcContL->Name = L"alcContL";
			this->alcContL->Size = System::Drawing::Size(82, 13);
			this->alcContL->TabIndex = 10;
			this->alcContL->Text = L"Alcohol Content";
			// 
			// bOpen
			// 
			this->bOpen->Location = System::Drawing::Point(265, 269);
			this->bOpen->Name = L"bOpen";
			this->bOpen->Size = System::Drawing::Size(81, 36);
			this->bOpen->TabIndex = 11;
			this->bOpen->Text = L"Open";
			this->bOpen->UseVisualStyleBackColor = true;
			this->bOpen->Click += gcnew System::EventHandler(this, &MyForm::bOpen_Click);
			// 
			// bAdd
			// 
			this->bAdd->Location = System::Drawing::Point(363, 269);
			this->bAdd->Name = L"bAdd";
			this->bAdd->Size = System::Drawing::Size(84, 36);
			this->bAdd->TabIndex = 12;
			this->bAdd->Text = L"Add";
			this->bAdd->UseVisualStyleBackColor = true;
			this->bAdd->Click += gcnew System::EventHandler(this, &MyForm::bAdd_Click);
			// 
			// bClose
			// 
			this->bClose->Location = System::Drawing::Point(463, 269);
			this->bClose->Name = L"bClose";
			this->bClose->Size = System::Drawing::Size(87, 36);
			this->bClose->TabIndex = 13;
			this->bClose->Text = L"Close";
			this->bClose->UseVisualStyleBackColor = true;
			this->bClose->Click += gcnew System::EventHandler(this, &MyForm::bClose_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 311);
			this->Controls->Add(this->bClose);
			this->Controls->Add(this->bAdd);
			this->Controls->Add(this->bOpen);
			this->Controls->Add(this->alcContL);
			this->Controls->Add(this->ratingL);
			this->Controls->Add(this->bTypeL);
			this->Controls->Add(this->bNameL);
			this->Controls->Add(this->breweryL);
			this->Controls->Add(this->alcContTB);
			this->Controls->Add(this->bTypeCB);
			this->Controls->Add(this->ratingTB);
			this->Controls->Add(this->bNameTB);
			this->Controls->Add(this->breweryTB);
			this->Controls->Add(this->listView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void bClose_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Close();
}
private: System::Void bOpen_Click(System::Object^  sender, System::EventArgs^  e) 
{
	OpenFileDialog^ ofDialog = gcnew OpenFileDialog();
	StreamReader^ input;
	String^ line;
	if (ofDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{ 
		input = gcnew StreamReader(ofDialog->OpenFile());
		if (!input->EndOfStream)
		{
			line = input->ReadLine();
			array<String ^> ^fields = line->Split(',');
		}
	}
}
private: System::Void bAdd_Click(System::Object^  sender, System::EventArgs^  e) 
{
	listViewItem = gcnew System::Windows::Forms::ListViewItem(this->breweryTB->Text);
	listViewItem->SubItems->Add(this->bNameTB-> Text);
	listViewItem->SubItems->Add(this->bTypeCB->Text);
	listViewItem->SubItems->Add(this->ratingTB->Text);
	listViewItem->SubItems->Add(this->alcContTB->Text);
	listView1->Items->Add(listViewItem);
}
};
}
