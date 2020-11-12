#pragma once
#include "Goods.h"
#include <cString>
#include "Log_in.h"
namespace QuanLyBanHang
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Loged_in
	/// </summary>
	public ref class Loged_in : public System::Windows::Forms::Form
	{
	public:
		Loged_in(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//		SqlConnection connection = new SqlConnection();
		// tao ket noi

			//	tạo đối tượng kết nối là cnn
/*			SqlConnection^ cnn = gcnew SqlConnection("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
			// tạo đối tượng dataadapter
			cnn->Open();
			MessageBox::Show(cnn->State.ToString());
			cnn->Close();
*/
// lớp tương tác với cơ sở dữ liệu sql command
//		SqlCommand^ cmd = gcnew SqlCommand("Select * from Nhanvien", cnn);

		}
	public:

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Loged_in()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_menu_loged_in;
	private: System::Windows::Forms::MenuStrip^ menuStrip_Homepage;
	protected:

	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenu_Bill;

	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenu_Goods;





	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenu_Employees;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenu_Report;
	private: Bunifu::Framework::UI::BunifuThinButton2^ buttonLogout;

	private: System::Windows::Forms::ToolStripMenuItem^ importBillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dailyReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ monthlyReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ annuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exportBillToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel_ExportBill;

	private: System::Windows::Forms::Button^ button_Edit;
	private: System::Windows::Forms::Button^ button_Delete;


	private: System::Windows::Forms::DataGridView^ dataGridView_exportBill;

	private: System::Windows::Forms::Button^ button_Exit;
	private: System::Windows::Forms::Label^ label_ExpotBill;
	private: System::Windows::Forms::ListView^ listView_DetailGood;


	private: System::Windows::Forms::TextBox^ textBox_ExportBill_CodeExportBill;





	private: System::Windows::Forms::ColumnHeader^ GoodName;
	private: System::Windows::Forms::ColumnHeader^ Amount;
	private: System::Windows::Forms::ColumnHeader^ Price;





	private: System::Windows::Forms::Label^ label_CodeExportBill;
	private: System::Windows::Forms::Label^ label_Total_Payment;
	private: System::Windows::Forms::Button^ button_Insert;
	private: System::Windows::Forms::Button^ button_Find;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Label_ExportBill_Money;




























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Loged_in::typeid));
			this->panel_menu_loged_in = (gcnew System::Windows::Forms::Panel());
			this->panel_ExportBill = (gcnew System::Windows::Forms::Panel());
			this->Label_ExportBill_Money = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->button_Find = (gcnew System::Windows::Forms::Button());
			this->button_Insert = (gcnew System::Windows::Forms::Button());
			this->label_Total_Payment = (gcnew System::Windows::Forms::Label());
			this->label_CodeExportBill = (gcnew System::Windows::Forms::Label());
			this->textBox_ExportBill_CodeExportBill = (gcnew System::Windows::Forms::TextBox());
			this->listView_DetailGood = (gcnew System::Windows::Forms::ListView());
			this->GoodName = (gcnew System::Windows::Forms::ColumnHeader());
			this->Amount = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->button_Exit = (gcnew System::Windows::Forms::Button());
			this->label_ExpotBill = (gcnew System::Windows::Forms::Label());
			this->button_Edit = (gcnew System::Windows::Forms::Button());
			this->button_Delete = (gcnew System::Windows::Forms::Button());
			this->dataGridView_exportBill = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip_Homepage = (gcnew System::Windows::Forms::MenuStrip());
			this->ToolStripMenu_Bill = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importBillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportBillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenu_Goods = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenu_Employees = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenu_Report = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dailyReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->monthlyReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->annuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonLogout = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel_menu_loged_in->SuspendLayout();
			this->panel_ExportBill->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_exportBill))->BeginInit();
			this->menuStrip_Homepage->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_menu_loged_in
			// 
			this->panel_menu_loged_in->BackColor = System::Drawing::Color::Transparent;
			this->panel_menu_loged_in->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_menu_loged_in.BackgroundImage")));
			this->panel_menu_loged_in->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_menu_loged_in->Controls->Add(this->panel_ExportBill);
			this->panel_menu_loged_in->Controls->Add(this->menuStrip_Homepage);
			this->panel_menu_loged_in->Controls->Add(this->buttonLogout);
			this->panel_menu_loged_in->Location = System::Drawing::Point(2, 2);
			this->panel_menu_loged_in->Name = L"panel_menu_loged_in";
			this->panel_menu_loged_in->Size = System::Drawing::Size(789, 438);
			this->panel_menu_loged_in->TabIndex = 4;
			// 
			// panel_ExportBill
			// 
			this->panel_ExportBill->Controls->Add(this->Label_ExportBill_Money);
			this->panel_ExportBill->Controls->Add(this->button_Find);
			this->panel_ExportBill->Controls->Add(this->button_Insert);
			this->panel_ExportBill->Controls->Add(this->label_Total_Payment);
			this->panel_ExportBill->Controls->Add(this->label_CodeExportBill);
			this->panel_ExportBill->Controls->Add(this->textBox_ExportBill_CodeExportBill);
			this->panel_ExportBill->Controls->Add(this->listView_DetailGood);
			this->panel_ExportBill->Controls->Add(this->button_Exit);
			this->panel_ExportBill->Controls->Add(this->label_ExpotBill);
			this->panel_ExportBill->Controls->Add(this->button_Edit);
			this->panel_ExportBill->Controls->Add(this->button_Delete);
			this->panel_ExportBill->Controls->Add(this->dataGridView_exportBill);
			this->panel_ExportBill->Location = System::Drawing::Point(3, 31);
			this->panel_ExportBill->Name = L"panel_ExportBill";
			this->panel_ExportBill->Size = System::Drawing::Size(786, 399);
			this->panel_ExportBill->TabIndex = 5;
			this->panel_ExportBill->Visible = false;
			// 
			// Label_ExportBill_Money
			// 
			this->Label_ExportBill_Money->AutoSize = true;
			this->Label_ExportBill_Money->BackColor = System::Drawing::Color::DarkGray;
			this->Label_ExportBill_Money->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Label_ExportBill_Money->Location = System::Drawing::Point(416, 324);
			this->Label_ExportBill_Money->Name = L"Label_ExportBill_Money";
			this->Label_ExportBill_Money->Size = System::Drawing::Size(61, 20);
			this->Label_ExportBill_Money->TabIndex = 21;
			this->Label_ExportBill_Money->Text = L"Money";
			this->Label_ExportBill_Money->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Label_ExportBill_Money->Visible = false;
			// 
			// button_Find
			// 
			this->button_Find->Location = System::Drawing::Point(332, 68);
			this->button_Find->Name = L"button_Find";
			this->button_Find->Size = System::Drawing::Size(75, 23);
			this->button_Find->TabIndex = 20;
			this->button_Find->Text = L"Find";
			this->button_Find->UseVisualStyleBackColor = true;
			this->button_Find->Visible = false;
			this->button_Find->Click += gcnew System::EventHandler(this, &Loged_in::button_Find_Click);
			// 
			// button_Insert
			// 
			this->button_Insert->Location = System::Drawing::Point(14, 367);
			this->button_Insert->Name = L"button_Insert";
			this->button_Insert->Size = System::Drawing::Size(75, 23);
			this->button_Insert->TabIndex = 19;
			this->button_Insert->Text = L"Insert";
			this->button_Insert->UseVisualStyleBackColor = true;
			this->button_Insert->Visible = false;
			// 
			// label_Total_Payment
			// 
			this->label_Total_Payment->AutoSize = true;
			this->label_Total_Payment->BackColor = System::Drawing::Color::DarkGray;
			this->label_Total_Payment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Total_Payment->Location = System::Drawing::Point(271, 327);
			this->label_Total_Payment->Name = L"label_Total_Payment";
			this->label_Total_Payment->Size = System::Drawing::Size(108, 16);
			this->label_Total_Payment->TabIndex = 18;
			this->label_Total_Payment->Text = L"Total Payment";
			this->label_Total_Payment->Visible = false;
			// 
			// label_CodeExportBill
			// 
			this->label_CodeExportBill->AutoSize = true;
			this->label_CodeExportBill->BackColor = System::Drawing::Color::DarkGray;
			this->label_CodeExportBill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_CodeExportBill->Location = System::Drawing::Point(11, 68);
			this->label_CodeExportBill->Name = L"label_CodeExportBill";
			this->label_CodeExportBill->Size = System::Drawing::Size(119, 16);
			this->label_CodeExportBill->TabIndex = 15;
			this->label_CodeExportBill->Text = L"Code Export Bill";
			this->label_CodeExportBill->Visible = false;
			// 
			// textBox_ExportBill_CodeExportBill
			// 
			this->textBox_ExportBill_CodeExportBill->Location = System::Drawing::Point(160, 68);
			this->textBox_ExportBill_CodeExportBill->Name = L"textBox_ExportBill_CodeExportBill";
			this->textBox_ExportBill_CodeExportBill->Size = System::Drawing::Size(139, 20);
			this->textBox_ExportBill_CodeExportBill->TabIndex = 10;
			this->textBox_ExportBill_CodeExportBill->Text = L"00000001";
			this->textBox_ExportBill_CodeExportBill->Visible = false;
			// 
			// listView_DetailGood
			// 
			this->listView_DetailGood->BackColor = System::Drawing::Color::Gainsboro;
			this->listView_DetailGood->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->GoodName,
					this->Amount, this->Price
			});
			this->listView_DetailGood->Cursor = System::Windows::Forms::Cursors::Default;
			this->listView_DetailGood->FullRowSelect = true;
			this->listView_DetailGood->GridLines = true;
			this->listView_DetailGood->HideSelection = false;
			this->listView_DetailGood->ImeMode = System::Windows::Forms::ImeMode::On;
			this->listView_DetailGood->LabelEdit = true;
			this->listView_DetailGood->Location = System::Drawing::Point(14, 104);
			this->listView_DetailGood->Name = L"listView_DetailGood";
			this->listView_DetailGood->ShowItemToolTips = true;
			this->listView_DetailGood->Size = System::Drawing::Size(755, 205);
			this->listView_DetailGood->TabIndex = 7;
			this->listView_DetailGood->UseCompatibleStateImageBehavior = false;
			this->listView_DetailGood->View = System::Windows::Forms::View::Details;
			// 
			// GoodName
			// 
			this->GoodName->Text = L"GoodName";
			this->GoodName->Width = 416;
			// 
			// Amount
			// 
			this->Amount->Text = L"Amount";
			this->Amount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Amount->Width = 176;
			// 
			// Price
			// 
			this->Price->Text = L"Price";
			this->Price->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Price->Width = 154;
			// 
			// button_Exit
			// 
			this->button_Exit->Location = System::Drawing::Point(699, 368);
			this->button_Exit->Name = L"button_Exit";
			this->button_Exit->Size = System::Drawing::Size(75, 23);
			this->button_Exit->TabIndex = 6;
			this->button_Exit->Text = L"Exit";
			this->button_Exit->UseVisualStyleBackColor = true;
			this->button_Exit->Visible = false;
			this->button_Exit->Click += gcnew System::EventHandler(this, &Loged_in::button_Exit_Click);
			// 
			// label_ExpotBill
			// 
			this->label_ExpotBill->AutoSize = true;
			this->label_ExpotBill->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_ExpotBill->ForeColor = System::Drawing::Color::LawnGreen;
			this->label_ExpotBill->Location = System::Drawing::Point(326, 5);
			this->label_ExpotBill->Name = L"label_ExpotBill";
			this->label_ExpotBill->Size = System::Drawing::Size(142, 33);
			this->label_ExpotBill->TabIndex = 5;
			this->label_ExpotBill->Text = L"Export Bill ";
			this->label_ExpotBill->Visible = false;
			// 
			// button_Edit
			// 
			this->button_Edit->Location = System::Drawing::Point(480, 368);
			this->button_Edit->Name = L"button_Edit";
			this->button_Edit->Size = System::Drawing::Size(75, 23);
			this->button_Edit->TabIndex = 3;
			this->button_Edit->Text = L"Edit";
			this->button_Edit->UseVisualStyleBackColor = true;
			this->button_Edit->Visible = false;
			// 
			// button_Delete
			// 
			this->button_Delete->Location = System::Drawing::Point(220, 369);
			this->button_Delete->Name = L"button_Delete";
			this->button_Delete->Size = System::Drawing::Size(79, 22);
			this->button_Delete->TabIndex = 2;
			this->button_Delete->Text = L"Delete";
			this->button_Delete->UseVisualStyleBackColor = true;
			this->button_Delete->Visible = false;
			// 
			// dataGridView_exportBill
			// 
			this->dataGridView_exportBill->BackgroundColor = System::Drawing::Color::DarkGray;
			this->dataGridView_exportBill->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_exportBill->Location = System::Drawing::Point(3, 41);
			this->dataGridView_exportBill->Name = L"dataGridView_exportBill";
			this->dataGridView_exportBill->Size = System::Drawing::Size(775, 321);
			this->dataGridView_exportBill->TabIndex = 0;
			this->dataGridView_exportBill->Visible = false;
			// 
			// menuStrip_Homepage
			// 
			this->menuStrip_Homepage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->menuStrip_Homepage->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip_Homepage->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ToolStripMenu_Bill,
					this->ToolStripMenu_Goods, this->ToolStripMenu_Employees, this->ToolStripMenu_Report
			});
			this->menuStrip_Homepage->Location = System::Drawing::Point(277, 3);
			this->menuStrip_Homepage->Name = L"menuStrip_Homepage";
			this->menuStrip_Homepage->Size = System::Drawing::Size(254, 25);
			this->menuStrip_Homepage->TabIndex = 0;
			this->menuStrip_Homepage->Text = L"menuStrip_Homepage";
			// 
			// ToolStripMenu_Bill
			// 
			this->ToolStripMenu_Bill->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->importBillToolStripMenuItem,
					this->exportBillToolStripMenuItem
			});
			this->ToolStripMenu_Bill->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToolStripMenu_Bill->Name = L"ToolStripMenu_Bill";
			this->ToolStripMenu_Bill->Size = System::Drawing::Size(40, 21);
			this->ToolStripMenu_Bill->Text = L"Bill";
			this->ToolStripMenu_Bill->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// importBillToolStripMenuItem
			// 
			this->importBillToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->importBillToolStripMenuItem->Name = L"importBillToolStripMenuItem";
			this->importBillToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->importBillToolStripMenuItem->Text = L"Import Bill";
			// 
			// exportBillToolStripMenuItem
			// 
			this->exportBillToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->exportBillToolStripMenuItem->Name = L"exportBillToolStripMenuItem";
			this->exportBillToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->exportBillToolStripMenuItem->Text = L"Export Bill";
			this->exportBillToolStripMenuItem->Click += gcnew System::EventHandler(this, &Loged_in::exportBillToolStripMenuItem_Click);
			// 
			// ToolStripMenu_Goods
			// 
			this->ToolStripMenu_Goods->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToolStripMenu_Goods->Name = L"ToolStripMenu_Goods";
			this->ToolStripMenu_Goods->Size = System::Drawing::Size(59, 21);
			this->ToolStripMenu_Goods->Text = L"Goods";
			this->ToolStripMenu_Goods->Click += gcnew System::EventHandler(this, &Loged_in::ToolStripMenu_Goods_Click);
			// 
			// ToolStripMenu_Employees
			// 
			this->ToolStripMenu_Employees->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToolStripMenu_Employees->Name = L"ToolStripMenu_Employees";
			this->ToolStripMenu_Employees->Size = System::Drawing::Size(86, 21);
			this->ToolStripMenu_Employees->Text = L"Employees";
			// 
			// ToolStripMenu_Report
			// 
			this->ToolStripMenu_Report->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->dailyReportToolStripMenuItem,
					this->monthlyReportToolStripMenuItem, this->annuToolStripMenuItem
			});
			this->ToolStripMenu_Report->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToolStripMenu_Report->Name = L"ToolStripMenu_Report";
			this->ToolStripMenu_Report->Size = System::Drawing::Size(61, 21);
			this->ToolStripMenu_Report->Text = L"Report";
			// 
			// dailyReportToolStripMenuItem
			// 
			this->dailyReportToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dailyReportToolStripMenuItem->Name = L"dailyReportToolStripMenuItem";
			this->dailyReportToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->dailyReportToolStripMenuItem->Text = L"Daily Report";
			// 
			// monthlyReportToolStripMenuItem
			// 
			this->monthlyReportToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->monthlyReportToolStripMenuItem->Name = L"monthlyReportToolStripMenuItem";
			this->monthlyReportToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->monthlyReportToolStripMenuItem->Text = L"Monthly Report";
			// 
			// annuToolStripMenuItem
			// 
			this->annuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->annuToolStripMenuItem->Name = L"annuToolStripMenuItem";
			this->annuToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->annuToolStripMenuItem->Text = L"Annual Report";
			// 
			// buttonLogout
			// 
			this->buttonLogout->ActiveBorderThickness = 1;
			this->buttonLogout->ActiveCornerRadius = 20;
			this->buttonLogout->ActiveFillColor = System::Drawing::Color::DarkGreen;
			this->buttonLogout->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->buttonLogout->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->buttonLogout->BackColor = System::Drawing::Color::Transparent;
			this->buttonLogout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonLogout.BackgroundImage")));
			this->buttonLogout->ButtonText = L"Log out";
			this->buttonLogout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonLogout->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogout->ForeColor = System::Drawing::Color::SeaGreen;
			this->buttonLogout->IdleBorderThickness = 1;
			this->buttonLogout->IdleCornerRadius = 20;
			this->buttonLogout->IdleFillColor = System::Drawing::Color::DeepSkyBlue;
			this->buttonLogout->IdleForecolor = System::Drawing::Color::MintCream;
			this->buttonLogout->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->buttonLogout->Location = System::Drawing::Point(669, 0);
			this->buttonLogout->Margin = System::Windows::Forms::Padding(5);
			this->buttonLogout->Name = L"buttonLogout";
			this->buttonLogout->Size = System::Drawing::Size(114, 33);
			this->buttonLogout->TabIndex = 4;
			this->buttonLogout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->buttonLogout->Click += gcnew System::EventHandler(this, &Loged_in::buttonLogout_Click);
			// 
			// Loged_in
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 434);
			this->Controls->Add(this->panel_menu_loged_in);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip_Homepage;
			this->Name = L"Loged_in";
			this->Text = L"Home Page";
			this->panel_menu_loged_in->ResumeLayout(false);
			this->panel_menu_loged_in->PerformLayout();
			this->panel_ExportBill->ResumeLayout(false);
			this->panel_ExportBill->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_exportBill))->EndInit();
			this->menuStrip_Homepage->ResumeLayout(false);
			this->menuStrip_Homepage->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonLogout_Click(System::Object^ sender, System::EventArgs^ e)// buton Log out
	{
		this->Close();
	}
	private: System::Void exportBillToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//panel
		this->panel_ExportBill->Visible = true;
		//dataGridView
		this->dataGridView_exportBill->Visible = true;
		//listView
		this->listView_DetailGood->Visible = true;
		//Button
		this->button_Insert->Visible = true;
		this->button_Exit->Visible = true;
		this->button_Edit->Visible = true;
		this->button_Delete->Visible = true;
		this->button_Find->Visible = true;
		//Label
		this->label_CodeExportBill->Visible = true;
		this->label_ExpotBill->Visible = true;
		this->label_Total_Payment->Visible = true;
		this->Label_ExportBill_Money->Visible = true;
		//textbox
		this->textBox_ExportBill_CodeExportBill->Visible = true;
	}
	private: System::Void button_Exit_Click(System::Object^ sender, System::EventArgs^ e)// Button Exit ( ExportBill )
	{
		//panel
		this->panel_ExportBill->Visible = false;
		//dataGridView
		this->dataGridView_exportBill->Visible = false;
		//listView
		this->listView_DetailGood->Visible = false;
		//Button
		this->button_Find->Visible = false;
		this->button_Insert->Visible = false;
		this->button_Exit->Visible = false;
		this->button_Edit->Visible = false;
		this->button_Delete->Visible = false;
		//Label
		this->label_CodeExportBill->Visible = false;
		this->label_ExpotBill->Visible = false;
		this->label_Total_Payment->Visible = false;
		this->Label_ExportBill_Money->Visible = false;
		//textbox
		this->textBox_ExportBill_CodeExportBill->Visible = false;
	}
	private: System::Void button_Find_Click(System::Object^ sender, System::EventArgs^ e)// button Find ( ExportBill )
	{
		SqlConnection^ connect = gcnew SqlConnection("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		connect->Open();

		SqlCommand^ command = gcnew SqlCommand(("SELECT Tenhang, Soluongnhap, Mathang.Gianhap FROM (Chitietmathangnhap JOIN Mathang ON Chitietmathangnhap.Mahang = Mathang.Mahang) JOIN Hoadonnhap ON Chitietmathangnhap.Mahoadonnhap = Hoadonnhap.Mahoadonnhap WHERE Hoadonnhap.Mahoadonnhap = '" + this->textBox_ExportBill_CodeExportBill->Text->ToString() + "'"), connect);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
		DataSet^ dataset = gcnew DataSet();
		adapter->Fill(dataset, "tmptable");
		connect->Close();

		DataTable^ table = dataset->Tables["tmptable"];

		double totalpayment = 0;
		for (int i = 0; i < table->Rows->Count; i++)
		{
			listView_DetailGood->Items->Add(table->Rows[i]->ItemArray[0]->ToString());
			listView_DetailGood->Items[i]->SubItems->Add(table->Rows[i]->ItemArray[1]->ToString());
			listView_DetailGood->Items[i]->SubItems->Add(table->Rows[i]->ItemArray[2]->ToString());

			totalpayment += Convert::ToDouble(table->Rows[i]->ItemArray[2]);
		}
		this->Label_ExportBill_Money->Text = totalpayment.ToString();
	}
	private: System::Void ToolStripMenu_Goods_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		Goods^ f = gcnew Goods();
		f->ShowDialog();
		this->Show();
	}
};
}