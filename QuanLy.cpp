#include "Log_in.h"
#include "Loged_in.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(true);
    //WinformCDemo is your project name
    //QuanLyBanHang::Log_in form_Login;
    QuanLyBanHang::Loged_in form_Logedin;
    //QuanLyBanHang::Goods form_Goods;
    //QuanLyBanHang::Bill form_Bill;
    //QuanLyBanHang::Employee form_Employee;

    //Application::Run(% form_Login);
    //Application::Run(% form_Employee);
    //Application::Run(% form_Goods);
    //Application::Run(% form_Bill);
    Application::Run(% form_Logedin);
}