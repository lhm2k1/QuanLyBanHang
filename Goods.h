#pragma once
#include <string>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>
#include "connect.h"
namespace QuanLyBanHang {
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
			this->SuspendLayout();
			// 
			// panel_Goods
			// 
			this->panel_Goods->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_Goods.BackgroundImage")));
			this->panel_Goods->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_Goods->Controls->Add(this->comboBox_Goods_Sort);
			this->panel_Goods->Controls->Add(this->button_Goods_Exit);
			this->panel_Goods->Controls->Add(this->button_Goods_Edit);
			this->panel_Goods->Controls->Add(this->button_Goods_Delete);
			this->panel_Goods->Controls->Add(this->button_Goods_Insert);
			this->panel_Goods->Controls->Add(this->listView_Goods);
			this->panel_Goods->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_Goods->Location = System::Drawing::Point(0, 0);
			this->panel_Goods->Name = L"panel_Goods";
			this->panel_Goods->Size = System::Drawing::Size(773, 402);
			this->panel_Goods->TabIndex = 0;
			// 
			// comboBox_Goods_Sort
			// 
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
			this->comboBox_Goods_Sort->Text = L"Sort By Name";
			this->comboBox_Goods_Sort->SelectedIndexChanged += gcnew System::EventHandler(this, &Goods::comboBox_Goods_Sort_SelectedIndexChanged);
			// 
			// button_Goods_Exit
			// 
			this->button_Goods_Exit->Location = System::Drawing::Point(661, 276);
			this->button_Goods_Exit->Name = L"button_Goods_Exit";
			this->button_Goods_Exit->Size = System::Drawing::Size(75, 23);
			this->button_Goods_Exit->TabIndex = 4;
			this->button_Goods_Exit->Text = L"Exit";
			this->button_Goods_Exit->UseVisualStyleBackColor = true;
			// 
			// button_Goods_Edit
			// 
			this->button_Goods_Edit->Location = System::Drawing::Point(661, 228);
			this->button_Goods_Edit->Name = L"button_Goods_Edit";
			this->button_Goods_Edit->Size = System::Drawing::Size(75, 23);
			this->button_Goods_Edit->TabIndex = 3;
			this->button_Goods_Edit->Text = L"Edit";
			this->button_Goods_Edit->UseVisualStyleBackColor = true;
			// 
			// button_Goods_Delete
			// 
			this->button_Goods_Delete->Location = System::Drawing::Point(661, 172);
			this->button_Goods_Delete->Name = L"button_Goods_Delete";
			this->button_Goods_Delete->Size = System::Drawing::Size(75, 23);
			this->button_Goods_Delete->TabIndex = 2;
			this->button_Goods_Delete->Text = L"Delete";
			this->button_Goods_Delete->UseVisualStyleBackColor = true;
			// 
			// button_Goods_Insert
			// 
			this->button_Goods_Insert->BackColor = System::Drawing::Color::Transparent;
			this->button_Goods_Insert->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button_Goods_Insert->Location = System::Drawing::Point(661, 125);
			this->button_Goods_Insert->Name = L"button_Goods_Insert";
			this->button_Goods_Insert->Size = System::Drawing::Size(75, 23);
			this->button_Goods_Insert->TabIndex = 1;
			this->button_Goods_Insert->Text = L"Insert";
			this->button_Goods_Insert->UseVisualStyleBackColor = false;
			this->button_Goods_Insert->Click += gcnew System::EventHandler(this, &Goods::button_Goods_Insert_Click);
			// 
			// listView_Goods
			// 
			this->listView_Goods->AutoArrange = false;
			this->listView_Goods->BackColor = System::Drawing::Color::LightGray;
			this->listView_Goods->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView_Goods->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->GoodName, this->GoodsCode,
					this->Category, this->Amount, this->ImportPrice, this->ExportPrice
			});
			this->listView_Goods->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->GoodName->Width = 228;
			// 
			// GoodsCode
			// 
			this->GoodsCode->Text = L"GoodsCode";
			this->GoodsCode->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->GoodsCode->Width = 75;
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
			this->ImportPrice->Width = 72;
			// 
			// ExportPrice
			// 
			this->ExportPrice->Text = L"Export Price";
			this->ExportPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ExportPrice->Width = 74;
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
			this->panel_Goods->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Goods_Insert_Click(System::Object^ sender, System::EventArgs^ e)// button goods insert
	{
		SqlConnection^ connect = gcnew SqlConnection("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		connect->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT Tenhang, Mahang, Tenloaihang, Soluongton, Gianhap, Giaxuat FROM Mathang, Loaihang WHERE Mathang.MaLoaihang = Loaihang.Maloaihang", connect);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
		DataSet^ dataset = gcnew DataSet();
		adapter->Fill(dataset, "tmptable");
		connect->Close();
		DataTable^ table = dataset->Tables["tmptable"];
		for (int i = 0; i < table->Rows->Count; i++)
		{
			listView_Goods->Items->Add(table->Rows[i]->ItemArray[0]->ToString());
			for (int j = 1; j < 6; j++)
				listView_Goods->Items[i]->SubItems->Add(table->Rows[i]->ItemArray[j]->ToString());
		}
	}
	private: System::Void comboBox_Goods_Sort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		SqlConnection^ connect = gcnew SqlConnection("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		connect->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT Tenhang, Mahang, Tenloaihang, Soluongton, Gianhap, Giaxuat FROM Mathang, Loaihang WHERE Mathang.MaLoaihang = Loaihang.Maloaihang", connect);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
		DataSet^ dataset = gcnew DataSet();
		adapter->Fill(dataset, "tmptable");
		connect->Close();
		DataTable^ table = dataset->Tables["tmptable"];
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
};
}
