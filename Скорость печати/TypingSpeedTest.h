#pragma once
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "Constants.h"
#include <iostream>
#include <locale>


using namespace msclr::interop;

namespace Скоростьпечати {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	void TypingSpeedTestFormOpen();
	void TypingSpeedTestFormClose();

#pragma region 1
	/// <summary>
	/// Сводка для TypingSpeedTest
	/// </summary>
	public ref class TypingSpeedTest : public System::Windows::Forms::Form
	{
	public:
		TypingSpeedTest(System::String^ fileName)
		{
			InitializeComponent(fileName);
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TypingSpeedTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(System::String^ fileName)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 281);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &TypingSpeedTest::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(147, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// TypingSpeedTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 381);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"TypingSpeedTest";
			this->Text = fileName;
			this->Load += gcnew System::EventHandler(this, &TypingSpeedTest::TypingSpeedTest_Load);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TypingSpeedTest::TypingSpeedTest_FormClosed);
			this->ResumeLayout(false);
		}
#pragma endregion
#pragma endregion 1
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::wstring wstr = marshal_as<std::wstring>(textBox1->Text);
		System::String^ sstr = marshal_as<System::String^>(wstr);
		label1->Text = sstr;
	}
	private: System::Void TypingSpeedTest_Load(System::Object^ sender, System::EventArgs^ e)
	{
		std::locale::global(std::locale(""));
		System::String^ fileName = this->Text;
		std::wstring strFileName = marshal_as<std::wstring>(fileName);
		std::wstring fullFileName = strFileName + textFileExtension;
		
		std::wifstream file(L"..\\Тексты\\" + fullFileName);
		
		if (!file.is_open())
		{
			MessageBox::Show("no");
		}
		else
		{
			
			std::wstring word;
			std::wstring words;
			while (file >> word)
			{
				//words += L" " + word;
				MessageBox::Show(marshal_as<System::String^>(word));
			}
			//MessageBox::Show(marshal_as<System::String^>(words));
			label1->Text = marshal_as<System::String^>(words);
		}
		file.close();
	}
	private: System::Void TypingSpeedTest_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
	{
		TypingSpeedTestFormClose();
	}
	};

	bool typingSpeedTestFormOpen = false;

	void TypingSpeedTestFormOpen()
	{
		typingSpeedTestFormOpen = true;
	}

	void TypingSpeedTestFormClose()
	{
		typingSpeedTestFormOpen = false;
	}
}
