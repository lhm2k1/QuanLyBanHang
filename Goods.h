#pragma once
#include <string>
#include <vector>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>
#include "connect.h"
namespace QuanLyBanHang
{
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace std;
	/// <summary>
	/// Summary for Goods
	/// </summary>
	public ref class Goods : public System::Windows::Forms::Form
	{
	public:
		Goods(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DataTable^ TABLE(String^ query, DataSet^ dataset)
		{
			SqlConnection^ connect = gcnew SqlConnection("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
			connect->Open();

			SqlCommand^ command = gcnew SqlCommand(query, connect);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			adapter->Fill(dataset, "tmptable");
			connect->Close();
			DataTable^ table = dataset->Tables["tmptable"];

			return table;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Goods()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_Goods;
	private: System::Windows::Forms::ListView^ listView_Goods;

	private: System::Windows::Forms::ColumnHeader^ GoodName;
	private: System::Windows::Forms::ColumnHeader^ GoodsCode;
	private: System::Windows::Forms::ColumnHeader^ Category;



	private: System::Windows::Forms::ColumnHeader^ Amount;
	private: System::Windows::Forms::ColumnHeader^ ImportPrice;
	private: System::Windows::Forms::ColumnHeader^ ExportPrice;




	private: System::Windows::Forms::Button^ button_Goods_Exit;
	private: System::Windows::Forms::Button^ button_Goods_Edit;
	private: System::Windows::Forms::Button^ button_Goods_Delete;
	private: System::Windows::Forms::Button^ button_Goods_Insert;
	private: System::Windows::Forms::ComboBox^ comboBox_Goods_Sort;
	private: System::Windows::Forms::Panel^ panel_AGood;
	private: System::Windows::Forms::Button^ button_Cancel;
	private: System::Windows::Forms::Button^ button_OK;
	private: System::Windows::Forms::Label^ label_AGood_ExportPrice;
	private: System::Windows::Forms::Label^ label_AGood_ImportPrice;
	private: System::Windows::Forms::Label^ label_AGood_Amount;
	private: System::Windows::Forms::Label^ label_AGood_Category;
	private: System::Windows::Forms::TextBox^ textBox_AGood_ExportPrice;

	private: System::Windows::Forms::TextBox^ textBox_AGood_Amount;
	private: System::Windows::Forms::TextBox^ textBox_AGood_Category;
	private: System::Windows::Forms::TextBox^ textBox_AGood_ImportPrice;

	private: System::Windows::Forms::TextBox^ textBox_AGood_GoodCode;
	private: System::Windows::Forms::TextBox^ textBox_AGood_GoodName;
	private: System::Windows::Forms::Label^ lable_AGood_GoodCode;
	private: System::Windows::Forms::Label^ label_AGood_GoodName;
	private: System::Windows::Forms::Label^ label_AGood_DetailGood;


	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Goods::typeid));
			this->panel_Goods = (gcnew System::Windows::Forms::Panel());
			this->panel_AGood = (gcnew System::Windows::Forms::Panel());
			this->label_AGood_DetailGood = (gcnew System::Windows::Forms::Label());
			this->button_Cancel = (gcnew System::Windows::Forms::Button());
			this->button_OK = (gcnew System::Windows::Forms::Button());
			this->label_AGood_ExportPrice = (gcnew System::Windows::Forms::Label());
			this->label_AGood_ImportPrice = (gcnew System::Windows::Forms::Label());
			this->label_AGood_Amount = (gcnew System::Windows::Forms::Label());
			this->label_AGood_Category = (gcnew System::Windows::Forms::Label());
			this->textBox_AGood_ExportPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBox_AGood_Amount = (gcnew System::Windows::Forms::TextBox());
			this->textBox_AGood_Category = (gcnew System::Windows::Forms::TextBox());
			this->textBox_AGood_ImportPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBox_AGood_GoodCode = (gcnew System::Windows::Forms::TextBox());
			this->textBox_AGood_GoodName = (gcnew System::Windows::Forms::TextBox());
			this->lable_AGood_GoodCode = (gcnew System::Windows::Forms::Label());
			this->label_AGood_GoodName = (gcnew System::Windows::Forms::Label());
			this->comboBox_Goods_Sort = (gcnew System::Windows::Forms::ComboBox());
			this->button_Goods_Exit = (gcnew System::Windows::Forms::Button());
			this->button_Goods_Edit = (gcnew System::Windows::Forms::Button());
			this->button_Goods_Delete = (gcnew System::Windows::Forms::Button());
			this->button_Goods_Insert = (gcnew System::Windows::Forms::Button());
			this->listView_Goods = (gcnew System::Windows::Forms::ListView());
			this->GoodName = (gcnew System::Windows::Forms::ColumnHeader());
			this->GoodsCode = (gcnew System::Windows::Forms::ColumnHeader());
			this->Category = (gcnew System::Windows::Forms::ColumnHeader());
			this->Amount = (gcnew System::Windows::Forms::ColumnHeader());
			this->ImportPrice = (gcnew System::Windows::Forms::ColumnHeader());
			this->ExportPrice = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel_Goods->SuspendLayout();
			this->panel_AGood->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_Goods
			// 
			this->panel_Goods->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_Goods->AutoScroll = true;
			this->panel_Goods->AutoSize = true;
			this->panel_Goods->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_Goods.BackgroundImage")));
			this->panel_Goods->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_Goods->Controls->Add(this->panel_AGood);
			this->panel_Goods->Controls->Add(this->comboBox_Goods_Sort);
			this->panel_Goods->Controls->Add(this->button_Goods_Exit);
			this->panel_Goods->Controls->Add(this->button_Goods_Edit);
			this->panel_Goods->Controls->Add(this->button_Goods_Delete);
			this->panel_Goods->Controls->Add(this->button_Goods_Insert);
			this->panel_Goods->Controls->Add(this->listView_Goods);
			this->panel_Goods->Location = System::Drawing::Point(0, 0);
			this->panel_Goods->Name = L"panel_Goods";
			this->panel_Goods->Size = System::Drawing::Size(773, 402);
			this->panel_Goods->TabIndex = 0;
			// 
			// panel_AGood
			// 
			this->panel_AGood->AutoSize = true;
			this->panel_AGood->Controls->Add(this->label_AGood_DetailGood);
			this->panel_AGood->Controls->Add(this->button_Cancel);
			this->panel_AGood->Controls->Add(this->button_OK);
			this->panel_AGood->Controls->Add(this->label_AGood_ExportPrice);
			this->panel_AGood->Controls->Add(this->label_AGood_ImportPrice);
			this->panel_AGood->Controls->Add(this->label_AGood_Amount);
			this->panel_AGood->Controls->Add(this->label_AGood_Category);
			this->panel_AGood->Controls->Add(this->textBox_AGood_ExportPrice);
			this->panel_AGood->Controls->Add(this->textBox_AGood_Amount);
			this->panel_AGood->Controls->Add(this->textBox_AGood_Category);
			this->panel_AGood->Controls->Add(this->textBox_AGood_ImportPrice);
			this->panel_AGood->Controls->Add(this->textBox_AGood_GoodCode);
			this->panel_AGood->Controls->Add(this->textBox_AGood_GoodName);
			this->panel_AGood->Controls->Add(this->lable_AGood_GoodCode);
			this->panel_AGood->Controls->Add(this->label_AGood_GoodName);
			this->panel_AGood->Location = System::Drawing::Point(31, 67);
			this->panel_AGood->Name = L"panel_AGood";
			this->panel_AGood->Size = System::Drawing::Size(603, 258);
			this->panel_AGood->TabIndex = 6;
			this->panel_AGood->Visible = false;
			// 
			// label_AGood_DetailGood
			// 
			this->label_AGood_DetailGood->AutoSize = true;
			this->label_AGood_DetailGood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_AGood_DetailGood->Location = System::Drawing::Point(261, 14);
			this->label_AGood_DetailGood->Name = L"label_AGood_DetailGood";
			this->label_AGood_DetailGood->Size = System::Drawing::Size(119, 24);
			this->label_AGood_DetailGood->TabIndex = 14;
			this->label_AGood_DetailGood->Text = L"Detail Good";
			// 
			// button_Cancel
			// 
			this->button_Cancel->Location = System::Drawing::Point(359, 196);
			this->button_Cancel->Name = L"button_Cancel";
			this->button_Cancel->Size = System::Drawing::Size(75, 23);
			this->button_Cancel->TabIndex = 13;
			this->button_Cancel->Text = L"Cancel";
			this->button_Cancel->UseVisualStyleBackColor = true;
			this->button_Cancel->Click += gcnew System::EventHandler(this, &Goods::button_Cancel_Click);
			// 
			// button_OK
			// 
			this->button_OK->Location = System::Drawing::Point(188, 196);
			this->button_OK->Name = L"button_OK";
			this->button_OK->Size = System::Drawing::Size(75, 23);
			this->button_OK->TabIndex = 12;
			this->button_OK->Text = L"OK";
			this->button_OK->UseVisualStyleBackColor = true;
			this->button_OK->Click += gcnew System::EventHandler(this, &Goods::button_OK_Click);
			// 
			// label_AGood_ExportPrice
			// 
			this->label_AGood_ExportPrice->AutoSize = true;
			this->label_AGood_ExportPrice->Location = System::Drawing::Point(442, 114);
			this->label_AGood_ExportPrice->Name = L"label_AGood_ExportPrice";
			this->label_AGood_ExportPrice->Size = System::Drawing::Size(61, 13);
			this->label_AGood_ExportPrice->TabIndex = 11;
			this->label_AGood_ExportPrice->Text = L"ExportPrice";
			// 
			// label_AGood_ImportPrice
			// 
			this->label_AGood_ImportPrice->AutoSize = true;
			this->label_AGood_ImportPrice->Location = System::Drawing::Point(283, 114);
			this->label_AGood_ImportPrice->Name = L"label_AGood_ImportPrice";
			this->label_AGood_ImportPrice->Size = System::Drawing::Size(60, 13);
			this->label_AGood_ImportPrice->TabIndex = 10;
			this->label_AGood_ImportPrice->Text = L"ImportPrice";
			// 
			// label_AGood_Amount
			// 
			this->label_AGood_Amount->AutoSize = true;
			this->label_AGood_Amount->Location = System::Drawing::Point(122, 114);
			this->label_AGood_Amount->Name = L"label_AGood_Amount";
			this->label_AGood_Amount->Size = System::Drawing::Size(43, 13);
			this->label_AGood_Amount->TabIndex = 9;
			this->label_AGood_Amount->Text = L"Amount";
			// 
			// label_AGood_Category
			// 
			this->label_AGood_Category->AutoSize = true;
			this->label_AGood_Category->Location = System::Drawing::Point(454, 43);
			this->label_AGood_Category->Name = L"label_AGood_Category";
			this->label_AGood_Category->Size = System::Drawing::Size(49, 13);
			this->label_AGood_Category->TabIndex = 8;
			this->label_AGood_Category->Text = L"Category";
			// 
			// textBox_AGood_ExportPrice
			// 
			this->textBox_AGood_ExportPrice->Location = System::Drawing::Point(410, 144);
			this->textBox_AGood_ExportPrice->Name = L"textBox_AGood_ExportPrice";
			this->textBox_AGood_ExportPrice->Size = System::Drawing::Size(131, 20);
			this->textBox_AGood_ExportPrice->TabIndex = 7;
			// 
			// textBox_AGood_Amount
			// 
			this->textBox_AGood_Amount->Location = System::Drawing::Point(79, 144);
			this->textBox_AGood_Amount->Name = L"textBox_AGood_Amount";
			this->textBox_AGood_Amount->Size = System::Drawing::Size(131, 20);
			this->textBox_AGood_Amount->TabIndex = 6;
			// 
			// textBox_AGood_Category
			// 
			this->textBox_AGood_Category->Location = System::Drawing::Point(410, 68);
			this->textBox_AGood_Category->Name = L"textBox_AGood_Category";
			this->textBox_AGood_Category->Size = System::Drawing::Size(131, 20);
			this->textBox_AGood_Category->TabIndex = 5;
			// 
			// textBox_AGood_ImportPrice
			// 
			this->textBox_AGood_ImportPrice->Location = System::Drawing::Point(249, 144);
			this->textBox_AGood_ImportPrice->Name = L"textBox_AGood_ImportPrice";
			this->textBox_AGood_ImportPrice->Size = System::Drawing::Size(131, 20);
			this->textBox_AGood_ImportPrice->TabIndex = 4;
			// 
			// textBox_AGood_GoodCode
			// 
			this->textBox_AGood_GoodCode->Location = System::Drawing::Point(249, 68);
			this->textBox_AGood_GoodCode->Name = L"textBox_AGood_GoodCode";
			this->textBox_AGood_GoodCode->Size = System::Drawing::Size(131, 20);
			this->textBox_AGood_GoodCode->TabIndex = 3;
			// 
			// textBox_AGood_GoodName
			// 
			this->textBox_AGood_GoodName->Location = System::Drawing::Point(76, 68);
			this->textBox_AGood_GoodName->Name = L"textBox_AGood_GoodName";
			this->textBox_AGood_GoodName->Size = System::Drawing::Size(131, 20);
			this->textBox_AGood_GoodName->TabIndex = 2;
			// 
			// lable_AGood_GoodCode
			// 
			this->lable_AGood_GoodCode->AutoSize = true;
			this->lable_AGood_GoodCode->Location = System::Drawing::Point(283, 43);
			this->lable_AGood_GoodCode->Name = L"lable_AGood_GoodCode";
			this->lable_AGood_GoodCode->Size = System::Drawing::Size(58, 13);
			this->lable_AGood_GoodCode->TabIndex = 1;
			this->lable_AGood_GoodCode->Text = L"GoodCode";
			// 
			// label_AGood_GoodName
			// 
			this->label_AGood_GoodName->AutoSize = true;
			this->label_AGood_GoodName->Location = System::Drawing::Point(113, 43);
			this->label_AGood_GoodName->Name = L"label_AGood_GoodName";
			this->label_AGood_GoodName->Size = System::Drawing::Size(61, 13);
			this->label_AGood_GoodName->TabIndex = 0;
			this->label_AGood_GoodName->Text = L"GoodName";
			// 
			// comboBox_Goods_Sort
			// 
			this->comboBox_Goods_Sort->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox_Goods_Sort->BackColor = System::Drawing::Color::Silver;
			this->comboBox_Goods_Sort->FormatString = L"string";
			this->comboBox_Goods_Sort->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Sort By Amount", L"Sort By Category",
					L"Sort By Export Price", L"Sort By GoodCode", L"Sort By Import Price", L"Sort By Name"
			});
			this->comboBox_Goods_Sort->Location = System::Drawing::Point(640, 18);
			this->comboBox_Goods_Sort->Name = L"comboBox_Goods_Sort";
			this->comboBox_Goods_Sort->Size = System::Drawing::Size(121, 21);
			this->comboBox_Goods_Sort->Sorted = true;
			this->comboBox_Goods_Sort->TabIndex = 5;
			this->comboBox_Goods_Sort->Text = L"Sort";
			this->comboBox_Goods_Sort->SelectedIndexChanged += gcnew System::EventHandler(this, &Goods::comboBox_Goods_Sort_SelectedIndexChanged);
			// 
			// button_Goods_Exit
			// 
			this->button_Goods_Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_Goods_Exit->Location = System::Drawing::Point(661, 347);
			this->button_Goods_Exit->Name = L"button_Goods_Exit";
			this->button_Goods_Exit->Size = System::Drawing::Size(75, 38);
			this->button_Goods_Exit->TabIndex = 4;
			this->button_Goods_Exit->Text = L"Exit";
			this->button_Goods_Exit->UseVisualStyleBackColor = true;
			this->button_Goods_Exit->Click += gcnew System::EventHandler(this, &Goods::button_Goods_Exit_Click);
			// 
			// button_Goods_Edit
			// 
			this->button_Goods_Edit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_Goods_Edit->Location = System::Drawing::Point(661, 255);
			this->button_Goods_Edit->Name = L"button_Goods_Edit";
			this->button_Goods_Edit->Size = System::Drawing::Size(75, 38);
			this->button_Goods_Edit->TabIndex = 3;
			this->button_Goods_Edit->Text = L"Edit";
			this->button_Goods_Edit->UseVisualStyleBackColor = true;
			this->button_Goods_Edit->Click += gcnew System::EventHandler(this, &Goods::button_Goods_Edit_Click);
			// 
			// button_Goods_Delete
			// 
			this->button_Goods_Delete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_Goods_Delete->Location = System::Drawing::Point(661, 156);
			this->button_Goods_Delete->Name = L"button_Goods_Delete";
			this->button_Goods_Delete->Size = System::Drawing::Size(75, 38);
			this->button_Goods_Delete->TabIndex = 2;
			this->button_Goods_Delete->Text = L"Delete";
			this->button_Goods_Delete->UseVisualStyleBackColor = true;
			this->button_Goods_Delete->Click += gcnew System::EventHandler(this, &Goods::button_Goods_Delete_Click);
			// 
			// button_Goods_Insert
			// 
			this->button_Goods_Insert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_Goods_Insert->BackColor = System::Drawing::Color::Transparent;
			this->button_Goods_Insert->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button_Goods_Insert->Location = System::Drawing::Point(661, 56);
			this->button_Goods_Insert->Name = L"button_Goods_Insert";
			this->button_Goods_Insert->Size = System::Drawing::Size(75, 38);
			this->button_Goods_Insert->TabIndex = 1;
			this->button_Goods_Insert->Text = L"Insert";
			this->button_Goods_Insert->UseVisualStyleBackColor = false;
			this->button_Goods_Insert->Click += gcnew System::EventHandler(this, &Goods::button_Goods_Insert_Click);
			// 
			// listView_Goods
			// 
			this->listView_Goods->Activation = System::Windows::Forms::ItemActivation::TwoClick;
			this->listView_Goods->AllowDrop = true;
			this->listView_Goods->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView_Goods->AutoArrange = false;
			this->listView_Goods->BackColor = System::Drawing::Color::LightGray;
			this->listView_Goods->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView_Goods->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->GoodName, this->GoodsCode,
					this->Category, this->Amount, this->ImportPrice, this->ExportPrice
			});
			this->listView_Goods->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listView_Goods->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView_Goods->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->listView_Goods->FullRowSelect = true;
			this->listView_Goods->GridLines = true;
			this->listView_Goods->HideSelection = false;
			this->listView_Goods->Location = System::Drawing::Point(3, 18);
			this->listView_Goods->Name = L"listView_Goods";
			this->listView_Goods->Size = System::Drawing::Size(631, 367);
			this->listView_Goods->TabIndex = 0;
			this->listView_Goods->UseCompatibleStateImageBehavior = false;
			this->listView_Goods->View = System::Windows::Forms::View::Details;
			// 
			// GoodName
			// 
			this->GoodName->Text = L"GoodName";
			this->GoodName->Width = 195;
			// 
			// GoodsCode
			// 
			this->GoodsCode->Text = L"GoodsCode";
			this->GoodsCode->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->GoodsCode->Width = 87;
			// 
			// Category
			// 
			this->Category->Text = L"Category";
			this->Category->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Category->Width = 109;
			// 
			// Amount
			// 
			this->Amount->Text = L"Amount";
			this->Amount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Amount->Width = 72;
			// 
			// ImportPrice
			// 
			this->ImportPrice->Text = L"Import Price";
			this->ImportPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ImportPrice->Width = 79;
			// 
			// ExportPrice
			// 
			this->ExportPrice->Text = L"Export Price";
			this->ExportPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ExportPrice->Width = 86;
			// 
			// Goods
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(773, 402);
			this->Controls->Add(this->panel_Goods);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Goods";
			this->Text = L"Warehoue";
			this->Load += gcnew System::EventHandler(this, &Goods::Goods_Load);
			this->panel_Goods->ResumeLayout(false);
			this->panel_Goods->PerformLayout();
			this->panel_AGood->ResumeLayout(false);
			this->panel_AGood->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Goods_Delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DataSet^ dataset = gcnew DataSet();
		String^ query = gcnew String("SELECT Tenhang, Mahang, Tenloaihang, Soluongton, Gianhap, Giaxuat FROM Mathang, Loaihang WHERE Mathang.MaLoaihang = Loaihang.Maloaihang");
		DataTable^ table = TABLE(query, dataset);
		vector<Mathang> VT;
		Mathang* g = new Mathang[table->Rows->Count];
		// convert data and get data
		static int a = 0;
		for (int i = 0; i < table->Rows->Count; i++)
		{
			g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
			g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
			g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
			g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
			g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
			g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));

			VT.push_back(g[i]);
		}
		int j = 0;
		for (int i = 0; i < int(VT.size()) - a; i++)
		{
			if (listView_Goods->Items[i]->Selected)
			{
				j = i;
				listView_Goods->Items[i]->Remove();
				while ( j < int(VT.size())-1 )
				{
					VT[j] = VT[j + 1];
					j++;
				}
				VT.pop_back();
				a++;
			}
		}
	}
	private: System::Void comboBox_Goods_Sort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		DataSet^ dataset = gcnew DataSet();
		String^ query = gcnew String("SELECT Tenhang, Mahang, Tenloaihang, Soluongton, Gianhap, Giaxuat FROM Mathang, Loaihang WHERE Mathang.MaLoaihang = Loaihang.Maloaihang");
		DataTable^ table = TABLE(query,dataset);
