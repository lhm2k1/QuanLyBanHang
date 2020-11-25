#include "Table_Login.h"

Table_Login::Table_Login():Username(""), Password(""), Gmail(""){}
Table_Login::Table_Login(string Username, string Password, string Gmail):Username(Username),Password(Password),Gmail(Gmail){}
Table_Login::Table_Login(const Table_Login& p)
{
	Table_Login *tmp = new Table_Login();
	tmp->Gmail = p.Gmail;
	tmp->Username = p.Username;
	tmp->Password = p.Password;

	this->Gmail = tmp->Gmail;
	this->Password = tmp->Password;
	this->Username = tmp->Username;
}

Table_Login Table_Login::operator = (const Table_Login &p)
{
	Table_Login* tmp = new Table_Login();
	tmp->Gmail = p.Gmail;
	tmp->Username = p.Username;
	tmp->Password = p.Password;

	this->Gmail = tmp->Gmail;
	this->Password = tmp->Password;
	this->Username = tmp->Username;
	
	return (*this);
}

void Table_Login::Set_Username(string Username) { this->Username = Username; }
void Table_Login::Set_Password(string Password) { this->Password = Password; }
void Table_Login::Set_Gmail(string Gmail) { this->Gmail = Gmail; }

string Table_Login::get_Username() { return Username; }
string Table_Login::get_Password() { return Password; }
string Table_Login::get_Gmail() { return Gmail; }