#pragma once
#include "Loged_in.h"
namespace QuanLyBanHang
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Data;

	/// <summary>
	/// Summary for Log_in
	/// </summary>
	public ref class Log_in : public System::Windows::Forms::Form
	{
	public:

		Log_in(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
/*			SqlConnection^ cnn = gcnew SqlConnection("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
			cnn->Open();
			MessageBox::Show(cnn->State.ToString());*/
		}

	public:
		void Connection(string query)
		{
			SqlConnection^ connect = gcnew SqlConnection("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
			connect->Open();

			SqlCommand^ command = gcnew SqlCommand(("SELECT Susername from Sign_up"), connect);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, "tmptable");
			DataTable^ table = dataset->Tables["tmptable"];
		}
	public:

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;










	public:
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Log_in()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_menu_sign_up;
	protected:

	private: System::Windows::Forms::Label^ lableLOGIN;




	private: Bunifu::Framework::UI::BunifuThinButton2^ ButtonRegister;
	private: System::Windows::Forms::Panel^ panel_menu_login;









	private: System::Windows::Forms::LinkLabel^ linkSignup;
	private: Bunifu::Framework::UI::BunifuThinButton2^ buttonSignin;








	private: System::Windows::Forms::Label^ labelSIGNUP;






	private: Bunifu::Framework::UI::BunifuImageButton^ buttonBack;
	private: System::Windows::Forms::TextBox^ txtPassword_Login;

	private: System::Windows::Forms::TextBox^ txtUsername_Login;


	private: System::Windows::Forms::Label^ label_Password_Login;

	private: System::Windows::Forms::TextBox^ txt_Confirmpass_Signup;
	private: System::Windows::Forms::Label^ label_Confirmpass_Signup;


	private: System::Windows::Forms::TextBox^ txt_Username_Signup;
	private: System::Windows::Forms::Label^ label_Username_Signup;



	private: System::Windows::Forms::Label^ label_Email_Signup;

	private: System::Windows::Forms::TextBox^ txt_Password_Signup;

	private: System::Windows::Forms::TextBox^ txt_Email_Signup;
	private: System::Windows::Forms::Label^ label_Password_Signup;
	private: System::Windows::Forms::Label^ label_Username_Login;














	private: System::ComponentModel::IContainer^ components;


	protected:






	protected:

	protected:










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Log_in::typeid));
			this->panel_menu_sign_up = (gcnew System::Windows::Forms::Panel());
			this->txt_Confirmpass_Signup = (gcnew System::Windows::Forms::TextBox());
			this->label_Confirmpass_Signup = (gcnew System::Windows::Forms::Label());
			this->txt_Username_Signup = (gcnew System::Windows::Forms::TextBox());
			this->label_Username_Signup = (gcnew System::Windows::Forms::Label());
			this->label_Email_Signup = (gcnew System::Windows::Forms::Label());
			this->txt_Password_Signup = (gcnew System::Windows::Forms::TextBox());
			this->txt_Email_Signup = (gcnew System::Windows::Forms::TextBox());
			this->label_Password_Signup = (gcnew System::Windows::Forms::Label());
			this->buttonBack = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->ButtonRegister = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->labelSIGNUP = (gcnew System::Windows::Forms::Label());
			this->panel_menu_login = (gcnew System::Windows::Forms::Panel());
			this->label_Username_Login = (gcnew System::Windows::Forms::Label());
			this->txtPassword_Login = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername_Login = (gcnew System::Windows::Forms::TextBox());
			this->label_Password_Login = (gcnew System::Windows::Forms::Label());
			this->linkSignup = (gcnew System::Windows::Forms::LinkLabel());
			this->buttonSignin = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->lableLOGIN = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->panel_menu_sign_up->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonBack))->BeginInit();
			this->panel_menu_login->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_menu_sign_up
			// 
			this->panel_menu_sign_up->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel_menu_sign_up->BackColor = System::Drawing::Color::Transparent;
			this->panel_menu_sign_up->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_menu_sign_up.BackgroundImage")));
			this->panel_menu_sign_up->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_menu_sign_up->Controls->Add(this->txt_Confirmpass_Signup);
			this->panel_menu_sign_up->Controls->Add(this->label_Confirmpass_Signup);
			this->panel_menu_sign_up->Controls->Add(this->txt_Username_Signup);
			this->panel_menu_sign_up->Controls->Add(this->label_Username_Signup);
			this->panel_menu_sign_up->Controls->Add(this->label_Email_Signup);
			this->panel_menu_sign_up->Controls->Add(this->txt_Password_Signup);
			this->panel_menu_sign_up->Controls->Add(this->txt_Email_Signup);
			this->panel_menu_sign_up->Controls->Add(this->label_Password_Signup);
			this->panel_menu_sign_up->Controls->Add(this->buttonBack);
			this->panel_menu_sign_up->Controls->Add(this->ButtonRegister);
			this->panel_menu_sign_up->Controls->Add(this->labelSIGNUP);
			this->panel_menu_sign_up->Location = System::Drawing::Point(291, 63);
			this->panel_menu_sign_up->Name = L"panel_menu_sign_up";
			this->panel_menu_sign_up->Size = System::Drawing::Size(253, 328);
			this->panel_menu_sign_up->TabIndex = 0;
			this->panel_menu_sign_up->Visible = false;
			// 
			// txt_Confirmpass_Signup
			// 
			this->txt_Confirmpass_Signup->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->txt_Confirmpass_Signup->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_Confirmpass_Signup->Location = System::Drawing::Point(108, 185);
			this->txt_Confirmpass_Signup->Name = L"txt_Confirmpass_Signup";
			this->txt_Confirmpass_Signup->Size = System::Drawing::Size(117, 20);
			this->txt_Confirmpass_Signup->TabIndex = 18;
			// 
			// label_Confirmpass_Signup
			// 
			this->label_Confirmpass_Signup->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_Confirmpass_Signup->AutoSize = true;
			this->label_Confirmpass_Signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Confirmpass_Signup->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label_Confirmpass_Signup->Location = System::Drawing::Point(17, 189);
			this->label_Confirmpass_Signup->Name = L"label_Confirmpass_Signup";
			this->label_Confirmpass_Signup->Size = System::Drawing::Size(83, 16);
			this->label_Confirmpass_Signup->TabIndex = 17;
			this->label_Confirmpass_Signup->Text = L"Confirmpass";
			// 
			// txt_Username_Signup
			// 
			this->txt_Username_Signup->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->txt_Username_Signup->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_Username_Signup->Location = System::Drawing::Point(108, 120);
			this->txt_Username_Signup->Name = L"txt_Username_Signup";
			this->txt_Username_Signup->Size = System::Drawing::Size(117, 20);
			this->txt_Username_Signup->TabIndex = 16;
			// 
			// label_Username_Signup
			// 
			this->label_Username_Signup->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_Username_Signup->AutoSize = true;
			this->label_Username_Signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Username_Signup->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label_Username_Signup->Location = System::Drawing::Point(17, 124);
			this->label_Username_Signup->Name = L"label_Username_Signup";
			this->label_Username_Signup->Size = System::Drawing::Size(71, 16);
			this->label_Username_Signup->TabIndex = 15;
			this->label_Username_Signup->Text = L"Username";
			// 
			// label_Email_Signup
			// 
			this->label_Email_Signup->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_Email_Signup->AutoSize = true;
			this->label_Email_Signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Email_Signup->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_Email_Signup->Location = System::Drawing::Point(17, 87);
			this->label_Email_Signup->Name = L"label_Email_Signup";
			this->label_Email_Signup->Size = System::Drawing::Size(42, 16);
			this->label_Email_Signup->TabIndex = 14;
			this->label_Email_Signup->Text = L"Email";
			// 
			// txt_Password_Signup
			// 
			this->txt_Password_Signup->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->txt_Password_Signup->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_Password_Signup->Location = System::Drawing::Point(108, 152);
			this->txt_Password_Signup->Name = L"txt_Password_Signup";
			this->txt_Password_Signup->Size = System::Drawing::Size(117, 20);
			this->txt_Password_Signup->TabIndex = 13;
			// 
			// txt_Email_Signup
			// 
			this->txt_Email_Signup->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->txt_Email_Signup->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_Email_Signup->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_Email_Signup->Location = System::Drawing::Point(108, 84);
			this->txt_Email_Signup->Name = L"txt_Email_Signup";
			this->txt_Email_Signup->Size = System::Drawing::Size(117, 20);
			this->txt_Email_Signup->TabIndex = 12;
			// 
			// label_Password_Signup
			// 
			this->label_Password_Signup->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_Password_Signup->AutoSize = true;
			this->label_Password_Signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Password_Signup->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label_Password_Signup->Location = System::Drawing::Point(17, 155);
			this->label_Password_Signup->Name = L"label_Password_Signup";
			this->label_Password_Signup->Size = System::Drawing::Size(68, 16);
			this->label_Password_Signup->TabIndex = 11;
			this->label_Password_Signup->Text = L"Password";
			// 
			// buttonBack
			// 
			this->buttonBack->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonBack->BackColor = System::Drawing::Color::Transparent;
			this->buttonBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonBack.BackgroundImage")));
			this->buttonBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonBack.Image")));
			this->buttonBack->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonBack.ImageActive")));
			this->buttonBack->Location = System::Drawing::Point(3, 3);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(41, 32);
			this->buttonBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->buttonBack->TabIndex = 8;
			this->buttonBack->TabStop = false;
			this->buttonBack->Zoom = 11;
			this->buttonBack->Click += gcnew System::EventHandler(this, &Log_in::buttonBack_Click);
			// 
			// ButtonRegister
			// 
			this->ButtonRegister->ActiveBorderThickness = 1;
			this->ButtonRegister->ActiveCornerRadius = 20;
			this->ButtonRegister->ActiveFillColor = System::Drawing::Color::DarkGreen;
			this->ButtonRegister->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->ButtonRegister->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->ButtonRegister->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ButtonRegister->BackColor = System::Drawing::Color::Transparent;
			this->ButtonRegister->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonRegister.BackgroundImage")));
			this->ButtonRegister->ButtonText = L"Register";
			this->ButtonRegister->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonRegister->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonRegister->ForeColor = System::Drawing::Color::SeaGreen;
			this->ButtonRegister->IdleBorderThickness = 1;
			this->ButtonRegister->IdleCornerRadius = 20;
			this->ButtonRegister->IdleFillColor = System::Drawing::Color::DeepSkyBlue;
			this->ButtonRegister->IdleForecolor = System::Drawing::Color::MintCream;
			this->ButtonRegister->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->ButtonRegister->Location = System::Drawing::Point(60, 239);
			this->ButtonRegister->Margin = System::Windows::Forms::Padding(5);
			this->ButtonRegister->Name = L"ButtonRegister";
			this->ButtonRegister->Size = System::Drawing::Size(111, 36);
			this->ButtonRegister->TabIndex = 3;
			this->ButtonRegister->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ButtonRegister->Click += gcnew System::EventHandler(this, &Log_in::ButtonRegister_Click);
			// 
			// labelSIGNUP
			// 
			this->labelSIGNUP->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelSIGNUP->AutoSize = true;
			this->labelSIGNUP->Font = (gcnew System::Drawing::Font(L"Algerian", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSIGNUP->ForeColor = System::Drawing::Color::Magenta;
			this->labelSIGNUP->Location = System::Drawing::Point(62, 28);
			this->labelSIGNUP->Name = L"labelSIGNUP";
			this->labelSIGNUP->Size = System::Drawing::Size(143, 39);
			this->labelSIGNUP->TabIndex = 0;
			this->labelSIGNUP->Text = L"SIGN UP";
			// 
			// panel_menu_login
			// 
			this->panel_menu_login->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel_menu_login->BackColor = System::Drawing::Color::Transparent;
			this->panel_menu_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_menu_login.BackgroundImage")));
			this->panel_menu_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_menu_login->Controls->Add(this->label_Username_Login);
			this->panel_menu_login->Controls->Add(this->txtPassword_Login);
			this->panel_menu_login->Controls->Add(this->txtUsername_Login);
			this->panel_menu_login->Controls->Add(this->label_Password_Login);
			this->panel_menu_login->Controls->Add(this->linkSignup);
			this->panel_menu_login->Controls->Add(this->buttonSignin);
			this->panel_menu_login->Controls->Add(this->lableLOGIN);
			this->panel_menu_login->Location = System::Drawing::Point(291, 63);
			this->panel_menu_login->Name = L"panel_menu_login";
			this->panel_menu_login->Size = System::Drawing::Size(256, 331);
			this->panel_menu_login->TabIndex = 3;
			// 
			// label_Username_Login
			// 
			this->label_Username_Login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label_Username_Login->AutoSize = true;
			this->label_Username_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Username_Login->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_Username_Login->Location = System::Drawing::Point(15, 105);
			this->label_Username_Login->Name = L"label_Username_Login";
			this->label_Username_Login->Size = System::Drawing::Size(71, 16);
			this->label_Username_Login->TabIndex = 10;
			this->label_Username_Login->Text = L"Username";
			// 
			// txtPassword_Login
			// 
			this->txtPassword_Login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtPassword_Login->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txtPassword_Login->Location = System::Drawing::Point(92, 162);
			this->txtPassword_Login->Name = L"txtPassword_Login";
			this->txtPassword_Login->Size = System::Drawing::Size(120, 20);
			this->txtPassword_Login->TabIndex = 9;
			this->txtPassword_Login->UseSystemPasswordChar = true;
			// 
			// txtUsername_Login
			// 
			this->txtUsername_Login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtUsername_Login->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txtUsername_Login->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtUsername_Login->Location = System::Drawing::Point(92, 105);
			this->txtUsername_Login->Name = L"txtUsername_Login";
			this->txtUsername_Login->Size = System::Drawing::Size(120, 20);
			this->txtUsername_Login->TabIndex = 8;
			// 
			// label_Password_Login
			// 
			this->label_Password_Login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label_Password_Login->AutoSize = true;
			this->label_Password_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Password_Login->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label_Password_Login->Location = System::Drawing::Point(15, 163);
			this->label_Password_Login->Name = L"label_Password_Login";
			this->label_Password_Login->Size = System::Drawing::Size(68, 16);
			this->label_Password_Login->TabIndex = 7;
			this->label_Password_Login->Text = L"Password";
			// 
			// linkSignup
			// 
			this->linkSignup->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->linkSignup->AutoSize = true;
			this->linkSignup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkSignup->Location = System::Drawing::Point(88, 262);
			this->linkSignup->Name = L"linkSignup";
			this->linkSignup->Size = System::Drawing::Size(63, 20);
			this->linkSignup->TabIndex = 5;
			this->linkSignup->TabStop = true;
			this->linkSignup->Text = L"Sign up";
			this->linkSignup->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Log_in::linkSignup_LinkClicked);
			// 
			// buttonSignin
			// 
			this->buttonSignin->ActiveBorderThickness = 1;
			this->buttonSignin->ActiveCornerRadius = 20;
			this->buttonSignin->ActiveFillColor = System::Drawing::Color::DarkGreen;
			this->buttonSignin->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->buttonSignin->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->buttonSignin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonSignin->BackColor = System::Drawing::Color::Transparent;
			this->buttonSignin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSignin.BackgroundImage")));
			this->buttonSignin->ButtonText = L"Sign in";
			this->buttonSignin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSignin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSignin->ForeColor = System::Drawing::Color::SeaGreen;
			this->buttonSignin->IdleBorderThickness = 1;
			this->buttonSignin->IdleCornerRadius = 20;
			this->buttonSignin->IdleFillColor = System::Drawing::Color::DeepSkyBlue;
			this->buttonSignin->IdleForecolor = System::Drawing::Color::MintCream;
			this->buttonSignin->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->buttonSignin->Location = System::Drawing::Point(62, 208);
			this->buttonSignin->Margin = System::Windows::Forms::Padding(5);
			this->buttonSignin->Name = L"buttonSignin";
			this->buttonSignin->Size = System::Drawing::Size(114, 39);
			this->buttonSignin->TabIndex = 3;
			this->buttonSignin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->buttonSignin->Click += gcnew System::EventHandler(this, &Log_in::buttonSignin_Click);
			// 
			// lableLOGIN
			// 
			this->lableLOGIN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lableLOGIN->AutoSize = true;
			this->lableLOGIN->Font = (gcnew System::Drawing::Font(L"Algerian", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lableLOGIN->ForeColor = System::Drawing::Color::Magenta;
			this->lableLOGIN->Location = System::Drawing::Point(69, 28);
			this->lableLOGIN->Name = L"lableLOGIN";
			this->lableLOGIN->Size = System::Drawing::Size(123, 39);
			this->lableLOGIN->TabIndex = 0;
			this->lableLOGIN->Text = L"LOG IN";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// Log_in
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(790, 434);
			this->Controls->Add(this->panel_menu_login);
			this->Controls->Add(this->panel_menu_sign_up);
			this->Name = L"Log_in";
			this->panel_menu_sign_up->ResumeLayout(false);
			this->panel_menu_sign_up->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonBack))->EndInit();
			this->panel_menu_login->ResumeLayout(false);
			this->panel_menu_login->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void linkSignup_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)//link sign up
	{
		this->panel_menu_sign_up->Visible = true;
		this->panel_menu_login->Visible = false;
	}
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e)// button back sign up
	{
		this->panel_menu_login->Visible = true;
		this->panel_menu_sign_up->Visible = false;
	}
	private: System::Void buttonSignin_Click(System::Object^ sender, System::EventArgs^ e)// button Sign in
	{

		SqlConnection^ connect = gcnew SqlConnection("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		connect->Open();

		SqlCommand^ command = gcnew SqlCommand(("SELECT Susername,Spassword from Sign_up"), connect);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
		DataSet^ dataset = gcnew DataSet();
		adapter->Fill(dataset, "tmptable");
		connect->Close();

		DataTable^ table = dataset->Tables["tmptable"];

		String^ username_login = "";
		String^ password_login = "";

		username_login = txtUsername_Login->Text;
		password_login = txtPassword_Login->Text;
		if (username_login->Length == 0)
		{
			MessageBox::Show("Please enter your username!");
			return;
		}
		if (password_login->Length == 0)
		{
			MessageBox::Show("Please enter your password !");
			return;
		}
		else
		{
			for (int i = 0; i < table->Rows->Count; i++)
			{
				if (table->Rows[i]->ItemArray[0]->ToString() == username_login && table->Rows[i]->ItemArray[1]->ToString() == password_login)
				{
					this->Hide();
					Loged_in^ f = gcnew Loged_in();
					f->ShowDialog();
					this->Show();
					return;
				}
			}

			MessageBox::Show("Log in failed!\nWrong username or password!");
			return;
		}
			

		

		
	}
	private: System::Void ButtonRegister_Click(System::Object^ sender, System::EventArgs^ e)//button Register
	{

		SqlConnection^ connect = gcnew SqlConnection("Data Source = DESKTOP-F4R2928\\MSSQLSERVER01;Initial Catalog = QuanLyBanHang;Integrated Security = true");
		connect->Open();

		SqlCommand^ command = gcnew SqlCommand(("SELECT Susername from Sign_up"), connect);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
		DataSet^ dataset = gcnew DataSet();
		adapter->Fill(dataset, "tmptable");
		DataTable^ table = dataset->Tables["tmptable"];

		if (txt_Confirmpass_Signup->Text->ToString() == txt_Password_Signup->Text->ToString())
		{
			for (int i = 0; i < table->Rows->Count; i++)
				if (txt_Username_Signup->Text->ToString() == table->Rows[i]->ItemArray[0]->ToString())
				{
					MessageBox::Show("This Username had been Sign up!");
					connect->Close();
					return;
				}

			SqlCommand^ cmd = gcnew SqlCommand(("INSERT INTO Sign_up VALUES ('" + txt_Username_Signup->Text->ToString()+"','"+txt_Password_Signup->Text->ToString()+"','"+txt_Email_Signup->Text->ToString()+"')"), connect);
			cmd->ExecuteReader();
			connect->Close();
			MessageBox::Show("Register Successfully!");
		}
		else
		{
			MessageBox::Show("Confirm password faild!");
			connect->Close();
			return;
		}
	}
};
}
