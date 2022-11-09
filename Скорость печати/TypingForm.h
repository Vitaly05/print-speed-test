#pragma once

#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <time.h>
#include <algorithm>

#include "ResultForm.h"

namespace Скоростьпечати 
{

#pragma region using namespace

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;

#pragma endregion

#pragma region глобальные переменные

	// строка для хранения информации, полученной из файла
	std::string words;
	// индекс слова, для переключения слов после ввода
	int wordIndex;
	// переменная для отслеживания открытия формы
	bool typingFormOpen = false;
	// переменная для отслеживания начала теста
	bool start = false;

#pragma endregion

#pragma region объявления функций

	void TypingFormOpen();
	void TypingFormClose();
	void textAnalysis();
	void TypingFormRestart();
	void getRandomIndex();

#pragma endregion

#pragma region класс (не для редактирования)
	/// <summary>
	/// Сводка для TypingForm
	/// </summary>
	public ref class TypingForm : public System::Windows::Forms::Form
	{
	public:
		TypingForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TypingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ mainTableLayoutPanel;
	protected:
	private: System::Windows::Forms::Label^ wordLabel;
	private: System::Windows::Forms::TextBox^ wordTextBox;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ tipLabel;

	private: System::Windows::Forms::Label^ nextWordLabel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ warningLabel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^ timeTableLayoutPanel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ timeLabel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::CheckBox^ randomCheckBox;


	private: System::ComponentModel::IContainer^ components;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TypingForm::typeid));
			this->mainTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->wordLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nextWordLabel = (gcnew System::Windows::Forms::Label());
			this->warningLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->wordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->timeTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tipLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->randomCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->mainTableLayoutPanel->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->timeTableLayoutPanel->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainTableLayoutPanel
			// 
			this->mainTableLayoutPanel->ColumnCount = 3;
			this->mainTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15)));
			this->mainTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->mainTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15)));
			this->mainTableLayoutPanel->Controls->Add(this->tableLayoutPanel1, 1, 1);
			this->mainTableLayoutPanel->Controls->Add(this->warningLabel, 1, 0);
			this->mainTableLayoutPanel->Controls->Add(this->tableLayoutPanel3, 1, 2);
			this->mainTableLayoutPanel->Controls->Add(this->tableLayoutPanel4, 1, 3);
			this->mainTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainTableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->mainTableLayoutPanel->Name = L"mainTableLayoutPanel";
			this->mainTableLayoutPanel->RowCount = 4;
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->mainTableLayoutPanel->Size = System::Drawing::Size(984, 561);
			this->mainTableLayoutPanel->TabIndex = 6;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->Controls->Add(this->wordLabel, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 2, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(150, 143);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(682, 134);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// wordLabel
			// 
			this->wordLabel->AutoSize = true;
			this->wordLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->wordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wordLabel->Location = System::Drawing::Point(78, 10);
			this->wordLabel->Margin = System::Windows::Forms::Padding(10);
			this->wordLabel->Name = L"wordLabel";
			this->wordLabel->Size = System::Drawing::Size(321, 114);
			this->wordLabel->TabIndex = 0;
			this->wordLabel->Text = L"Нажмите пробел, чтобы начать";
			this->wordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->nextWordLabel, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(412, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(198, 128);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 5);
			this->label2->Margin = System::Windows::Forms::Padding(5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 54);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Следующее слово:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nextWordLabel
			// 
			this->nextWordLabel->AutoSize = true;
			this->nextWordLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->nextWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nextWordLabel->Location = System::Drawing::Point(5, 69);
			this->nextWordLabel->Margin = System::Windows::Forms::Padding(5);
			this->nextWordLabel->Name = L"nextWordLabel";
			this->nextWordLabel->Size = System::Drawing::Size(188, 54);
			this->nextWordLabel->TabIndex = 3;
			this->nextWordLabel->Text = L"-";
			this->nextWordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// warningLabel
			// 
			this->warningLabel->AutoSize = true;
			this->warningLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->warningLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->warningLabel->ForeColor = System::Drawing::Color::Red;
			this->warningLabel->Location = System::Drawing::Point(167, 20);
			this->warningLabel->Margin = System::Windows::Forms::Padding(20);
			this->warningLabel->Name = L"warningLabel";
			this->warningLabel->Size = System::Drawing::Size(648, 100);
			this->warningLabel->TabIndex = 5;
			this->warningLabel->Text = L"Введите слово!";
			this->warningLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->warningLabel->Visible = false;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->wordTextBox, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->timeTableLayoutPanel, 0, 1);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(150, 283);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(682, 134);
			this->tableLayoutPanel3->TabIndex = 6;
			// 
			// wordTextBox
			// 
			this->wordTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->wordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wordTextBox->Location = System::Drawing::Point(10, 10);
			this->wordTextBox->Margin = System::Windows::Forms::Padding(10);
			this->wordTextBox->Name = L"wordTextBox";
			this->wordTextBox->Size = System::Drawing::Size(662, 38);
			this->wordTextBox->TabIndex = 1;
			this->wordTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->wordTextBox->TextChanged += gcnew System::EventHandler(this, &TypingForm::wordTextBox_TextChanged);
			// 
			// timeTableLayoutPanel
			// 
			this->timeTableLayoutPanel->ColumnCount = 2;
			this->timeTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->timeTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->timeTableLayoutPanel->Controls->Add(this->label1, 0, 0);
			this->timeTableLayoutPanel->Controls->Add(this->timeLabel, 1, 0);
			this->timeTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->timeTableLayoutPanel->Location = System::Drawing::Point(3, 70);
			this->timeTableLayoutPanel->Name = L"timeTableLayoutPanel";
			this->timeTableLayoutPanel->RowCount = 1;
			this->timeTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->timeTableLayoutPanel->Size = System::Drawing::Size(676, 61);
			this->timeTableLayoutPanel->TabIndex = 2;
			this->timeTableLayoutPanel->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(5, 5);
			this->label1->Margin = System::Windows::Forms::Padding(5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Прошло секунд:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// timeLabel
			// 
			this->timeLabel->AutoSize = true;
			this->timeLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->timeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeLabel->Location = System::Drawing::Point(343, 5);
			this->timeLabel->Margin = System::Windows::Forms::Padding(5);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(328, 51);
			this->timeLabel->TabIndex = 1;
			this->timeLabel->Text = L"0";
			this->timeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->tipLabel, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 0, 1);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(150, 423);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(682, 135);
			this->tableLayoutPanel4->TabIndex = 7;
			// 
			// tipLabel
			// 
			this->tipLabel->AutoSize = true;
			this->tipLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tipLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tipLabel->Location = System::Drawing::Point(3, 3);
			this->tipLabel->Margin = System::Windows::Forms::Padding(3);
			this->tipLabel->Name = L"tipLabel";
			this->tipLabel->Size = System::Drawing::Size(676, 61);
			this->tipLabel->TabIndex = 2;
			this->tipLabel->Text = L"Нажмите пробел, чтобы перейти к следующему слову";
			this->tipLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->tipLabel->Visible = false;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 3;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel5->Controls->Add(this->randomCheckBox, 1, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 70);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(676, 62);
			this->tableLayoutPanel5->TabIndex = 3;
			// 
			// randomCheckBox
			// 
			this->randomCheckBox->AutoSize = true;
			this->randomCheckBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->randomCheckBox->Location = System::Drawing::Point(252, 3);
			this->randomCheckBox->Margin = System::Windows::Forms::Padding(50, 3, 3, 3);
			this->randomCheckBox->Name = L"randomCheckBox";
			this->randomCheckBox->Size = System::Drawing::Size(217, 56);
			this->randomCheckBox->TabIndex = 3;
			this->randomCheckBox->Text = L"В случайном порядке";
			this->randomCheckBox->UseVisualStyleBackColor = true;
			this->randomCheckBox->CheckedChanged += gcnew System::EventHandler(this, &TypingForm::randomCheckBox_CheckedChanged);
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &TypingForm::timer_Tick);
			// 
			// TypingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->mainTableLayoutPanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(638, 516);
			this->Name = L"TypingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TypingForm";
			this->Activated += gcnew System::EventHandler(this, &TypingForm::TypingForm_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TypingForm::TypingForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TypingForm::TypingForm_Load);
			this->mainTableLayoutPanel->ResumeLayout(false);
			this->mainTableLayoutPanel->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->timeTableLayoutPanel->ResumeLayout(false);
			this->timeTableLayoutPanel->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
