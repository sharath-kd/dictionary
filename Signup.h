#pragma once
//#include "MyForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void)
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
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_signup;
	protected:
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::TextBox^ textBox_user;
	private: System::Windows::Forms::Label^ user_label;
	private: System::Windows::Forms::Label^ confirm_label;
	private: System::Windows::Forms::TextBox^ textBox_confirm;
	private: System::Windows::Forms::TextBox^ textBox_name;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ message;





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
			this->button_signup = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_user = (gcnew System::Windows::Forms::TextBox());
			this->user_label = (gcnew System::Windows::Forms::Label());
			this->confirm_label = (gcnew System::Windows::Forms::Label());
			this->textBox_confirm = (gcnew System::Windows::Forms::TextBox());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->message = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_signup
			// 
			this->button_signup->Location = System::Drawing::Point(167, 190);
			this->button_signup->Name = L"button_signup";
			this->button_signup->Size = System::Drawing::Size(114, 27);
			this->button_signup->TabIndex = 12;
			this->button_signup->Text = L"Sign Up";
			this->button_signup->UseVisualStyleBackColor = true;
			this->button_signup->Click += gcnew System::EventHandler(this, &Signup::Button_signup_Click);
			// 
			// button_exit
			// 
			this->button_exit->Location = System::Drawing::Point(183, 223);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(98, 27);
			this->button_exit->TabIndex = 11;
			this->button_exit->Text = L"Exit";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &Signup::Button_exit_Click);
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->Location = System::Drawing::Point(26, 83);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(65, 13);
			this->password_label->TabIndex = 10;
			this->password_label->Text = L"Password:";
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(124, 80);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(157, 20);
			this->textBox_password->TabIndex = 9;
			// 
			// textBox_user
			// 
			this->textBox_user->Location = System::Drawing::Point(124, 54);
			this->textBox_user->Name = L"textBox_user";
			this->textBox_user->Size = System::Drawing::Size(157, 20);
			this->textBox_user->TabIndex = 8;
			// 
			// user_label
			// 
			this->user_label->AutoSize = true;
			this->user_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_label->Location = System::Drawing::Point(26, 57);
			this->user_label->Name = L"user_label";
			this->user_label->Size = System::Drawing::Size(37, 13);
			this->user_label->TabIndex = 7;
			this->user_label->Text = L"User:";
			this->user_label->Click += gcnew System::EventHandler(this, &Signup::User_label_Click);
			// 
			// confirm_label
			// 
			this->confirm_label->AutoSize = true;
			this->confirm_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm_label->Location = System::Drawing::Point(26, 122);
			this->confirm_label->Name = L"confirm_label";
			this->confirm_label->Size = System::Drawing::Size(111, 13);
			this->confirm_label->TabIndex = 14;
			this->confirm_label->Text = L"Confirm Password:";
			this->confirm_label->Click += gcnew System::EventHandler(this, &Signup::Label1_Click);
			// 
			// textBox_confirm
			// 
			this->textBox_confirm->Location = System::Drawing::Point(124, 138);
			this->textBox_confirm->Name = L"textBox_confirm";
			this->textBox_confirm->PasswordChar = '*';
			this->textBox_confirm->Size = System::Drawing::Size(157, 20);
			this->textBox_confirm->TabIndex = 13;
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(124, 28);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(157, 20);
			this->textBox_name->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Name:";
			// 
			// message
			// 
			this->message->AutoSize = true;
			this->message->Location = System::Drawing::Point(34, 171);
			this->message->Name = L"message";
			this->message->Size = System::Drawing::Size(0, 13);
			this->message->TabIndex = 17;
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(320, 297);
			this->Controls->Add(this->message);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->confirm_label);
			this->Controls->Add(this->textBox_confirm);
			this->Controls->Add(this->button_signup);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_user);
			this->Controls->Add(this->user_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Signup";
			this->Text = L"Signup";
			this->Load += gcnew System::EventHandler(this, &Signup::Signup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Signup_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void User_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button_signup_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ constring = L"datasource=localhost;port=3306;username=root;password=excelsior";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("select * from login_db.userinfo where username='" + this->textBox_user->Text + "' and password='" + this->textBox_password->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	conDataBase->Open();
	myReader = cmdDataBase1->ExecuteReader();
	int count = 0;
	while (myReader->Read())
	{
		count += 1;
	}
	myReader->Close();
	if (count > 0)
	{
		MessageBox::Show("Username and password exists ...Please try again");
	}
	else if (this->textBox_password->Text == this->textBox_confirm->Text)
	{
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("insert into login_db.userinfo(username,password,name) values ('" + this->textBox_user->Text + "','" + this->textBox_password->Text + "','" + this->textBox_name->Text + "');", conDataBase);
		myReader = cmdDataBase2->ExecuteReader();
		while (myReader->Read())
		{ }
		message->Text = "Sign up successful";
	}
	else
	{
		MessageBox::Show("Error Encountered ...Please try again");
	}
}
private: System::Void Button_exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
}
};
}
