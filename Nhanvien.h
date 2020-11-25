#pragma once
#include "DBHeader.h"
ref class NV
{
public:
	String^ Manhanvien;
	String^ Hoten;
	String^ Sodienthoai;
	NV()
	{
		this->Manhanvien = gcnew String("");
		this->Hoten = gcnew String("");
		this->Sodienthoai = gcnew String("");
	}
};
ref class DAL_Nhanvien
{
public:
	DBHeader^ db;
	DAL_Nhanvien(String^ cnntr)
	{
		db = gcnew DBHeader(cnntr);
	}
	List<NV^>^ GetListNV(String^ query)
	{
		List<NV^>^ data = gcnew List<NV^>();
		for each (DataRow ^ i in db->GetRecords(query)->Rows)
		{
			data->Add(GetNV(i));
		}
		return data;
	}
	NV^ GetNV(DataRow^ d)
	{
		NV^ obj = gcnew NV();
		obj->Manhanvien = gcnew String(d["Manhanvien"]->ToString());
		obj->Hoten = gcnew String(d["Hoten"]->ToString());
		obj->Sodienthoai = gcnew String(d["SDT"]->ToString());
		return obj;
	}
};
