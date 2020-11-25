#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace std;

ref class DBHeader
{
public:
	SqlConnection^ cnn;
	DBHeader(String^ cnnstr)
	{
		cnn = gcnew SqlConnection(cnnstr);
	}
	DataTable^ GetRecords(String^ query)
	{
		DataTable^ dt = gcnew DataTable();
		SqlDataAdapter^ da = gcnew SqlDataAdapter(query, cnn);
		cnn->Open();
		da->Fill(dt);
		cnn->Close();
		return dt;
	}
	void ExecuteDB(String^ query)
	{
		SqlCommand^ cmd = gcnew SqlCommand(query, cnn);
		cnn->Open();
		cmd->ExecuteNonQuery();
		cnn->Close();
	}
};