#pragma endregion

#pragma region функции класса

	private: System::Void TypingForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		TypingFormOpen();

		// уснановка названия окна именем файла
		this->Text = marshal_as<System::String^>(fileName);

		std::locale::global(std::locale(""));

		// открытие файла
		System::String^ fileName = this->Text;
		std::string strFileName = marshal_as<std::string>(fileName);
		std::string fullFileName = strFileName + textFileExtension;

		std::ifstream file("..\\Тексты\\" + fullFileName);

		if (!file.is_open())
		{
			MessageBox::Show("Невозможно открыть файл.");
		}
		else
		{
			// запись всех символов в строку для дальшейшего анализа
			std::string word;
			while (file >> word)
			{
				words += " " + word;
			}
		}
		file.close();

		// анализ текста
		textAnalysis();
	}

	private: System::Void TypingForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
	{
		close = false;
		restart = false;

		TypingFormClose();

	}

	private: System::Void wordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// проверка на нажатие пробела в textBox

		// запись текста, коротый ввёл пользоваотель в переменную
		System::String^ word = wordTextBox->Text;
		std::string userWord = marshal_as<std::string>(word);

		// при нажатии на пробел
		if (userWord.find(" ") != -1)
		{
			// если пользователь нажал на пробел, после начала теста
			if (userWord == " " && start)
			{
				// показ предупреждения
				warningLabel->Visible = true;
				// сброс поля ввода
				wordTextBox->Text = "";
				return;
			}
			else
			{
				// скрытие предупреждениф
				warningLabel->Visible = false;
			}

			// если тест ещё не начат
			if (!start)
			{
				// запуск и показ таймера, показ подсказки
				timer->Start();
				tipLabel->Visible = true;
				timeTableLayoutPanel->Visible = true;
				
				start = true;
				// выключение кнопки выбора режима
				randomCheckBox->Enabled = false;
			}
			else
			{
				// удаление пробела с конца строки
				userWord.erase(userWord.find(" "), 1);
				// увеличение количества слов, введённых пользователем
				userSymbolsCount += userWord.length();
			}

			// добавление слова, которое ввёл пользователь в массив
			userWordsArray.push_back(userWord);

			// если слова закончились
			if (wordIndex == wordsArray.size())
			{
				// остановка таймера
				timer->Stop();

				// вывод окна результатов
				ResultForm^ resultForm = gcnew ResultForm();
				resultForm->Show();

				// выключение поля ввода
				wordTextBox->Enabled = false;
				return;
			}

			//отчистка поля ввода
			wordTextBox->Text = "";

			// переключение слова на следующее
			// если стоит обычный режим
			if (!randomMode)
			{
				// вывод слова из массива в окно
				wordLabel->Text = marshal_as<System::String^>(wordsArray[wordIndex]);

				// если слово не является последним
				if (wordIndex < wordsArray.size() - 1)
				{
					// вывод следующего слова в окно
					nextWordLabel->Text = marshal_as<System::String^>(wordsArray[wordIndex + 1]);
				}
				else
				{
					nextWordLabel->Text = "";
				}
			}
			else
			{
				// вывод рандомного слова из массива в окно
				wordLabel->Text = marshal_as<System::String^>(wordsArray[randomIndexArray[wordIndex - 1]]);

				// если слово не является последним
				if (wordIndex < wordsArray.size() - 1)
				{
					// вывод следующего слова в окно
					nextWordLabel->Text = marshal_as<System::String^>(wordsArray[randomIndexArray[wordIndex]]);
				}
				else
				{
					nextWordLabel->Text = "";
				}
			}


			++wordIndex;
		}
	}

	private: System::Void TypingForm_Activated(System::Object^ sender, System::EventArgs^ e) 
	{
		// если была выбрана кнопка повторения теста
		if (restart)
		{
			// очищаем все переменные до дефолта
			TypingFormRestart();
			wordTextBox->Enabled = true;
			tipLabel->Visible = false;
			timeTableLayoutPanel->Visible = false;
			wordTextBox->Text = "";
			timeLabel->Text = "0";
			wordLabel->Text = L"Нажмите пробел, чтобы начать";
			restart = false;
			randomCheckBox->Checked = false;
			randomCheckBox->Enabled = true;
		}

		// если была выбрана кнопка "На главную"
		else if (close)
		{
			//закрываем форму
			TypingFormClose();
			close = false;
			this->Close();
		}
	}

	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		// увеличение переменной на 1 каждую секунду
		++time;
		// вывод этой переменной в окно
		timeLabel->Text = time.ToString();
	}

	private: System::Void randomCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// если была поставлена галочка на рандомном режиме
		if (randomCheckBox->Checked == true)
		{
			// включение режима вывода слов в случайном порядке
			randomMode = true;
			// очистка массива с индексами
			randomIndexArray.clear();
			// получение рандомных индексов
			getRandomIndex();
			// установка фокуса на поле ввода
			wordTextBox->Focus();
		}
		else
		{
			// выклюение рандомного режима
			randomMode = false;
			randomIndexArray.clear();
			wordTextBox->Focus();
		}
	}
};

