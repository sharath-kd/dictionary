#pragma once
#include "C:\Users\Sharath\Documents\Sharath\Dev C++\lib.h"
#include<msclr\marshal_cppstd.h>
#include<msclr\marshal.h>
#include<msclr\marshal_atl.h>

namespace Project1 {

	using namespace System::Runtime::InteropServices;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dictionary
	/// </summary>
	public ref class Dictionary : public System::Windows::Forms::Form
	{
	public:
		Dictionary(void)
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
		~Dictionary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ word_label;
	protected:
	private: System::Windows::Forms::Label^ meaning_label;
	private: System::Windows::Forms::TextBox^ textBox_word;
	private: System::Windows::Forms::TextBox^ textBox_meaning;
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Button^ button_cancel;
	private: System::Windows::Forms::Label^ message_label;

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
			this->textBox_word = (gcnew System::Windows::Forms::TextBox());
			this->textBox_meaning = (gcnew System::Windows::Forms::TextBox());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->message_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// word_label
			// 
			this->word_label->AutoSize = true;
			this->word_label->Location = System::Drawing::Point(52, 20);
			this->word_label->Name = L"word_label";
			this->word_label->Size = System::Drawing::Size(75, 13);
			this->word_label->TabIndex = 0;
			this->word_label->Text = L"Enter Word:";
			// 
			// meaning_label
			// 
			this->meaning_label->AutoSize = true;
			this->meaning_label->Location = System::Drawing::Point(52, 85);
			this->meaning_label->Name = L"meaning_label";
			this->meaning_label->Size = System::Drawing::Size(114, 13);
			this->meaning_label->TabIndex = 1;
			this->meaning_label->Text = L"Enter the meaning:";
			// 
			// textBox_word
			// 
			this->textBox_word->Location = System::Drawing::Point(56, 51);
			this->textBox_word->Name = L"textBox_word";
			this->textBox_word->Size = System::Drawing::Size(213, 20);
			this->textBox_word->TabIndex = 2;
			// 
			// textBox_meaning
			// 
			this->textBox_meaning->Location = System::Drawing::Point(56, 112);
			this->textBox_meaning->Multiline = true;
			this->textBox_meaning->Name = L"textBox_meaning";
			this->textBox_meaning->Size = System::Drawing::Size(213, 72);
			this->textBox_meaning->TabIndex = 3;
			// 
			// button_add
			// 
			this->button_add->Location = System::Drawing::Point(55, 226);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(132, 23);
			this->button_add->TabIndex = 4;
			this->button_add->Text = L"Add to dictionary";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &Dictionary::Button_add_Click);
			// 
			// button_cancel
			// 
			this->button_cancel->Location = System::Drawing::Point(193, 226);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(75, 23);
			this->button_cancel->TabIndex = 5;
			this->button_cancel->Text = L"Cancel";
			this->button_cancel->UseVisualStyleBackColor = true;
			this->button_cancel->Click += gcnew System::EventHandler(this, &Dictionary::Button_cancel_Click);
			// 
			// message_label
			// 
			this->message_label->AutoSize = true;
			this->message_label->Location = System::Drawing::Point(56, 191);
			this->message_label->Name = L"message_label";
			this->message_label->Size = System::Drawing::Size(0, 13);
			this->message_label->TabIndex = 6;
			// 
			// Dictionary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(331, 277);
			this->Controls->Add(this->message_label);
			this->Controls->Add(this->button_cancel);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->textBox_meaning);
			this->Controls->Add(this->textBox_word);
			this->Controls->Add(this->meaning_label);
			this->Controls->Add(this->word_label);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Dictionary";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dictionary-Add New Word";
			this->Load += gcnew System::EventHandler(this, &Dictionary::Dictionary_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button_add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		demo d;
		System::String^ word = this->textBox_word->Text;
		//std::string w = msclr::interop::marshal_as<std::string>(word);
		IntPtr w = Marshal::StringToHGlobalAnsi(word);
		char* w1 = static_cast<char*>(w.ToPointer());
		//char w2[] =w1.ToCharArray();
		String^ meaning = this->textBox_meaning->Text;
		IntPtr m = Marshal::StringToHGlobalAnsi(meaning);
		char* m1 = static_cast<char*>(m.ToPointer());
		d.input(w1,m1);
		d.pack();
		d.write();
		message_label->Text = "Word added successfully";
		textBox_word->Clear();
		textBox_meaning->Clear();

	}
private: System::Void Button_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
private: System::Void Dictionary_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
