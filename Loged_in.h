#pragma once
#include "Goods.h"
#include "Bill.h"
#include <string>
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


	protected:

	protected:


































































private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenu_Bill;
private: System::Windows::Forms::ToolStripMenuItem^ importBillToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ exportBillToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenu_Goods;
private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenu_Employees;
private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenu_Report;
private: System::Windows::Forms::ToolStripMenuItem^ dailyReportToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ monthlyReportToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ annuToolStripMenuItem;
private: System::Windows::Forms::MenuStrip^ menuStrip_Homepage;
private: Bunifu::Framework::UI::BunifuThinButton2^ button_Logout;
private: System::Windows::Forms::MonthCalendar^ monthCalendar1;


































































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
			this->ToolStripMenu_Bill = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importBillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportBillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenu_Goods = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenu_Employees = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenu_Report = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dailyReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->monthlyReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->annuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip_Homepage = (gcnew System::Windows::Forms::MenuStrip());
			this->button_Logout = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->menuStrip_Homepage->SuspendLayout();
			this->SuspendLayout();
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
			// menuStrip_Homepage
			// 
			this->menuStrip_Homepage->AllowDrop = true;
			this->menuStrip_Homepage->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->menuStrip_Homepage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->menuStrip_Homepage->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip_Homepage->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ToolStripMenu_Bill,
					this->ToolStripMenu_Goods, this->ToolStripMenu_Employees, this->ToolStripMenu_Report
			});
			this->menuStrip_Homepage->Location = System::Drawing::Point(283, 1);
			this->menuStrip_Homepage->Name = L"menuStrip_Homepage";
			this->menuStrip_Homepage->Size = System::Drawing::Size(254, 25);
			this->menuStrip_Homepage->TabIndex = 0;
			this->menuStrip_Homepage->Text = L"menuStrip_Homepage";
			// 
			// button_Logout
			// 
			this->button_Logout->ActiveBorderThickness = 1;
			this->button_Logout->ActiveCornerRadius = 20;
			this->button_Logout->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button_Logout->ActiveForecolor = System::Drawing::Color::Transparent;
			this->button_Logout->ActiveLineColor = System::Drawing::Color::Transparent;
			this->button_Logout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_Logout->AutoScroll = true;
			this->button_Logout->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->button_Logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_Logout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Logout.BackgroundImage")));
			this->button_Logout->ButtonText = L"Log out";
			this->button_Logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Logout->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Logout->ForeColor = System::Drawing::Color::SeaGreen;
			this->button_Logout->IdleBorderThickness = 1;
			this->button_Logout->IdleCornerRadius = 20;
			this->button_Logout->IdleFillColor = System::Drawing::Color::DeepSkyBlue;
			this->button_Logout->IdleForecolor = System::Drawing::Color::MintCream;
			this->button_Logout->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->button_Logout->Location = System::Drawing::Point(676, 1);
			this->button_Logout->Margin = System::Windows::Forms::Padding(5);
			this->button_Logout->Name = L"button_Logout";
			this->button_Logout->Size = System::Drawing::Size(114, 39);
			this->button_Logout->TabIndex = 4;
			this->button_Logout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_Logout->Click += gcnew System::EventHandler(this, &Loged_in::button_Logout_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(18, 60);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 6;
			// 
			// Loged_in
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(790, 434);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->button_Logout);
			this->Controls->Add(this->menuStrip_Homepage);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip_Homepage;
			this->Name = L"Loged_in";
			this->Text = L"Home Page";
			this->menuStrip_Homepage->ResumeLayout(false);
			this->menuStrip_Homepage->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/*	private: System::Void button_Find_Click(System::Object^ sender, System::EventArgs^ e)// button Find ( ExportBill )
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
	}*/
	private: System::Void ToolStripMenu_Goods_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		Goods^ f = gcnew Goods();
		f->ShowDialog();
		this->Show();
	}
	private: System::Void button_Logout_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
};
}