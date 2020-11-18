#pragma once

namespace QuanLyBanHang {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Bill
	/// </summary>
	public ref class Bill : public System::Windows::Forms::Form
	{
	public:
		Bill(void)
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
		~Bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ groupBox_ExportBill_Detail;
	private: System::Windows::Forms::GroupBox^ groupBox_ExportBill_List;
	protected:


	private: System::Windows::Forms::GroupBox^ groupBox_ExportBill_Information;

	private: System::Windows::Forms::GroupBox^ groupBox_ExportBill_GoodsList;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label_ExportBill_Employee;

	private: System::Windows::Forms::Label^ label_ExportBill_Date;

	private: System::Windows::Forms::Label^ label_Export_Bill_code;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_ExportBill;

	private: System::Windows::Forms::Label^ label_ExportBill_Price;
	private: System::Windows::Forms::Label^ label_ExportBill_Amount;
	private: System::Windows::Forms::Label^ label_ExportBill_Goods_Name;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView_ExportBill_GoodsList;

	private: System::Windows::Forms::DataGridView^ dataGridView_ExportBill_ExportBillList;

	private: System::Windows::Forms::Button^ button_ExportBill_PrintBill;
	private: System::Windows::Forms::Button^ button_ExportBill_DeleteBill;
	private: System::Windows::Forms::Button^ button_ExportBill_EditBill;
	private: System::Windows::Forms::Button^ button_ExporBill_InsertBill;
	private: System::Windows::Forms::Button^ button_ExportBill_Delete;

	private: System::Windows::Forms::Button^ button_ExportBill_Edit;

	private: System::Windows::Forms::Button^ button_ExportBill_Insert;
	private: System::Windows::Forms::Label^ label_ExportBill_VND;
	private: System::Windows::Forms::Label^ label_ExportBill_Cai;
	private: System::Windows::Forms::Label^ label_ExportBill_KG;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Bill_code;
	private: System::Windows::Forms::ComboBox^ comboBox1;






	protected:



	protected:

	protected:










	protected:



	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button_ExportBill_PrintBill = (gcnew System::Windows::Forms::Button());
			this->groupBox_ExportBill_Detail = (gcnew System::Windows::Forms::GroupBox());
			this->label_ExportBill_KG = (gcnew System::Windows::Forms::Label());
			this->label_ExportBill_Cai = (gcnew System::Windows::Forms::Label());
			this->label_ExportBill_VND = (gcnew System::Windows::Forms::Label());
			this->button_ExportBill_Delete = (gcnew System::Windows::Forms::Button());
			this->button_ExportBill_Edit = (gcnew System::Windows::Forms::Button());
			this->button_ExportBill_Insert = (gcnew System::Windows::Forms::Button());
			this->label_ExportBill_Price = (gcnew System::Windows::Forms::Label());
			this->label_ExportBill_Amount = (gcnew System::Windows::Forms::Label());
			this->label_ExportBill_Goods_Name = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_ExportBill_GoodsList = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView_ExportBill_GoodsList = (gcnew System::Windows::Forms::DataGridView());
			this->button_ExportBill_DeleteBill = (gcnew System::Windows::Forms::Button());
			this->button_ExporBill_InsertBill = (gcnew System::Windows::Forms::Button());
			this->button_ExportBill_EditBill = (gcnew System::Windows::Forms::Button());
			this->groupBox_ExportBill_List = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView_ExportBill_ExportBillList = (gcnew System::Windows::Forms::DataGridView());
			this->Bill_code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox_ExportBill_Information = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker_ExportBill = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label_ExportBill_Employee = (gcnew System::Windows::Forms::Label());
			this->label_ExportBill_Date = (gcnew System::Windows::Forms::Label());
			this->label_Export_Bill_code = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->groupBox_ExportBill_Detail->SuspendLayout();
			this->groupBox_ExportBill_GoodsList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_ExportBill_GoodsList))->BeginInit();
			this->groupBox_ExportBill_List->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_ExportBill_ExportBillList))->BeginInit();
			this->groupBox_ExportBill_Information->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->button_ExportBill_PrintBill);
			this->panel1->Controls->Add(this->groupBox_ExportBill_Detail);
			this->panel1->Controls->Add(this->button_ExportBill_DeleteBill);
			this->panel1->Controls->Add(this->button_ExporBill_InsertBill);
			this->panel1->Controls->Add(this->button_ExportBill_EditBill);
			this->panel1->Controls->Add(this->groupBox_ExportBill_List);
			this->panel1->Controls->Add(this->groupBox_ExportBill_Information);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(792, 431);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Bill::panel1_Paint);
			// 
			// button_ExportBill_PrintBill
			// 
			this->button_ExportBill_PrintBill->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button_ExportBill_PrintBill->Location = System::Drawing::Point(330, 141);
			this->button_ExportBill_PrintBill->Name = L"button_ExportBill_PrintBill";
			this->button_ExportBill_PrintBill->Size = System::Drawing::Size(85, 23);
			this->button_ExportBill_PrintBill->TabIndex = 9;
			this->button_ExportBill_PrintBill->Text = L"Print Bill";
			this->button_ExportBill_PrintBill->UseVisualStyleBackColor = true;
			// 
			// groupBox_ExportBill_Detail
			// 
			this->groupBox_ExportBill_Detail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox_ExportBill_Detail->Controls->Add(this->label_ExportBill_KG);
			this->groupBox_ExportBill_Detail->Controls->Add(this->label_ExportBill_Cai);
			this->groupBox_ExportBill_Detail->Controls->Add(this->label_ExportBill_VND);
			this->groupBox_ExportBill_Detail->Controls->Add(this->button_ExportBill_Delete);
			this->groupBox_ExportBill_Detail->Controls->Add(this->button_ExportBill_Edit);
			this->groupBox_ExportBill_Detail->Controls->Add(this->button_ExportBill_Insert);
			this->groupBox_ExportBill_Detail->Controls->Add(this->label_ExportBill_Price);
			this->groupBox_ExportBill_Detail->Controls->Add(this->label_ExportBill_Amount);
			this->groupBox_ExportBill_Detail->Controls->Add(this->label_ExportBill_Goods_Name);
			this->groupBox_ExportBill_Detail->Controls->Add(this->textBox6);
			this->groupBox_ExportBill_Detail->Controls->Add(this->textBox5);
			this->groupBox_ExportBill_Detail->Controls->Add(this->textBox2);
			this->groupBox_ExportBill_Detail->Controls->Add(this->groupBox_ExportBill_GoodsList);
			this->groupBox_ExportBill_Detail->Location = System::Drawing::Point(478, 3);
			this->groupBox_ExportBill_Detail->Name = L"groupBox_ExportBill_Detail";
			this->groupBox_ExportBill_Detail->Size = System::Drawing::Size(309, 428);
			this->groupBox_ExportBill_Detail->TabIndex = 5;
			this->groupBox_ExportBill_Detail->TabStop = false;
			this->groupBox_ExportBill_Detail->Text = L"Export Bill Detail";
			this->groupBox_ExportBill_Detail->Enter += gcnew System::EventHandler(this, &Bill::groupBox_ExportBill_Detail_Enter);
			// 
			// label_ExportBill_KG
			// 
			this->label_ExportBill_KG->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_ExportBill_KG->AutoSize = true;
			this->label_ExportBill_KG->Location = System::Drawing::Point(261, 109);
			this->label_ExportBill_KG->Name = L"label_ExportBill_KG";
			this->label_ExportBill_KG->Size = System::Drawing::Size(22, 13);
			this->label_ExportBill_KG->TabIndex = 12;
			this->label_ExportBill_KG->Text = L"KG";
			// 
			// label_ExportBill_Cai
			// 
			this->label_ExportBill_Cai->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_ExportBill_Cai->AutoSize = true;
			this->label_ExportBill_Cai->Location = System::Drawing::Point(261, 110);
			this->label_ExportBill_Cai->Name = L"label_ExportBill_Cai";
			this->label_ExportBill_Cai->Size = System::Drawing::Size(22, 13);
			this->label_ExportBill_Cai->TabIndex = 11;
			this->label_ExportBill_Cai->Text = L"Cái";
			this->label_ExportBill_Cai->Click += gcnew System::EventHandler(this, &Bill::label_ExportBill_Cai_Click);
			// 
			// label_ExportBill_VND
			// 
			this->label_ExportBill_VND->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_ExportBill_VND->AutoSize = true;
			this->label_ExportBill_VND->Location = System::Drawing::Point(261, 69);
			this->label_ExportBill_VND->Name = L"label_ExportBill_VND";
			this->label_ExportBill_VND->Size = System::Drawing::Size(30, 13);
			this->label_ExportBill_VND->TabIndex = 10;
			this->label_ExportBill_VND->Text = L"VNĐ";
			// 
			// button_ExportBill_Delete
			// 
			this->button_ExportBill_Delete->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button_ExportBill_Delete->Location = System::Drawing::Point(214, 139);
			this->button_ExportBill_Delete->Name = L"button_ExportBill_Delete";
			this->button_ExportBill_Delete->Size = System::Drawing::Size(91, 20);
			this->button_ExportBill_Delete->TabIndex = 9;
			this->button_ExportBill_Delete->Text = L"Delete";
			this->button_ExportBill_Delete->UseVisualStyleBackColor = true;
			// 
			// button_ExportBill_Edit
			// 
			this->button_ExportBill_Edit->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button_ExportBill_Edit->Location = System::Drawing::Point(112, 139);
			this->button_ExportBill_Edit->Name = L"button_ExportBill_Edit";
			this->button_ExportBill_Edit->Size = System::Drawing::Size(91, 20);
			this->button_ExportBill_Edit->TabIndex = 8;
			this->button_ExportBill_Edit->Text = L"Edit";
			this->button_ExportBill_Edit->UseVisualStyleBackColor = true;
			// 
			// button_ExportBill_Insert
			// 
			this->button_ExportBill_Insert->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button_ExportBill_Insert->Location = System::Drawing::Point(6, 139);
			this->button_ExportBill_Insert->Name = L"button_ExportBill_Insert";
			this->button_ExportBill_Insert->Size = System::Drawing::Size(91, 20);
			this->button_ExportBill_Insert->TabIndex = 7;
			this->button_ExportBill_Insert->Text = L"Insert";
			this->button_ExportBill_Insert->UseVisualStyleBackColor = true;
			// 
			// label_ExportBill_Price
			// 
			this->label_ExportBill_Price->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_ExportBill_Price->AutoSize = true;
			this->label_ExportBill_Price->Location = System::Drawing::Point(18, 69);
			this->label_ExportBill_Price->Name = L"label_ExportBill_Price";
			this->label_ExportBill_Price->Size = System::Drawing::Size(31, 13);
			this->label_ExportBill_Price->TabIndex = 6;
			this->label_ExportBill_Price->Text = L"Price";
			// 
			// label_ExportBill_Amount
			// 
			this->label_ExportBill_Amount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_ExportBill_Amount->AutoSize = true;
			this->label_ExportBill_Amount->Location = System::Drawing::Point(18, 109);
			this->label_ExportBill_Amount->Name = L"label_ExportBill_Amount";
			this->label_ExportBill_Amount->Size = System::Drawing::Size(43, 13);
			this->label_ExportBill_Amount->TabIndex = 5;
			this->label_ExportBill_Amount->Text = L"Amount";
			// 
			// label_ExportBill_Goods_Name
			// 
			this->label_ExportBill_Goods_Name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_ExportBill_Goods_Name->AutoSize = true;
			this->label_ExportBill_Goods_Name->Location = System::Drawing::Point(18, 31);
			this->label_ExportBill_Goods_Name->Name = L"label_ExportBill_Goods_Name";
			this->label_ExportBill_Goods_Name->Size = System::Drawing::Size(64, 13);
			this->label_ExportBill_Goods_Name->TabIndex = 4;
			this->label_ExportBill_Goods_Name->Text = L"Good Name";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->Location = System::Drawing::Point(88, 106);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(167, 20);
			this->textBox6->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(88, 66);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(167, 20);
			this->textBox5->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(88, 28);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(218, 20);
			this->textBox2->TabIndex = 1;
			// 
			// groupBox_ExportBill_GoodsList
			// 
			this->groupBox_ExportBill_GoodsList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox_ExportBill_GoodsList->Controls->Add(this->dataGridView_ExportBill_GoodsList);
			this->groupBox_ExportBill_GoodsList->Location = System::Drawing::Point(0, 168);
			this->groupBox_ExportBill_GoodsList->Name = L"groupBox_ExportBill_GoodsList";
			this->groupBox_ExportBill_GoodsList->Size = System::Drawing::Size(309, 257);
			this->groupBox_ExportBill_GoodsList->TabIndex = 0;
			this->groupBox_ExportBill_GoodsList->TabStop = false;
			this->groupBox_ExportBill_GoodsList->Text = L"Goods List";
			// 
			// dataGridView_ExportBill_GoodsList
			// 
			this->dataGridView_ExportBill_GoodsList->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_ExportBill_GoodsList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_ExportBill_GoodsList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView_ExportBill_GoodsList->Location = System::Drawing::Point(3, 16);
			this->dataGridView_ExportBill_GoodsList->Name = L"dataGridView_ExportBill_GoodsList";
			this->dataGridView_ExportBill_GoodsList->Size = System::Drawing::Size(303, 238);
			this->dataGridView_ExportBill_GoodsList->TabIndex = 0;
			this->dataGridView_ExportBill_GoodsList->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Bill::dataGridView_ExportBill_GoodsList_CellContentClick);
			// 
			// button_ExportBill_DeleteBill
			// 
			this->button_ExportBill_DeleteBill->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button_ExportBill_DeleteBill->Location = System::Drawing::Point(228, 142);
			this->button_ExportBill_DeleteBill->Name = L"button_ExportBill_DeleteBill";
			this->button_ExportBill_DeleteBill->Size = System::Drawing::Size(85, 23);
			this->button_ExportBill_DeleteBill->TabIndex = 8;
			this->button_ExportBill_DeleteBill->Text = L"Delete Bill";
			this->button_ExportBill_DeleteBill->UseVisualStyleBackColor = true;
			// 
			// button_ExporBill_InsertBill
			// 
			this->button_ExporBill_InsertBill->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button_ExporBill_InsertBill->Location = System::Drawing::Point(3, 141);
			this->button_ExporBill_InsertBill->Name = L"button_ExporBill_InsertBill";
			this->button_ExporBill_InsertBill->Size = System::Drawing::Size(85, 23);
			this->button_ExporBill_InsertBill->TabIndex = 6;
			this->button_ExporBill_InsertBill->Text = L"Insert Bill";
			this->button_ExporBill_InsertBill->UseVisualStyleBackColor = true;
			// 
			// button_ExportBill_EditBill
			// 
			this->button_ExportBill_EditBill->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button_ExportBill_EditBill->Location = System::Drawing::Point(117, 142);
			this->button_ExportBill_EditBill->Name = L"button_ExportBill_EditBill";
			this->button_ExportBill_EditBill->Size = System::Drawing::Size(85, 23);
			this->button_ExportBill_EditBill->TabIndex = 7;
			this->button_ExportBill_EditBill->Text = L"Edit Bill";
			this->button_ExportBill_EditBill->UseVisualStyleBackColor = true;
			// 
			// groupBox_ExportBill_List
			// 
			this->groupBox_ExportBill_List->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox_ExportBill_List->Controls->Add(this->dataGridView_ExportBill_ExportBillList);
			this->groupBox_ExportBill_List->Location = System::Drawing::Point(0, 171);
			this->groupBox_ExportBill_List->Name = L"groupBox_ExportBill_List";
			this->groupBox_ExportBill_List->Size = System::Drawing::Size(415, 254);
			this->groupBox_ExportBill_List->TabIndex = 4;
			this->groupBox_ExportBill_List->TabStop = false;
			this->groupBox_ExportBill_List->Text = L"Export Bill List";
			this->groupBox_ExportBill_List->Enter += gcnew System::EventHandler(this, &Bill::groupBox_ExportBill_List_Enter);
			// 
			// dataGridView_ExportBill_ExportBillList
			// 
			this->dataGridView_ExportBill_ExportBillList->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_ExportBill_ExportBillList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_ExportBill_ExportBillList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Bill_code });
			this->dataGridView_ExportBill_ExportBillList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView_ExportBill_ExportBillList->Location = System::Drawing::Point(3, 16);
			this->dataGridView_ExportBill_ExportBillList->Name = L"dataGridView_ExportBill_ExportBillList";
			this->dataGridView_ExportBill_ExportBillList->Size = System::Drawing::Size(409, 235);
			this->dataGridView_ExportBill_ExportBillList->TabIndex = 0;
			this->dataGridView_ExportBill_ExportBillList->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Bill::dataGridView_ExportBill_ExportBillList_CellContentClick);
			// 
			// Bill_code
			// 
			this->Bill_code->HeaderText = L"Bill Code";
			this->Bill_code->Name = L"Bill_code";
			// 
			// groupBox_ExportBill_Information
			// 
			this->groupBox_ExportBill_Information->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox_ExportBill_Information->Controls->Add(this->comboBox1);
			this->groupBox_ExportBill_Information->Controls->Add(this->dateTimePicker_ExportBill);
			this->groupBox_ExportBill_Information->Controls->Add(this->label4);
			this->groupBox_ExportBill_Information->Controls->Add(this->label_ExportBill_Employee);
			this->groupBox_ExportBill_Information->Controls->Add(this->label_ExportBill_Date);
			this->groupBox_ExportBill_Information->Controls->Add(this->label_Export_Bill_code);
			this->groupBox_ExportBill_Information->Controls->Add(this->textBox3);
			this->groupBox_ExportBill_Information->Controls->Add(this->textBox1);
			this->groupBox_ExportBill_Information->Location = System::Drawing::Point(3, 4);
			this->groupBox_ExportBill_Information->Name = L"groupBox_ExportBill_Information";
			this->groupBox_ExportBill_Information->Size = System::Drawing::Size(412, 121);
			this->groupBox_ExportBill_Information->TabIndex = 3;
			this->groupBox_ExportBill_Information->TabStop = false;
			this->groupBox_ExportBill_Information->Text = L"Export Bill Information";
			this->groupBox_ExportBill_Information->Enter += gcnew System::EventHandler(this, &Bill::groupBox_ExportBill_Information_Enter);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(281, 84);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(129, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Bill::comboBox1_SelectedIndexChanged);
			// 
			// dateTimePicker_ExportBill
			// 
			this->dateTimePicker_ExportBill->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dateTimePicker_ExportBill->Location = System::Drawing::Point(59, 84);
			this->dateTimePicker_ExportBill->Name = L"dateTimePicker_ExportBill";
			this->dateTimePicker_ExportBill->Size = System::Drawing::Size(157, 20);
			this->dateTimePicker_ExportBill->TabIndex = 8;
			this->dateTimePicker_ExportBill->Value = System::DateTime(2020, 11, 17, 0, 0, 0, 0);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(222, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Passenger";
			this->label4->Click += gcnew System::EventHandler(this, &Bill::label4_Click);
			// 
			// label_ExportBill_Employee
			// 
			this->label_ExportBill_Employee->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_ExportBill_Employee->AutoSize = true;
			this->label_ExportBill_Employee->Location = System::Drawing::Point(222, 27);
			this->label_ExportBill_Employee->Name = L"label_ExportBill_Employee";
			this->label_ExportBill_Employee->Size = System::Drawing::Size(53, 13);
			this->label_ExportBill_Employee->TabIndex = 6;
			this->label_ExportBill_Employee->Text = L"Employee";
			// 
			// label_ExportBill_Date
			// 
			this->label_ExportBill_Date->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_ExportBill_Date->AutoSize = true;
			this->label_ExportBill_Date->Location = System::Drawing::Point(5, 84);
			this->label_ExportBill_Date->Name = L"label_ExportBill_Date";
			this->label_ExportBill_Date->Size = System::Drawing::Size(30, 13);
			this->label_ExportBill_Date->TabIndex = 5;
			this->label_ExportBill_Date->Text = L"Date";
			// 
			// label_Export_Bill_code
			// 
			this->label_Export_Bill_code->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_Export_Bill_code->AutoSize = true;
			this->label_Export_Bill_code->Location = System::Drawing::Point(5, 27);
			this->label_Export_Bill_code->Name = L"label_Export_Bill_code";
			this->label_Export_Bill_code->Size = System::Drawing::Size(48, 13);
			this->label_Export_Bill_code->TabIndex = 4;
			this->label_Export_Bill_code->Text = L"Bill Code";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox3->Location = System::Drawing::Point(281, 24);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(129, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Location = System::Drawing::Point(59, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 20);
			this->textBox1->TabIndex = 0;
			// 
			// Bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 431);
			this->Controls->Add(this->panel1);
			this->Name = L"Bill";
			this->Text = L"Bill";
			this->panel1->ResumeLayout(false);
			this->groupBox_ExportBill_Detail->ResumeLayout(false);
			this->groupBox_ExportBill_Detail->PerformLayout();
			this->groupBox_ExportBill_GoodsList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_ExportBill_GoodsList))->EndInit();
			this->groupBox_ExportBill_List->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_ExportBill_ExportBillList))->EndInit();
			this->groupBox_ExportBill_Information->ResumeLayout(false);
			this->groupBox_ExportBill_Information->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void groupBox_ExportBill_Detail_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_ExportBill_Information_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView_ExportBill_GoodsList_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView_ExportBill_ExportBillList_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void groupBox_ExportBill_List_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_ExportBill_Cai_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
