#pragma once
#include <iostream>
#include <string>
#include <utility>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
using namespace System::Data;


class Loaihang
{
private:
	string Tenloaihang;
protected:
	string Maloaihang;
public:
	Loaihang() :Tenloaihang(""), Maloaihang("") {}
	Loaihang(string Tenloaihang, string Maloaihang) : Tenloaihang(Tenloaihang), Maloaihang(Maloaihang) {}
	void set_Tenloaihang(string Tenloaihang) { this->Tenloaihang = Tenloaihang; }
	void set_Maloaihang(string Maloaihang) { this->Maloaihang = Maloaihang; }
	string get_Tenloaihang() { return this->Tenloaihang; }
	virtual string get_Maloaihang() { return this->Maloaihang; }
};

class Mathang :protected Loaihang
{
private:
	string Tenhang;
	int Soluongton;
	double Gianhap;
	double Giaxuat;
protected:
	string Mahang;
public:
	Mathang() :Loaihang()
	{
		this->Tenhang = "";
		this->Soluongton = 0;
		this->Gianhap = 0;
		this->Giaxuat = 0;
		this->Mahang = "";
		this->Maloaihang = "";
	}
	Mathang(string Tenhang, string Maloaihang, string Mahang, int Soluongton, double Gianhap, double Giaxuat)
	{
		this->Tenhang = Tenhang;
		this->Soluongton = Soluongton;
		this->Gianhap = Gianhap;
		this->Giaxuat = Giaxuat;
		this->Maloaihang = Maloaihang;
		this->Mahang = Mahang;
	}
	Mathang(const Mathang& H)
	{
		Mathang* newH = new Mathang;

		newH->Tenhang = H.Tenhang;
		newH->Mahang = H.Mahang;
		newH->Maloaihang = H.Maloaihang;
		newH->Soluongton = H.Soluongton;
		newH->Gianhap = H.Gianhap;
		newH->Giaxuat = H.Giaxuat;

		this->Tenhang = newH->Tenhang;
		this->Mahang = newH->Mahang;
		this->Maloaihang = newH->Maloaihang;
		this->Soluongton = newH->Soluongton;
		this->Gianhap = newH->Gianhap;
		this->Giaxuat = newH->Giaxuat;
	}
	Mathang operator = (const Mathang& H)
	{
		Mathang* newH = new Mathang;
		newH->Tenhang = H.Tenhang;
		newH->Mahang = H.Mahang;
		newH->Maloaihang = H.Maloaihang;
		newH->Soluongton = H.Soluongton;
		newH->Gianhap = H.Gianhap;
		newH->Giaxuat = H.Giaxuat;
		if (this != &H)
		{
			this->Tenhang = newH->Tenhang;
			this->Mahang = newH->Mahang;
			this->Maloaihang = newH->Maloaihang;
			this->Soluongton = newH->Soluongton;
			this->Gianhap = newH->Gianhap;
			this->Giaxuat = newH->Giaxuat;
		}
		return (*this);
	}
	virtual ~Mathang() {}

	void set_Tenhang(string Tenhang) { this->Tenhang = Tenhang; }
	void set_Soluongton(int Soluongton) { this->Soluongton = Soluongton; }
	void set_Gianhap(double Gianhap) { this->Gianhap = Gianhap; }
	void set_Giaxuat(double Giaxuat) { this->Giaxuat = Giaxuat; }
	void set_Maloaihang(string Maloaihang) { this->Maloaihang = Maloaihang; }
	void set_Mahang(string Mahang) { this->Mahang = Mahang; }

	string get_Tenhang() { return Tenhang; }
	int get_Soluongton() { return Soluongton; }
	double get_Gianhap() { return this->Gianhap; }
	double get_Giaxuat() { return this->Giaxuat; }
	string get_Maloaihang() { return this->Maloaihang; }
	string get_Mahang() { return this->Mahang; }
};
