#pragma once
//#include "stdAfx.h"
#include "Signup.h"
#include "Dictionary.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ user_label;
	private: System::Windows::Forms::TextBox^ textBox_user;
	private: System::Windows::Forms::TextBox^ textBox_password;
	protected:



	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::Button^ button_login;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_signup;





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
			this->user_label = (gcnew System::Windows::Forms::Label());
			this->textBox_user = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_signup = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// user_label
			// 
			this->user_label->AutoSize = true;
			this->user_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_label->Location = System::Drawing::Point(35, 40);
			this->user_label->Name = L"user_label";
			this->user_label->Size = System::Drawing::Size(45, 13);
			this->user_label->TabIndex = 0;
			this->user_label->Text = L"USER:";
			this->user_label->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// textBox_user
			// 
			this->textBox_user->Location = System::Drawing::Point(134, 33);
			this->textBox_user->Name = L"textBox_user";
			this->textBox_user->Size = System::Drawing::Size(157, 20);
			this->textBox_user->TabIndex = 1;
			this->textBox_user->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(134, 81);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(157, 20);
			this->textBox_password->TabIndex = 2;
			this->textBox_password->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox2_TextChanged);
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->Location = System::Drawing::Point(35, 88);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(82, 13);
			this->password_label->TabIndex = 3;
			this->password_label->Text = L"PASSWORD:";
			this->password_label->Click += gcnew System::EventHandler(this, &MyForm::Label2_Click);
			// 
			// button_login
			// 
			this->button_login->Location = System::Drawing::Point(160, 126);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(131, 27);
			this->button_login->TabIndex = 4;
			this->button_login->Text = L"Login";
			this->button_login->UseVisualStyleBackColor = true;
			this->button_login->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button_exit
			// 
			this->button_exit->Location = System::Drawing::Point(192, 159);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(98, 27);
			this->button_exit->TabIndex = 5;
			this->button_exit->Text = L"Exit";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// button_signup
			// 
			this->button_signup->Location = System::Drawing::Point(38, 126);
			this->button_signup->Name = L"button_signup";
			this->button_signup->Size = System::Drawing::Size(114, 27);
			this->button_signup->TabIndex = 6;
			this->button_signup->Text = L"Sign Up";
			this->button_signup->UseVisualStyleBackColor = true;
			this->button_signup->Click += gcnew System::EventHandler(this, &MyForm::Button_signup_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(331, 261);
			this->Controls->Add(this->button_signup);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_login);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_user);
			this->Controls->Add(this->user_label);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Restart();
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ constring = L"datasource=localhost;port=3306;username=root;password=excelsior";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from login_db.userinfo where username='"+this->textBox_user->Text+"' and password='"+this->textBox_password->Text+"';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int count = 0;
		while (myReader->Read())
		{
			count += 1;
		}
		if (count == 1)
		{
			MessageBox::Show("Username and password is correct");
			this->Hide();
			Dictionary^ d = gcnew Dictionary();
			d->ShowDialog();
		}
		else if (count > 1)
		{
			MessageBox::Show("Duplicate username and password ...Access Denied");
		}
		else
			MessageBox::Show("Username and password is incorrect ...Please try again");
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button_signup_Click(System::Object^ sender, System::EventArgs^ e)
{
	Signup^ s = gcnew Signup();
	s->ShowDialog();
}
};
}
