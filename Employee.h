#pragma once
#include "Nhanvien.h"
namespace QuanLyBanHang {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Employee
	/// </summary>
	public ref class Employee : public System::Windows::Forms::Form
	{
	public:
		Employee(void)
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
		~Employee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView_Employees;
	protected:
	private: System::Windows::Forms::ColumnHeader^ EmployeeCode;
	private: System::Windows::Forms::ColumnHeader^ FullName;

	private: System::Windows::Forms::ColumnHeader^ PhoneNumber;
	private: System::Windows::Forms::GroupBox^ groupBox_ListEmployee;
	private: System::Windows::Forms::Button^ button_Employee_Insert;
	private: System::Windows::Forms::Button^ button_Employee_Edit;
	private: System::Windows::Forms::Button^ button_Employee_Exit;
	private: System::Windows::Forms::Button^ button_Employee_Delete;
	private: System::Windows::Forms::Button^ button_Employee_Load;
	private: System::Windows::Forms::GroupBox^ groupBox_Detail_Employee;
	private: System::Windows::Forms::Button^ button_Employee_Cancel;

	private: System::Windows::Forms::Button^ button_Employee_OK;
	private: System::Windows::Forms::Label^ label_Employee_PhoneNumber;

	private: System::Windows::Forms::Label^ label_Employee_FullName;

	private: System::Windows::Forms::Label^ label_Employee_EmployeeCode;
	private: System::Windows::Forms::TextBox^ textBox_Employee_PhoneNumber;

	private: System::Windows::Forms::TextBox^ textBox_Employee_FullName;

	private: System::Windows::Forms::TextBox^ textBox_Employee_EmployeeCode;
	private: System::Windows::Forms::Panel^ panel_Employee_DetailEmployee;






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
			this->listView_Employees = (gcnew System::Windows::Forms::ListView());
			this->EmployeeCode = (gcnew System::Windows::Forms::ColumnHeader());
			this->FullName = (gcnew System::Windows::Forms::ColumnHeader());
			this->PhoneNumber = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox_ListEmployee = (gcnew System::Windows::Forms::GroupBox());
			this->panel_Employee_DetailEmployee = (gcnew System::Windows::Forms::Panel());
			this->groupBox_Detail_Employee = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_Employee_PhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Employee_FullName = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Employee_EmployeeCode = (gcnew System::Windows::Forms::TextBox());
			this->button_Employee_Cancel = (gcnew System::Windows::Forms::Button());
			this->button_Employee_OK = (gcnew System::Windows::Forms::Button());
			this->label_Employee_PhoneNumber = (gcnew System::Windows::Forms::Label());
			this->label_Employee_FullName = (gcnew System::Windows::Forms::Label());
			this->label_Employee_EmployeeCode = (gcnew System::Windows::Forms::Label());
			this->button_Employee_Insert = (gcnew System::Windows::Forms::Button());
			this->button_Employee_Edit = (gcnew System::Windows::Forms::Button());
			this->button_Employee_Exit = (gcnew System::Windows::Forms::Button());
			this->button_Employee_Delete = (gcnew System::Windows::Forms::Button());
			this->button_Employee_Load = (gcnew System::Windows::Forms::Button());
			this->groupBox_ListEmployee->SuspendLayout();
			this->panel_Employee_DetailEmployee->SuspendLayout();
			this->groupBox_Detail_Employee->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView_Employees
			// 
			this->listView_Employees->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView_Employees->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->EmployeeCode,
					this->FullName, this->PhoneNumber
			});
			this->listView_Employees->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView_Employees->FullRowSelect = true;
			this->listView_Employees->GridLines = true;
			this->listView_Employees->HideSelection = false;
			this->listView_Employees->Location = System::Drawing::Point(3, 16);
			this->listView_Employees->Name = L"listView_Employees";
			this->listView_Employees->Size = System::Drawing::Size(672, 351);
			this->listView_Employees->TabIndex = 0;
			this->listView_Employees->UseCompatibleStateImageBehavior = false;
			this->listView_Employees->View = System::Windows::Forms::View::Details;
			// 
			// EmployeeCode
			// 
			this->EmployeeCode->Text = L"EmployeeCode";
			this->EmployeeCode->Width = 89;
			// 
			// FullName
			// 
			this->FullName->Text = L"Full Name";
			this->FullName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->FullName->Width = 487;
			// 
			// PhoneNumber
			// 
			this->PhoneNumber->Text = L"Phone Number";
			this->PhoneNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PhoneNumber->Width = 95;
			// 
			// groupBox_ListEmployee
			// 
			this->groupBox_ListEmployee->Controls->Add(this->panel_Employee_DetailEmployee);
			this->groupBox_ListEmployee->Controls->Add(this->listView_Employees);
			this->groupBox_ListEmployee->Location = System::Drawing::Point(12, 12);
			this->groupBox_ListEmployee->Name = L"groupBox_ListEmployee";
			this->groupBox_ListEmployee->Size = System::Drawing::Size(678, 370);
			this->groupBox_ListEmployee->TabIndex = 1;
			this->groupBox_ListEmployee->TabStop = false;
			this->groupBox_ListEmployee->Text = L"List Employees";
			// 
			// panel_Employee_DetailEmployee
			// 
			this->panel_Employee_DetailEmployee->Controls->Add(this->groupBox_Detail_Employee);
			this->panel_Employee_DetailEmployee->Location = System::Drawing::Point(183, 61);
			this->panel_Employee_DetailEmployee->Name = L"panel_Employee_DetailEmployee";
			this->panel_Employee_DetailEmployee->Size = System::Drawing::Size(328, 251);
			this->panel_Employee_DetailEmployee->TabIndex = 8;
			this->panel_Employee_DetailEmployee->Visible = false;
			// 
			// groupBox_Detail_Employee
			// 
			this->groupBox_Detail_Employee->Controls->Add(this->textBox_Employee_PhoneNumber);
			this->groupBox_Detail_Employee->Controls->Add(this->textBox_Employee_FullName);
			this->groupBox_Detail_Employee->Controls->Add(this->textBox_Employee_EmployeeCode);
			this->groupBox_Detail_Employee->Controls->Add(this->button_Employee_Cancel);
			this->groupBox_Detail_Employee->Controls->Add(this->button_Employee_OK);
			this->groupBox_Detail_Employee->Controls->Add(this->label_Employee_PhoneNumber);
			this->groupBox_Detail_Employee->Controls->Add(this->label_Employee_FullName);
			this->groupBox_Detail_Employee->Controls->Add(this->label_Employee_EmployeeCode);
			this->groupBox_Detail_Employee->Location = System::Drawing::Point(0, 7);
			this->groupBox_Detail_Employee->Name = L"groupBox_Detail_Employee";
			this->groupBox_Detail_Employee->Size = System::Drawing::Size(325, 231);
			this->groupBox_Detail_Employee->TabIndex = 7;
			this->groupBox_Detail_Employee->TabStop = false;
			this->groupBox_Detail_Employee->Text = L"Detail Employee";
			// 
			// textBox_Employee_PhoneNumber
			// 
			this->textBox_Employee_PhoneNumber->Location = System::Drawing::Point(124, 147);
			this->textBox_Employee_PhoneNumber->Name = L"textBox_Employee_PhoneNumber";
			this->textBox_Employee_PhoneNumber->Size = System::Drawing::Size(160, 20);
			this->textBox_Employee_PhoneNumber->TabIndex = 7;
			// 
			// textBox_Employee_FullName
			// 
			this->textBox_Employee_FullName->Location = System::Drawing::Point(124, 98);
			this->textBox_Employee_FullName->Name = L"textBox_Employee_FullName";
			this->textBox_Employee_FullName->Size = System::Drawing::Size(160, 20);
			this->textBox_Employee_FullName->TabIndex = 6;
			// 
			// textBox_Employee_EmployeeCode
			// 
			this->textBox_Employee_EmployeeCode->Location = System::Drawing::Point(124, 44);
			this->textBox_Employee_EmployeeCode->Name = L"textBox_Employee_EmployeeCode";
			this->textBox_Employee_EmployeeCode->Size = System::Drawing::Size(160, 20);
			this->textBox_Employee_EmployeeCode->TabIndex = 5;
			// 
			// button_Employee_Cancel
			// 
			this->button_Employee_Cancel->Location = System::Drawing::Point(181, 195);
			this->button_Employee_Cancel->Name = L"button_Employee_Cancel";
			this->button_Employee_Cancel->Size = System::Drawing::Size(75, 23);
			this->button_Employee_Cancel->TabIndex = 4;
			this->button_Employee_Cancel->Text = L"Cancel";
			this->button_Employee_Cancel->UseVisualStyleBackColor = true;
			this->button_Employee_Cancel->Click += gcnew System::EventHandler(this, &Employee::button_Employee_Cancel_Click);
			// 
			// button_Employee_OK
			// 
			this->button_Employee_OK->Location = System::Drawing::Point(74, 195);
			this->button_Employee_OK->Name = L"button_Employee_OK";
			this->button_Employee_OK->Size = System::Drawing::Size(75, 23);
			this->button_Employee_OK->TabIndex = 3;
			this->button_Employee_OK->Text = L"OK";
			this->button_Employee_OK->UseVisualStyleBackColor = true;
			this->button_Employee_OK->Click += gcnew System::EventHandler(this, &Employee::button_Employee_OK_Click);
			// 
			// label_Employee_PhoneNumber
			// 
			this->label_Employee_PhoneNumber->AutoSize = true;
			this->label_Employee_PhoneNumber->Location = System::Drawing::Point(37, 150);
			this->label_Employee_PhoneNumber->Name = L"label_Employee_PhoneNumber";
			this->label_Employee_PhoneNumber->Size = System::Drawing::Size(78, 13);
			this->label_Employee_PhoneNumber->TabIndex = 2;
			this->label_Employee_PhoneNumber->Text = L"Phone Number";
			// 
			// label_Employee_FullName
			// 
			this->label_Employee_FullName->AutoSize = true;
			this->label_Employee_FullName->Location = System::Drawing::Point(37, 98);
			this->label_Employee_FullName->Name = L"label_Employee_FullName";
			this->label_Employee_FullName->Size = System::Drawing::Size(54, 13);
			this->label_Employee_FullName->TabIndex = 1;
			this->label_Employee_FullName->Text = L"Full Name";
			// 
			// label_Employee_EmployeeCode
			// 
			this->label_Employee_EmployeeCode->AutoSize = true;
			this->label_Employee_EmployeeCode->Location = System::Drawing::Point(37, 47);
			this->label_Employee_EmployeeCode->Name = L"label_Employee_EmployeeCode";
			this->label_Employee_EmployeeCode->Size = System::Drawing::Size(81, 13);
			this->label_Employee_EmployeeCode->TabIndex = 0;
			this->label_Employee_EmployeeCode->Text = L"Employee Code";
			// 
			// button_Employee_Insert
			// 
			this->button_Employee_Insert->Location = System::Drawing::Point(715, 114);
			this->button_Employee_Insert->Name = L"button_Employee_Insert";
			this->button_Employee_Insert->Size = System::Drawing::Size(75, 23);
			this->button_Employee_Insert->TabIndex = 2;
			this->button_Employee_Insert->Text = L"Insert";
			this->button_Employee_Insert->UseVisualStyleBackColor = true;
			this->button_Employee_Insert->Click += gcnew System::EventHandler(this, &Employee::button_Employee_Insert_Click);
			// 
			// button_Employee_Edit
			// 
			this->button_Employee_Edit->Location = System::Drawing::Point(715, 155);
			this->button_Employee_Edit->Name = L"button_Employee_Edit";
			this->button_Employee_Edit->Size = System::Drawing::Size(75, 23);
			this->button_Employee_Edit->TabIndex = 3;
			this->button_Employee_Edit->Text = L"Edit";
			this->button_Employee_Edit->UseVisualStyleBackColor = true;
			this->button_Employee_Edit->Click += gcnew System::EventHandler(this, &Employee::button_Employee_Edit_Click);
			// 
			// button_Employee_Exit
			// 
			this->button_Employee_Exit->Location = System::Drawing::Point(715, 238);
			this->button_Employee_Exit->Name = L"button_Employee_Exit";
			this->button_Employee_Exit->Size = System::Drawing::Size(75, 23);
			this->button_Employee_Exit->TabIndex = 4;
			this->button_Employee_Exit->Text = L"Exit";
			this->button_Employee_Exit->UseVisualStyleBackColor = true;
			this->button_Employee_Exit->Click += gcnew System::EventHandler(this, &Employee::button_Employee_Exit_Click);
			// 
			// button_Employee_Delete
			// 
			this->button_Employee_Delete->Location = System::Drawing::Point(715, 199);
			this->button_Employee_Delete->Name = L"button_Employee_Delete";
			this->button_Employee_Delete->Size = System::Drawing::Size(75, 23);
			this->button_Employee_Delete->TabIndex = 5;
			this->button_Employee_Delete->Text = L"Delete";
			this->button_Employee_Delete->UseVisualStyleBackColor = true;
			this->button_Employee_Delete->Click += gcnew System::EventHandler(this, &Employee::button_Employee_Delete_Click);
			// 
			// button_Employee_Load
			// 
			this->button_Employee_Load->Location = System::Drawing::Point(715, 73);
			this->button_Employee_Load->Name = L"button_Employee_Load";
			this->button_Employee_Load->Size = System::Drawing::Size(75, 23);
			this->button_Employee_Load->TabIndex = 6;
			this->button_Employee_Load->Text = L"Load";
			this->button_Employee_Load->UseVisualStyleBackColor = true;
			this->button_Employee_Load->Click += gcnew System::EventHandler(this, &Employee::button_Employee_Load_Click);
			// 
			// Employee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(816, 394);
			this->Controls->Add(this->button_Employee_Load);
			this->Controls->Add(this->button_Employee_Delete);
			this->Controls->Add(this->button_Employee_Exit);
			this->Controls->Add(this->button_Employee_Edit);
			this->Controls->Add(this->button_Employee_Insert);
			this->Controls->Add(this->groupBox_ListEmployee);
			this->Name = L"Employee";
			this->Text = L"Employee";
			this->Load += gcnew System::EventHandler(this, &Employee::Employee_Load);
			this->groupBox_ListEmployee->ResumeLayout(false);
			this->panel_Employee_DetailEmployee->ResumeLayout(false);
			this->groupBox_Detail_Employee->ResumeLayout(false);
			this->groupBox_Detail_Employee->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Employee_Load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		listView_Employees->Items->Clear();
		DAL_Nhanvien^ dal = gcnew DAL_Nhanvien("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		String^ query = gcnew String("select * from dbo.Nhanvien");
		List<NV^>^ tmpNV = gcnew List<NV^>(dal->GetListNV(query));
		for (int i = 0; i < dal->GetListNV(query)->Count; i++)
		{
			listView_Employees->Items->Add(tmpNV[i]->Manhanvien);
			listView_Employees->Items[i]->SubItems->Add(tmpNV[i]->Hoten);
			listView_Employees->Items[i]->SubItems->Add(tmpNV[i]->Sodienthoai);
		}
	}
	private: System::Void button_Employee_Insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		/*DAL_Nhanvien^ dal = gcnew DAL_Nhanvien("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		String^ query = gcnew String("select * from dbo.Nhanvien");
		List<NV^>^ tmpLNV = gcnew List<NV^>(dal->GetListNV(query));*/
		this->panel_Employee_DetailEmployee->Visible = true;
		button_Employee_Insert_Clicked = true;
	}
		   bool button_Employee_Insert_Clicked = true;
	private: System::Void button_Employee_OK_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DAL_Nhanvien^ dal = gcnew DAL_Nhanvien("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		String^ query = gcnew String("select * from dbo.Nhanvien");
		List<NV^>^ tmpLNV = gcnew List<NV^>(dal->GetListNV(query));
		this->panel_Employee_DetailEmployee->Visible = true;
		if (this->button_Employee_Insert_Clicked == true)
		{
			if (textBox_Employee_EmployeeCode->Text->ToString()->Length == 0)
			{
				MessageBox::Show("Enter Employee Code!");
				return;
			}
			else if (textBox_Employee_FullName->Text->ToString()->Length == 0)
			{
				MessageBox::Show("Enter FullName!");
				return;
			}
			else if (textBox_Employee_PhoneNumber->Text->ToString()->Length == 0)
			{
				MessageBox::Show("enter Phone Number!");
				return;
			}
			else
			{
				NV^ tmpNV = gcnew NV();
				tmpNV->Manhanvien = this->textBox_Employee_EmployeeCode->Text->ToString();
				tmpNV->Hoten = this->textBox_Employee_FullName->Text->ToString();
				tmpNV->Sodienthoai = this->textBox_Employee_PhoneNumber->Text->ToString();

				String^ query = gcnew String("INSERT INTO Nhanvien VALUES ('" + tmpNV->Manhanvien + "','" + tmpNV->Hoten + "','" + tmpNV->Sodienthoai + "')");
				dal->db->ExecuteDB(query);
				tmpLNV->Add(tmpNV);

				ListViewItem^ row = gcnew ListViewItem();
				row->SubItems[0]->Text = tmpNV->Manhanvien;
				row->SubItems->Add(tmpNV->Hoten);
				row->SubItems->Add(tmpNV->Sodienthoai);
				listView_Employees->Items->Add(row);
			}
		}
		else
		{
			for (int i = 0; i < tmpLNV->Count; i++)
			{
				if (listView_Employees->Items[i]->Selected)
				{
					ListViewItem^ row = gcnew ListViewItem();
					//edit in ListView_Employee
					row->SubItems[0]->Text = this->textBox_Employee_EmployeeCode->Text;
					row->SubItems->Add(this->textBox_Employee_FullName->Text);
					row->SubItems->Add(this->textBox_Employee_PhoneNumber->Text);
					listView_Employees->Items[i] = row;
					//edit in database
					String^ query = gcnew String("update Nhanvien set Hoten ='" + this->textBox_Employee_FullName->Text + "', Manhanvien = '" + this->textBox_Employee_EmployeeCode->Text + "', SDT = '" + this->textBox_Employee_PhoneNumber->Text + "' where Manhanvien = '" + tmpLNV[i]->Manhanvien + "'");
					dal->db->ExecuteDB(query);
					//edit in tmpLNV
					tmpLNV[i]->Manhanvien = row->SubItems[0]->Text;
					tmpLNV[i]->Hoten = row->SubItems[1]->Text;
					tmpLNV[i]->Sodienthoai = row->SubItems[2]->Text;
				}
			}
		}
		Employee_Load(sender, e);
		this->panel_Employee_DetailEmployee->Visible = false;
	}
	private: System::Void button_Employee_Cancel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->panel_Employee_DetailEmployee->Visible = false;
		this->textBox_Employee_EmployeeCode->Clear();
		this->textBox_Employee_FullName->Clear();
		this->textBox_Employee_PhoneNumber->Clear();
	}
	private: System::Void button_Employee_Edit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DAL_Nhanvien^ dal = gcnew DAL_Nhanvien("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		String^ query = gcnew String("select * from dbo.Nhanvien");
		List<NV^>^ tmpLNV = gcnew List<NV^>(dal->GetListNV(query));
		this->panel_Employee_DetailEmployee->Visible = true;
		this->button_Employee_Insert_Clicked = false;
		for (int i = 0; i < tmpLNV->Count; i++)
		{
			if (listView_Employees->Items[i]->Selected)
			{
				this->textBox_Employee_EmployeeCode->Text = tmpLNV[i]->Manhanvien->ToString();
				this->textBox_Employee_FullName->Text = tmpLNV[i]->Hoten->ToString();
				this->textBox_Employee_PhoneNumber->Text = tmpLNV[i]->Sodienthoai->ToString();
			}
		}
	}
	private: System::Void Employee_Load(System::Object^ sender, System::EventArgs^ e)
	{
		listView_Employees->Items->Clear();
		DAL_Nhanvien^ dal = gcnew DAL_Nhanvien("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		String^ query = gcnew String("select * from dbo.Nhanvien");
		List<NV^>^ tmpLNV = gcnew List<NV^>(dal->GetListNV(query));
		for (int i = 0; i < dal->GetListNV(query)->Count; i++)
		{
			listView_Employees->Items->Add(tmpLNV[i]->Manhanvien);
			listView_Employees->Items[i]->SubItems->Add(tmpLNV[i]->Hoten);
			listView_Employees->Items[i]->SubItems->Add(tmpLNV[i]->Sodienthoai);
		}
	}
	private: System::Void button_Employee_Exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void button_Employee_Delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DAL_Nhanvien^ dal = gcnew DAL_Nhanvien("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		String^ query = gcnew String("select * from dbo.Nhanvien");
		List<NV^>^ tmpLNV = gcnew List<NV^>(dal->GetListNV(query));
		static int a = 0;
		int j = 0;
		for (int i = 0; i < (int)tmpLNV->Count - a; i++)
		{
			if (listView_Employees->Items[i]->Selected)
			{
				j = i;
				listView_Employees->Items[i]->Remove();
				dal->db->ExecuteDB("delete from dbo.Nhanvien where Nhanvien.Manhanvien = '" + tmpLNV[j]->Manhanvien + "' ");
				while (j < (int)tmpLNV->Count-1)
				{
					tmpLNV[j] = tmpLNV[j + 1];
					j++;
				}
				delete tmpLNV[j];
				a++;
			}
		}
	}
};
}