#pragma endregion

#pragma region функции

	void textAnalysis()
	{
		// подсчёт слов
		for (int iii = 0; iii < words.length(); ++iii)
		{
			if (words[iii] == ' ')
			{
				++wordsCount;
			}
			else if (iii == words.length() - 1)
			{
				++wordsCount;
			}
		}
		// отнимаем 1, т.к. нулевой элемент массива пустой
		--wordsCount;
		
		
		// подсчет символов и извлечение слов в массив

		// создаём переменную, которая будет временно (до знака пробела или до конца строки со словами) хранить слово
		std::string word;
		for (int iii = 0; iii < words.length(); ++iii)
		{
			// если найден знак пробела
			if (words[iii] == ' ')
			{
				// добавляем слово в массив слов
				wordsArray.push_back(word);
				word = "";
			}

			// если достигнут конец строки со словами
			else if (iii == words.length() - 1)
			{
				// добовляем слово в масив с учётом последнего символа
				word += words[iii];
				wordsArray.push_back(word);
				word = "";
				++symbolsCount;
			}
			else
			{
				word += words[iii];
				++symbolsCount;
			}
		}
	}

	void TypingFormRestart()
	{
		// сброс основных параметров
		wordIndex = 1;
		userWordsArray.clear();
		randomIndexArray.clear();
		userSymbolsCount = 0;
		time = 0;
		start = false;
	}

	void TypingFormOpen()
	{
		// сброс всех параметров
		typingFormOpen = true;
		words = "";
		wordsArray.clear();
		userWordsArray.clear();
		randomIndexArray.clear();
		wordsCount = 0;
		symbolsCount = 0;
		userSymbolsCount = 0;
		wordIndex = 1;
		time = 0;
		start = false;
	}

	void TypingFormClose()
	{
		typingFormOpen = false;
	}

	void getRandomIndex()
	{
		// заполнение массива числами от 1 до количества слов
		for (int iii = 1; iii <= wordsCount; ++iii)
		{
			randomIndexArray.push_back(iii);
		}
		
		// перетасовка элементов в рандомном порядке
		std::random_shuffle(randomIndexArray.begin(), randomIndexArray.end());
	}

#pragma endregion

}

