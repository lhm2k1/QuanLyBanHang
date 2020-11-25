#pragma once
#include <iostream>
#include <string>
using namespace std;
class Table_Login
{
private:
	string Username;
	string Password;
	string Gmail;
public:
	Table_Login();
	Table_Login(string, string, string);
	Table_Login(const Table_Login&);

	Table_Login operator = (const Table_Login&);

	void Set_Username(string);
	void Set_Password(string);
	void Set_Gmail(string);

	string get_Username();
	string get_Password();
	string get_Gmail();
};