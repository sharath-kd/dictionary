#pragma once
#include "C:\Users\Sharath\Documents\Sharath\Dev C++\lib.h"
#include<msclr\marshal_cppstd.h>
#include<msclr\marshal.h>
#include<msclr\marshal_atl.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::IO;

	/// <summary>
	/// Summary for Search
	/// </summary>
	public ref class Search : public System::Windows::Forms::Form
	{
	public:
		Search(void)
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
		~Search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ word_label;
	protected:

	private: System::Windows::Forms::Label^ meaning_label;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
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
			this->word_label = (gcnew System::Windows::Forms::Label());
			this->meaning_label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// word_label
			// 
			this->word_label->AutoSize = true;
			this->word_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->word_label->Location = System::Drawing::Point(37, 24);
			this->word_label->Name = L"word_label";
			this->word_label->Size = System::Drawing::Size(138, 13);
			this->word_label->TabIndex = 0;
			this->word_label->Text = L"Enter Word To Search:";
			this->word_label->Click += gcnew System::EventHandler(this, &Search::Label1_Click);
			// 
			// meaning_label
			// 
			this->meaning_label->AutoSize = true;
			this->meaning_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->meaning_label->Location = System::Drawing::Point(37, 106);
			this->meaning_label->Name = L"meaning_label";
			this->meaning_label->Size = System::Drawing::Size(59, 13);
			this->meaning_label->TabIndex = 1;
			this->meaning_label->Text = L"Meaning:";
			this->meaning_label->Click += gcnew System::EventHandler(this, &Search::Meaning_label_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(172, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Search::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(172, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Search::Button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(75, 133);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(172, 59);
			this->textBox2->TabIndex = 5;
			// 
			// Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->meaning_label);
			this->Controls->Add(this->word_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Search";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Search";
			this->Load += gcnew System::EventHandler(this, &Search::Search_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Meaning_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Search_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	demo d3;
	System::String^ word = this->textBox1->Text;
	IntPtr w = Marshal::StringToHGlobalAnsi(word);
	char* w1 = static_cast<char*>(w.ToPointer());
	d3.search(w1);
	String^ s = "p2.txt";
	String^ Readfile = File::ReadAllText(s);
	if (Readfile != "")
	{
		this->textBox2->Text = Readfile;
	}
	else
		MessageBox::Show("Word not found ...Try again");
	///this->textBox1->Clear();
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Restart();
}
};
}