//sort by name
		if (comboBox_Goods_Sort->Text->ToString() == "Sort By Name")
		{
			if (table->Rows->Count > 0)
			{
				listView_Goods->Items->Clear();
			}
			Mathang* g = new Mathang[table->Rows->Count];
		// convert data and get data
			for (int i = 0; i < table->Rows->Count; i++)
			{
				g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
				g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
				g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
				g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
				g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
				g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));
			}
		// sort data in *g
			for (int i = 0; i < table->Rows->Count; i++)
			{
				for (int j = table->Rows->Count-1; j > i; j--)
				{
					if (g[j - 1].get_Tenhang() > g[j].get_Tenhang())
					{
						Mathang tmp = g[j];
						g[j] = g[j - 1];
						g[j - 1] = tmp;
					}
				}
			}
		// add data from *g to  lisviewgoods
			for (int i = 0; i < table->Rows->Count; i++)
			{
				String^ name = gcnew String(g[i].get_Tenhang().c_str());
				listView_Goods->Items->Add(name); delete name;
				
				name = gcnew String(g[i].get_Mahang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				name = gcnew String(g[i].get_Maloaihang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				listView_Goods->Items[i]->SubItems->Add( g[i].get_Soluongton().ToString() );
				listView_Goods->Items[i]->SubItems->Add( g[i].get_Gianhap().ToString() );
				listView_Goods->Items[i]->SubItems->Add( g[i].get_Giaxuat().ToString() );
			}
		}
//sort by Export price
		if (comboBox_Goods_Sort->Text->ToString() == "Sort By Export Price")
		{
			if (table->Rows->Count > 0)
			{
				listView_Goods->Items->Clear();
			}
			Mathang* g = new Mathang[table->Rows->Count];
			// convert data and get data
			for (int i = 0; i < table->Rows->Count; i++)
			{
				g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
				g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
				g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
				g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
				g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
				g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));
			}
			// sort data in *g
			for (int i = 0; i < table->Rows->Count; i++)
			{
				for (int j = table->Rows->Count - 1; j > i; j--)
				{
					if (g[j - 1].get_Giaxuat() > g[j].get_Giaxuat())
					{
						Mathang tmp = g[j];
						g[j] = g[j - 1];
						g[j - 1] = tmp;
					}
				}
			}
			// add data from *g to  lisviewgoods
			for (int i = 0; i < table->Rows->Count; i++)
			{
				String^ name = gcnew String(g[i].get_Tenhang().c_str());
				listView_Goods->Items->Add(name); delete name;

				name = gcnew String(g[i].get_Mahang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				name = gcnew String(g[i].get_Maloaihang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				listView_Goods->Items[i]->SubItems->Add(g[i].get_Soluongton().ToString());
				listView_Goods->Items[i]->SubItems->Add(g[i].get_Gianhap().ToString());
				listView_Goods->Items[i]->SubItems->Add(g[i].get_Giaxuat().ToString());
			}
		}
//sort by import price
		if (comboBox_Goods_Sort->Text->ToString() == "Sort By Import Price")
		{
			if (table->Rows->Count > 0)
			{
				listView_Goods->Items->Clear();
			}
			Mathang* g = new Mathang[table->Rows->Count];
			// convert data and get data
			for (int i = 0; i < table->Rows->Count; i++)
			{
				g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
				g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
				g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
				g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
				g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
				g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));
			}
			// sort data in *g
			for (int i = 0; i < table->Rows->Count; i++)
			{
				for (int j = table->Rows->Count - 1; j > i; j--)
				{
					if (g[j - 1].get_Gianhap() > g[j].get_Gianhap())
					{
						Mathang tmp = g[j];
						g[j] = g[j - 1];
						g[j - 1] = tmp;
					}
				}
			}
			// add data from *g to  lisviewgoods
			for (int i = 0; i < table->Rows->Count; i++)
			{
				String^ name = gcnew String(g[i].get_Tenhang().c_str());
				listView_Goods->Items->Add(name); delete name;

				name = gcnew String(g[i].get_Mahang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				name = gcnew String(g[i].get_Maloaihang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				listView_Goods->Items[i]->SubItems->Add(g[i].get_Soluongton().ToString());
				listView_Goods->Items[i]->SubItems->Add(g[i].get_Gianhap().ToString());
				listView_Goods->Items[i]->SubItems->Add(g[i].get_Giaxuat().ToString());
			}
		}
//sort by Amount
		if (comboBox_Goods_Sort->Text->ToString() == "Sort By Amount")
		{
			if (table->Rows->Count > 0)
			{
				listView_Goods->Items->Clear();
			}
			Mathang* g = new Mathang[table->Rows->Count];
			// convert data and get data
			for (int i = 0; i < table->Rows->Count; i++)
			{
				g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
				g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
				g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
				g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
				g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
				g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));
			}
			// sort data in *g
			for (int i = 0; i < table->Rows->Count; i++)
			{
				for (int j = table->Rows->Count - 1; j > i; j--)
				{
					if (g[j - 1].get_Soluongton() > g[j].get_Soluongton())
					{
						Mathang tmp = g[j];
						g[j] = g[j - 1];
						g[j - 1] = tmp;
					}
				}
			}
			// add data from *g to  lisviewgoods
			for (int i = 0; i < table->Rows->Count; i++)
			{
				String^ name = gcnew String(g[i].get_Tenhang().c_str());
				listView_Goods->Items->Add(name); delete name;

				name = gcnew String(g[i].get_Mahang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				name = gcnew String(g[i].get_Maloaihang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				listView_Goods->Items[i]->SubItems->Add(g[i].get_Soluongton().ToString());
				listView_Goods->Items[i]->SubItems->Add(g[i].get_Gianhap().ToString());
				listView_Goods->Items[i]->SubItems->Add(g[i].get_Giaxuat().ToString());
			}
		}
//sort by GoodsCode
		if (comboBox_Goods_Sort->Text->ToString() == "Sort By GoodCode")
		{
			if (table->Rows->Count > 0)
			{
				listView_Goods->Items->Clear();
			}
			Mathang* g = new Mathang[table->Rows->Count];
			// convert data and get data
			for (int i = 0; i < table->Rows->Count; i++)
			{
				g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
				g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
				g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
				g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
				g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
				g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));
			}
			// sort data in *g
			for (int i = 0; i < table->Rows->Count; i++)
			{
				for (int j = table->Rows->Count - 1; j > i; j--)
				{
					if (g[j - 1].get_Mahang() > g[j].get_Mahang())
					{
						Mathang tmp = g[j];
						g[j] = g[j - 1];
						g[j - 1] = tmp;
					}
				}
			}
			// add data from *g to  lisviewgoods
			for (int i = 0; i < table->Rows->Count; i++)
			{
				String^ name = gcnew String(g[i].get_Tenhang().c_str());
				listView_Goods->Items->Add(name); delete name;

				name = gcnew String(g[i].get_Mahang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				name = gcnew String(g[i].get_Maloaihang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				listView_Goods->Items[i]->SubItems->Add(g[i].get_Soluongton().ToString());
				listView_Goods->Items[i]->SubItems->Add(g[i].get_Gianhap().ToString());
				listView_Goods->Items[i]->SubItems->Add(g[i].get_Giaxuat().ToString());
			}
		}
//sort by Category
		if (comboBox_Goods_Sort->Text->ToString() == "Sort By Category")
		{
			if (table->Rows->Count > 0)
			{
				listView_Goods->Items->Clear();
			}
			Mathang* g = new Mathang[table->Rows->Count];
			// convert data and get data
			for (int i = 0; i < table->Rows->Count; i++)
			{
				g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
				g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
				g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
				g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
				g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
				g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));
			}
			// sort data in *g
			for (int i = 0; i < table->Rows->Count; i++)
			{
				for (int j = table->Rows->Count - 1; j > i; j--)
				{
					if (g[j - 1].get_Maloaihang() < g[j].get_Maloaihang())
					{
						Mathang tmp = g[j];
						g[j] = g[j - 1];
						g[j - 1] = tmp;
					}
				}
			}
			// add data from *g to  lisviewgoods
			for (int i = 0; i < table->Rows->Count; i++)
			{
				String^ name = gcnew String(g[i].get_Tenhang().c_str());
				listView_Goods->Items->Add(name); delete name;

				name = gcnew String(g[i].get_Mahang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				name = gcnew String(g[i].get_Maloaihang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				listView_Goods->Items[i]->SubItems->Add(g[i].get_Soluongton().ToString());
				listView_Goods->Items[i]->SubItems->Add(g[i].get_Gianhap().ToString());
				listView_Goods->Items[i]->SubItems->Add(g[i].get_Giaxuat().ToString());
			}
		}
	}
	private: System::Void Goods_Load(System::Object^ sender, System::EventArgs^ e)
	{
		String^ query = gcnew String("SELECT Tenhang, Mahang, Tenloaihang, Soluongton, Gianhap, Giaxuat FROM Mathang, Loaihang WHERE Mathang.MaLoaihang = Loaihang.Maloaihang");
		DataSet^ dataset = gcnew DataSet();
		DataTable^ table = TABLE(query, dataset);
		vector<Mathang> VT;
		Mathang* g = new Mathang[table->Rows->Count];
		// convert data and get data
		static int a = 0;
		for (int i = 0; i < table->Rows->Count; i++)
		{
			g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
			g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
			g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
			g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
			g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
			g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));
		}
		// add data from *g to  lisviewgoods
		for (int i = 0; i < table->Rows->Count; i++)
		{
			String^ name = gcnew String(g[i].get_Tenhang().c_str());
			listView_Goods->Items->Add(name); delete name;

			name = gcnew String(g[i].get_Mahang().c_str());
			listView_Goods->Items[i]->SubItems->Add(name); delete name;

			name = gcnew String(g[i].get_Maloaihang().c_str());
			listView_Goods->Items[i]->SubItems->Add(name); delete name;

			listView_Goods->Items[i]->SubItems->Add(g[i].get_Soluongton().ToString());
			listView_Goods->Items[i]->SubItems->Add(g[i].get_Gianhap().ToString());
			listView_Goods->Items[i]->SubItems->Add(g[i].get_Giaxuat().ToString());
		}
	}
	private: System::Void button_OK_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DataSet^ dataset = gcnew DataSet();
		String^ query = gcnew String("SELECT Tenhang, Mahang, Tenloaihang, Soluongton, Gianhap, Giaxuat FROM Mathang, Loaihang WHERE Mathang.MaLoaihang = Loaihang.Maloaihang");
		DataTable^ table = TABLE(query, dataset);
		vector<Mathang> VT;
		Mathang* g = new Mathang[table->Rows->Count];

		for (int i = 0; i < table->Rows->Count; i++)
		{
			g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
			g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
			g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
			g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
			g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
			g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));

			VT.push_back(g[i]);
		}
		for (int i = 0; i < table->Rows->Count; i++)
		{
			if (listView_Goods->Items[i]->Selected)
			{
				/*String^ name = gcnew String(VT[i].get_Tenhang().c_str());
				listView_Goods->Items->Add(name); delete name;

				name = gcnew String(VT[i].get_Mahang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				name = gcnew String(VT[i].get_Maloaihang().c_str());
				listView_Goods->Items[i]->SubItems->Add(name); delete name;

				listView_Goods->Items[i]->SubItems->Add(VT[i].get_Soluongton().ToString());
				listView_Goods->Items[i]->SubItems->Add(VT[i].get_Gianhap().ToString());
				listView_Goods->Items[i]->SubItems->Add(VT[i].get_Giaxuat().ToString());*/
			}
		}
		this->panel_AGood->Visible = false;
	}
	private: System::Void button_Cancel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->panel_AGood->Visible = false;
	}
	private: System::Void button_Goods_Insert_Click(System::Object^ sender, System::EventArgs^ e)// button goods insert
	{
		static int status_Insert = 0;
		DataSet^ dataset = gcnew DataSet();
		String^ query = gcnew String("SELECT Tenhang, Mahang, Tenloaihang, Soluongton, Gianhap, Giaxuat FROM Mathang, Loaihang WHERE Mathang.MaLoaihang = Loaihang.Maloaihang");
		DataTable^ table = TABLE(query, dataset);
		vector<Mathang> VT;
		Mathang* g = new Mathang[table->Rows->Count];
		// convert data and get data
		for (int i = 0; i < table->Rows->Count; i++)
		{
			g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
			g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
			g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
			g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
			g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
			g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));

			VT.push_back(g[i]);
		}
		this->panel_AGood->Visible = true;
	}
	private: System::Void button_Goods_Edit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		static int status_Edit = 0;
		DataSet^ dataset = gcnew DataSet();
		String^ query = gcnew String("SELECT Tenhang, Mahang, Tenloaihang, Soluongton, Gianhap, Giaxuat FROM Mathang, Loaihang WHERE Mathang.MaLoaihang = Loaihang.Maloaihang");
		DataTable^ table = TABLE(query, dataset);
		vector<Mathang> VT;
		Mathang* g = new Mathang[table->Rows->Count];
		// convert data and get data
		for (int i = 0; i < table->Rows->Count; i++)
		{
			g[i].set_Tenhang(marshal_as<string>(table->Rows[i]->ItemArray[0]->ToString()));
			g[i].set_Mahang(marshal_as<string>(table->Rows[i]->ItemArray[1]->ToString()));
			g[i].set_Maloaihang(marshal_as<string>(table->Rows[i]->ItemArray[2]->ToString()));
			g[i].set_Soluongton(atoi(marshal_as<string>(table->Rows[i]->ItemArray[3]->ToString()).c_str()));
			g[i].set_Gianhap(atof(marshal_as<string>(table->Rows[i]->ItemArray[4]->ToString()).c_str()));
			g[i].set_Giaxuat(atof(marshal_as<string>(table->Rows[i]->ItemArray[5]->ToString()).c_str()));

			VT.push_back(g[i]);
		}

		for (int i = 0; i < table->Rows->Count; i++)
		{
			if (listView_Goods->Items[i]->Selected)
			{
				this->panel_AGood->Visible = true;
				this->textBox_AGood_GoodName->Text = gcnew String( (VT[i].get_Tenhang().c_str()) );
				this->textBox_AGood_Category->Text = gcnew String( (VT[i].get_Mahang().c_str()));
				this->textBox_AGood_GoodCode->Text = gcnew String( (VT[i].get_Maloaihang().c_str()) );
				this->textBox_AGood_Amount->Text = gcnew String( ( VT[i].get_Soluongton().ToString() ) );
				this->textBox_AGood_ImportPrice->Text = gcnew String( ( VT[i].get_Gianhap().ToString() ) );
				this->textBox_AGood_ExportPrice->Text = gcnew String( ( VT[i].get_Giaxuat().ToString() ) );
			}
		}
	}
	private: System::Void button_Goods_Exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
};
}
