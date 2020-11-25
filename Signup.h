#pragma once
#include "DBHeader.h"
ref class SU
{
public:
	String^ Username;
	String^ Password;
	String^ Gmail;
	SU()
	{
		this->Username = gcnew String("");
		this->Password = gcnew String("");
		this->Gmail = gcnew String("");
	}
};
ref class DAL_Signup
{
public:
	DBHeader^ db;
	DAL_Signup(String^ cnntr)
	{
		db = gcnew DBHeader(cnntr);
	}
	List<SU^>^ GetListSU(String^ query)
	{
		List<SU^>^ data = gcnew List<SU^>();
		for each (DataRow ^ i in db->GetRecords(query)->Rows)
		{
			data->Add(GetSU(i));
		}
		return data;
	}
	SU^ GetSU(DataRow^ d)
	{
		SU^ obj = gcnew SU();
		obj->Username = gcnew String(d["Susername"]->ToString());
		obj->Password = gcnew String(d["Spassword"]->ToString());
		obj->Gmail = gcnew String(d["Gmail"]->ToString());
		return obj;
	}
};
