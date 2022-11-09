#pragma once

#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <string>
#include <ctime>

#include "Data.h"

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

	// переменные для отслеживания нажатия на кнопки (для передачи в форму теста)
	bool restart = false;
	bool close = false;

	// счетчик времени
	double time = 0;

#pragma endregion

#pragma region объявления функций

double getSpeed_SPM();
double getSpeed_WPM();

double getAccuracy_Symbols();
double getAccuracy_Words();

int getCountOfCorrectSymbols();
int getCountOfCorrectWords();

#pragma endregion

#pragma region класс (не для редактирования)
	/// <summary>
	/// Сводка для ResultForm
	/// </summary>
	public ref class ResultForm : public System::Windows::Forms::Form
	{
	public:
		ResultForm(void)
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
		~ResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ mainTableLayoutPanel;
	protected:
	private: System::Windows::Forms::Label^ textInformLabel;
	private: System::Windows::Forms::Label^ testInformLabel;
	private: System::Windows::Forms::TableLayoutPanel^ textInformTableLayoutPanel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ textNameLabel;
	private: System::Windows::Forms::Label^ wordsCountLabel;
	private: System::Windows::Forms::Label^ symbolsCountLabel;
	private: System::Windows::Forms::TableLayoutPanel^ testInformTableLayoutPanel;
	private: System::Windows::Forms::TableLayoutPanel^ speedTableLayoutPanel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TableLayoutPanel^ accuracyTableLayoutPanel;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ speedLabel;
	private: System::Windows::Forms::Label^ accuracyLabel;
	private: System::Windows::Forms::TableLayoutPanel^ speedTableLayoutPanel_RadioButtons;
	private: System::Windows::Forms::RadioButton^ radioButton_SPM;
	private: System::Windows::Forms::RadioButton^ radioButton_WPM;





	private: System::Windows::Forms::TableLayoutPanel^ accuracyTableLayoutPanel_RadioButtons;
	private: System::Windows::Forms::RadioButton^ radioButton_Symbols;
	private: System::Windows::Forms::RadioButton^ radioButton_Words;
	private: System::Windows::Forms::Button^ restartTestButton;
	private: System::Windows::Forms::Button^ homeButton;












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
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultForm::typeid));
			this->mainTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textInformLabel = (gcnew System::Windows::Forms::Label());
			this->testInformLabel = (gcnew System::Windows::Forms::Label());
			this->textInformTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->wordsCountLabel = (gcnew System::Windows::Forms::Label());
			this->symbolsCountLabel = (gcnew System::Windows::Forms::Label());
			this->textNameLabel = (gcnew System::Windows::Forms::Label());
			this->testInformTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->speedTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->speedTableLayoutPanel_RadioButtons = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->radioButton_SPM = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_WPM = (gcnew System::Windows::Forms::RadioButton());
			this->accuracyTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->accuracyTableLayoutPanel_RadioButtons = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->radioButton_Symbols = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Words = (gcnew System::Windows::Forms::RadioButton());
			this->speedLabel = (gcnew System::Windows::Forms::Label());
			this->accuracyLabel = (gcnew System::Windows::Forms::Label());
			this->restartTestButton = (gcnew System::Windows::Forms::Button());
			this->homeButton = (gcnew System::Windows::Forms::Button());
			this->mainTableLayoutPanel->SuspendLayout();
			this->textInformTableLayoutPanel->SuspendLayout();
			this->testInformTableLayoutPanel->SuspendLayout();
			this->speedTableLayoutPanel->SuspendLayout();
			this->speedTableLayoutPanel_RadioButtons->SuspendLayout();
			this->accuracyTableLayoutPanel->SuspendLayout();
			this->accuracyTableLayoutPanel_RadioButtons->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainTableLayoutPanel
			// 
			this->mainTableLayoutPanel->ColumnCount = 4;
			this->mainTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5)));
			this->mainTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				45)));
			this->mainTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				45)));
			this->mainTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5)));
			this->mainTableLayoutPanel->Controls->Add(this->textInformLabel, 1, 1);
			this->mainTableLayoutPanel->Controls->Add(this->testInformLabel, 2, 1);
			this->mainTableLayoutPanel->Controls->Add(this->textInformTableLayoutPanel, 1, 2);
			this->mainTableLayoutPanel->Controls->Add(this->testInformTableLayoutPanel, 2, 2);
			this->mainTableLayoutPanel->Controls->Add(this->restartTestButton, 1, 3);
			this->mainTableLayoutPanel->Controls->Add(this->homeButton, 2, 3);
			this->mainTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainTableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->mainTableLayoutPanel->Name = L"mainTableLayoutPanel";
			this->mainTableLayoutPanel->RowCount = 5;
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				5)));
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				60)));
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				5)));
			this->mainTableLayoutPanel->Size = System::Drawing::Size(984, 361);
			this->mainTableLayoutPanel->TabIndex = 0;
			// 
			// textInformLabel
			// 
			this->textInformLabel->AutoSize = true;
			this->textInformLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textInformLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textInformLabel->Location = System::Drawing::Point(59, 28);
			this->textInformLabel->Margin = System::Windows::Forms::Padding(10);
			this->textInformLabel->Name = L"textInformLabel";
			this->textInformLabel->Size = System::Drawing::Size(422, 52);
			this->textInformLabel->TabIndex = 0;
			this->textInformLabel->Text = L"Информация по тексту";
			this->textInformLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// testInformLabel
			// 
			this->testInformLabel->AutoSize = true;
			this->testInformLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->testInformLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->testInformLabel->Location = System::Drawing::Point(501, 28);
			this->testInformLabel->Margin = System::Windows::Forms::Padding(10);
			this->testInformLabel->Name = L"testInformLabel";
			this->testInformLabel->Size = System::Drawing::Size(422, 52);
			this->testInformLabel->TabIndex = 1;
			this->testInformLabel->Text = L"Информация по тесту";
			this->testInformLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textInformTableLayoutPanel
			// 
			this->textInformTableLayoutPanel->ColumnCount = 2;
			this->textInformTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				65)));
			this->textInformTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				35)));
			this->textInformTableLayoutPanel->Controls->Add(this->label1, 0, 0);
			this->textInformTableLayoutPanel->Controls->Add(this->label2, 0, 1);
			this->textInformTableLayoutPanel->Controls->Add(this->label3, 0, 2);
			this->textInformTableLayoutPanel->Controls->Add(this->wordsCountLabel, 1, 1);
			this->textInformTableLayoutPanel->Controls->Add(this->symbolsCountLabel, 1, 2);
			this->textInformTableLayoutPanel->Controls->Add(this->textNameLabel, 1, 0);
			this->textInformTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textInformTableLayoutPanel->Location = System::Drawing::Point(52, 93);
			this->textInformTableLayoutPanel->Name = L"textInformTableLayoutPanel";
			this->textInformTableLayoutPanel->RowCount = 3;
			this->textInformTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				33)));
			this->textInformTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				33)));
			this->textInformTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				34)));
			this->textInformTableLayoutPanel->Size = System::Drawing::Size(436, 210);
			this->textInformTableLayoutPanel->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 10);
			this->label1->Margin = System::Windows::Forms::Padding(10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Название текста";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(10, 79);
			this->label2->Margin = System::Windows::Forms::Padding(10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(263, 49);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Количество слов";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(10, 148);
			this->label3->Margin = System::Windows::Forms::Padding(10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 52);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Количество символов";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// wordsCountLabel
			// 
			this->wordsCountLabel->AutoSize = true;
			this->wordsCountLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->wordsCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wordsCountLabel->Location = System::Drawing::Point(293, 79);
			this->wordsCountLabel->Margin = System::Windows::Forms::Padding(10);
			this->wordsCountLabel->Name = L"wordsCountLabel";
			this->wordsCountLabel->Size = System::Drawing::Size(133, 49);
			this->wordsCountLabel->TabIndex = 4;
			this->wordsCountLabel->Text = L"-";
			this->wordsCountLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// symbolsCountLabel
			// 
			this->symbolsCountLabel->AutoSize = true;
			this->symbolsCountLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->symbolsCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->symbolsCountLabel->Location = System::Drawing::Point(293, 148);
			this->symbolsCountLabel->Margin = System::Windows::Forms::Padding(10);
			this->symbolsCountLabel->Name = L"symbolsCountLabel";
			this->symbolsCountLabel->Size = System::Drawing::Size(133, 52);
			this->symbolsCountLabel->TabIndex = 5;
			this->symbolsCountLabel->Text = L"-";
			this->symbolsCountLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textNameLabel
			// 
			this->textNameLabel->AutoSize = true;
			this->textNameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textNameLabel->Location = System::Drawing::Point(293, 10);
			this->textNameLabel->Margin = System::Windows::Forms::Padding(10);
			this->textNameLabel->Name = L"textNameLabel";
			this->textNameLabel->Size = System::Drawing::Size(133, 49);
			this->textNameLabel->TabIndex = 3;
			this->textNameLabel->Text = L"-";
			this->textNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// testInformTableLayoutPanel
			// 
			this->testInformTableLayoutPanel->ColumnCount = 2;
			this->testInformTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				75)));
			this->testInformTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->testInformTableLayoutPanel->Controls->Add(this->speedTableLayoutPanel, 0, 0);
			this->testInformTableLayoutPanel->Controls->Add(this->accuracyTableLayoutPanel, 0, 1);
			this->testInformTableLayoutPanel->Controls->Add(this->speedLabel, 1, 0);
			this->testInformTableLayoutPanel->Controls->Add(this->accuracyLabel, 1, 1);
			this->testInformTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->testInformTableLayoutPanel->Location = System::Drawing::Point(494, 93);
			this->testInformTableLayoutPanel->Name = L"testInformTableLayoutPanel";
			this->testInformTableLayoutPanel->RowCount = 2;
			this->testInformTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->testInformTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->testInformTableLayoutPanel->Size = System::Drawing::Size(436, 210);
			this->testInformTableLayoutPanel->TabIndex = 3;
			// 
			// speedTableLayoutPanel
			// 
			this->speedTableLayoutPanel->ColumnCount = 2;
			this->speedTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->speedTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->speedTableLayoutPanel->Controls->Add(this->label4, 0, 0);
			this->speedTableLayoutPanel->Controls->Add(this->speedTableLayoutPanel_RadioButtons, 1, 0);
			this->speedTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->speedTableLayoutPanel->Location = System::Drawing::Point(3, 3);
			this->speedTableLayoutPanel->Name = L"speedTableLayoutPanel";
			this->speedTableLayoutPanel->RowCount = 1;
			this->speedTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->speedTableLayoutPanel->Size = System::Drawing::Size(321, 99);
			this->speedTableLayoutPanel->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(10, 10);
			this->label4->Margin = System::Windows::Forms::Padding(10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 79);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Скорость";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// speedTableLayoutPanel_RadioButtons
			// 
			this->speedTableLayoutPanel_RadioButtons->ColumnCount = 1;
			this->speedTableLayoutPanel_RadioButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->speedTableLayoutPanel_RadioButtons->Controls->Add(this->radioButton_SPM, 0, 0);
			this->speedTableLayoutPanel_RadioButtons->Controls->Add(this->radioButton_WPM, 0, 1);
			this->speedTableLayoutPanel_RadioButtons->Dock = System::Windows::Forms::DockStyle::Fill;
			this->speedTableLayoutPanel_RadioButtons->Location = System::Drawing::Point(165, 20);
			this->speedTableLayoutPanel_RadioButtons->Margin = System::Windows::Forms::Padding(5, 20, 5, 20);
			this->speedTableLayoutPanel_RadioButtons->Name = L"speedTableLayoutPanel_RadioButtons";
			this->speedTableLayoutPanel_RadioButtons->RowCount = 2;
			this->speedTableLayoutPanel_RadioButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->speedTableLayoutPanel_RadioButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->speedTableLayoutPanel_RadioButtons->Size = System::Drawing::Size(151, 59);
			this->speedTableLayoutPanel_RadioButtons->TabIndex = 1;
			// 
			// radioButton_SPM
			// 
			this->radioButton_SPM->AutoSize = true;
			this->radioButton_SPM->Checked = true;
			this->radioButton_SPM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radioButton_SPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_SPM->Location = System::Drawing::Point(3, 3);
			this->radioButton_SPM->Name = L"radioButton_SPM";
			this->radioButton_SPM->Size = System::Drawing::Size(145, 23);
			this->radioButton_SPM->TabIndex = 0;
			this->radioButton_SPM->TabStop = true;
			this->radioButton_SPM->Tag = L"";
			this->radioButton_SPM->Text = L"Знаков в минуту";
			this->radioButton_SPM->UseVisualStyleBackColor = true;
			this->radioButton_SPM->CheckedChanged += gcnew System::EventHandler(this, &ResultForm::speedRadioButton_CheckedChanged);
			// 
			// radioButton_WPM
			// 
			this->radioButton_WPM->AutoSize = true;
			this->radioButton_WPM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radioButton_WPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_WPM->Location = System::Drawing::Point(3, 32);
			this->radioButton_WPM->Name = L"radioButton_WPM";
			this->radioButton_WPM->Size = System::Drawing::Size(145, 24);
			this->radioButton_WPM->TabIndex = 1;
			this->radioButton_WPM->Text = L"Слов в минуту";
			this->radioButton_WPM->UseVisualStyleBackColor = true;
			this->radioButton_WPM->CheckedChanged += gcnew System::EventHandler(this, &ResultForm::speedRadioButton_CheckedChanged);
			// 
			// accuracyTableLayoutPanel
			// 
			this->accuracyTableLayoutPanel->ColumnCount = 2;
			this->accuracyTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->accuracyTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->accuracyTableLayoutPanel->Controls->Add(this->label5, 0, 0);
			this->accuracyTableLayoutPanel->Controls->Add(this->accuracyTableLayoutPanel_RadioButtons, 1, 0);
			this->accuracyTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->accuracyTableLayoutPanel->Location = System::Drawing::Point(3, 108);
			this->accuracyTableLayoutPanel->Name = L"accuracyTableLayoutPanel";
			this->accuracyTableLayoutPanel->RowCount = 1;
			this->accuracyTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->accuracyTableLayoutPanel->Size = System::Drawing::Size(321, 99);
			this->accuracyTableLayoutPanel->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(10, 10);
			this->label5->Margin = System::Windows::Forms::Padding(10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 79);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Точность, %";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// accuracyTableLayoutPanel_RadioButtons
			// 
			this->accuracyTableLayoutPanel_RadioButtons->ColumnCount = 1;
			this->accuracyTableLayoutPanel_RadioButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->accuracyTableLayoutPanel_RadioButtons->Controls->Add(this->radioButton_Symbols, 0, 0);
			this->accuracyTableLayoutPanel_RadioButtons->Controls->Add(this->radioButton_Words, 0, 1);
			this->accuracyTableLayoutPanel_RadioButtons->Dock = System::Windows::Forms::DockStyle::Fill;
			this->accuracyTableLayoutPanel_RadioButtons->Location = System::Drawing::Point(165, 20);
			this->accuracyTableLayoutPanel_RadioButtons->Margin = System::Windows::Forms::Padding(5, 20, 5, 20);
			this->accuracyTableLayoutPanel_RadioButtons->Name = L"accuracyTableLayoutPanel_RadioButtons";
			this->accuracyTableLayoutPanel_RadioButtons->RowCount = 2;
			this->accuracyTableLayoutPanel_RadioButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->accuracyTableLayoutPanel_RadioButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->accuracyTableLayoutPanel_RadioButtons->Size = System::Drawing::Size(151, 59);
			this->accuracyTableLayoutPanel_RadioButtons->TabIndex = 1;
			// 
			// radioButton_Symbols
			// 
			this->radioButton_Symbols->AutoSize = true;
			this->radioButton_Symbols->Checked = true;
			this->radioButton_Symbols->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radioButton_Symbols->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButton_Symbols->Location = System::Drawing::Point(3, 3);
			this->radioButton_Symbols->Name = L"radioButton_Symbols";
			this->radioButton_Symbols->Size = System::Drawing::Size(145, 23);
			this->radioButton_Symbols->TabIndex = 0;
			this->radioButton_Symbols->TabStop = true;
			this->radioButton_Symbols->Text = L"Знаков";
			this->radioButton_Symbols->UseVisualStyleBackColor = true;
			this->radioButton_Symbols->CheckedChanged += gcnew System::EventHandler(this, &ResultForm::accuracyRadioButton_CheckedChanged);
			// 
			// radioButton_Words
			// 
			this->radioButton_Words->AutoSize = true;
			this->radioButton_Words->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radioButton_Words->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_Words->Location = System::Drawing::Point(3, 32);
			this->radioButton_Words->Name = L"radioButton_Words";
			this->radioButton_Words->Size = System::Drawing::Size(145, 24);
			this->radioButton_Words->TabIndex = 1;
			this->radioButton_Words->Text = L"Слов";
			this->radioButton_Words->UseVisualStyleBackColor = true;
			this->radioButton_Words->CheckedChanged += gcnew System::EventHandler(this, &ResultForm::accuracyRadioButton_CheckedChanged);
			// 
			// speedLabel
			// 
			this->speedLabel->AutoSize = true;
			this->speedLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->speedLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->speedLabel->Location = System::Drawing::Point(337, 10);
			this->speedLabel->Margin = System::Windows::Forms::Padding(10);
			this->speedLabel->Name = L"speedLabel";
			this->speedLabel->Size = System::Drawing::Size(89, 85);
			this->speedLabel->TabIndex = 2;
			this->speedLabel->Text = L"-";
			this->speedLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// accuracyLabel
			// 
			this->accuracyLabel->AutoSize = true;
			this->accuracyLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->accuracyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->accuracyLabel->Location = System::Drawing::Point(337, 115);
			this->accuracyLabel->Margin = System::Windows::Forms::Padding(10);
			this->accuracyLabel->Name = L"accuracyLabel";
			this->accuracyLabel->Size = System::Drawing::Size(89, 85);
			this->accuracyLabel->TabIndex = 3;
			this->accuracyLabel->Text = L"-";
			this->accuracyLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// restartTestButton
			// 
			this->restartTestButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->restartTestButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->restartTestButton->Location = System::Drawing::Point(99, 309);
			this->restartTestButton->Margin = System::Windows::Forms::Padding(50, 3, 50, 3);
			this->restartTestButton->Name = L"restartTestButton";
			this->restartTestButton->Size = System::Drawing::Size(342, 30);
			this->restartTestButton->TabIndex = 4;
			this->restartTestButton->Text = L"Повторить тест";
			this->restartTestButton->UseVisualStyleBackColor = true;
			this->restartTestButton->Click += gcnew System::EventHandler(this, &ResultForm::restartTestButton_Click);
			// 
			// homeButton
			// 
			this->homeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->homeButton->Location = System::Drawing::Point(541, 309);
			this->homeButton->Margin = System::Windows::Forms::Padding(50, 3, 50, 3);
			this->homeButton->Name = L"homeButton";
			this->homeButton->Size = System::Drawing::Size(342, 30);
			this->homeButton->TabIndex = 5;
			this->homeButton->Text = L"На главную";
			this->homeButton->UseVisualStyleBackColor = true;
			this->homeButton->Click += gcnew System::EventHandler(this, &ResultForm::homeButton_Click);
			// 
			// ResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 361);
			this->Controls->Add(this->mainTableLayoutPanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1000, 400);
			this->Name = L"ResultForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Результат";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ResultForm::ResultForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &ResultForm::ResultForm_Load);
			this->mainTableLayoutPanel->ResumeLayout(false);
			this->mainTableLayoutPanel->PerformLayout();
			this->textInformTableLayoutPanel->ResumeLayout(false);
			this->textInformTableLayoutPanel->PerformLayout();
			this->testInformTableLayoutPanel->ResumeLayout(false);
			this->testInformTableLayoutPanel->PerformLayout();
			this->speedTableLayoutPanel->ResumeLayout(false);
			this->speedTableLayoutPanel->PerformLayout();
			this->speedTableLayoutPanel_RadioButtons->ResumeLayout(false);
			this->speedTableLayoutPanel_RadioButtons->PerformLayout();
			this->accuracyTableLayoutPanel->ResumeLayout(false);
			this->accuracyTableLayoutPanel->PerformLayout();
			this->accuracyTableLayoutPanel_RadioButtons->ResumeLayout(false);
			this->accuracyTableLayoutPanel_RadioButtons->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma endregion

#pragma region функции класса

private: System::Void speedRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	RadioButton^ radioButton = (RadioButton^)sender;
	if (radioButton->Checked)
	{
		// если выбрана скорость в знаках
		if (radioButton->Name == "radioButton_SPM")
		{
			speedLabel->Text = getSpeed_SPM().ToString();
		}
		// если выбранна скорость в словах
		else if (radioButton->Name == "radioButton_WPM")
		{
			speedLabel->Text = getSpeed_WPM().ToString();
		}
	}
}

private: System::Void accuracyRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	RadioButton^ radioButton = (RadioButton^)sender;
	if (radioButton->Checked)
	{
		// если выбрана точность в знаках
		if (radioButton->Name == "radioButton_Symbols")
		{
			accuracyLabel->Text = getAccuracy_Symbols().ToString() + "%";
		}
		// если выбранна точность в словах
		else if (radioButton->Name == "radioButton_Words")
		{
			accuracyLabel->Text = getAccuracy_Words().ToString() + "%";
		}
	}
}

private: System::Void ResultForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
	// установка информации о тексте

	textNameLabel->Text = marshal_as<System::String^>(fileName);
	wordsCountLabel->Text = wordsCount.ToString();
	symbolsCountLabel->Text = symbolsCount.ToString();

	// установка результатов теста

	speedLabel->Text = getSpeed_SPM().ToString();
	accuracyLabel->Text = getAccuracy_Symbols().ToString() + "%";


	// записть результата в файл

	// определение времени прохождения теста
	time_t now = std::time(0);
	tm* ltm = localtime(&now);

	// запись даты
	std::string data = std::to_string(1900 + ltm->tm_year) + ".";

	if (ltm->tm_mon < 10)
	{
		data += "0" + std::to_string(ltm->tm_mon);
	}
	else
	{
		data += std::to_string(ltm->tm_mon);
	}

	data += "." + std::to_string(ltm->tm_mday);

	// записть время
	std::string time = std::to_string(ltm->tm_hour) + ":";
	
	if (ltm->tm_min < 10)
	{
		time += "0" + std::to_string(ltm->tm_min);
	}
	else
	{
		time += std::to_string(ltm->tm_min);
	}

	// unsigned для предотвращения преобразование inf в непонятное число
	std::string s_SPM = std::to_string((unsigned int)getSpeed_SPM());
	std::string s_WPM = std::to_string((unsigned int)getSpeed_WPM());
	std::string speed = "Скорость: " + s_SPM + " символов / " + s_WPM + " слов в минуту";

	std::string a_symbols = std::to_string((unsigned int)getAccuracy_Symbols());
	std::string a_words = std::to_string((unsigned int)getAccuracy_Words());
	std::string accuracy = "Точность: " + a_symbols + "% символов, " + a_words + "% слов";

	std::string results = data + " " + time + " - " + speed + "; " + accuracy + "\n";

	// создание файла с результатами
	std::ofstream resultFile("..\\Тексты\\Результаты\\" + fileName + "_res" + textFileExtension, std::ofstream::app);

	if (resultFile.is_open())
	{
		resultFile << results;
	}

	resultFile.close();
}

private: System::Void restartTestButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	restart = true;
	this->Hide();
}

private: System::Void homeButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	close = true;
	this->Close();
}

private: System::Void ResultForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	// если был нажат крестик, а не кнопка "На главную"
	close = true;
}
};

#pragma endregion

#pragma region функции

double getSpeed_SPM()
{
	return round(userSymbolsCount / (time / 60));
}

double getSpeed_WPM()
{
	return round(wordsCount / (time / 60));
}

double getAccuracy_Symbols()
{
	// получение количества верно введённых символов
	int correctSymbolsCount = getCountOfCorrectSymbols();

	// если количество символов, введённых пользователем, меньше, чем колчиество
	// символов в тексте
	if (userSymbolsCount <= symbolsCount)
	{
		// считаем точность относительно количества символов в тексте
		return round(correctSymbolsCount / (double)symbolsCount * 100);
	}
	else
	{
		// считаем точность относительно количества символов, введённых пользователем
		return round(correctSymbolsCount / (double)userSymbolsCount * 100);
	}
}

double getAccuracy_Words()
{
	return round(getCountOfCorrectWords() / ((double)wordsArray.size() - 1) * 100);
}

int getCountOfCorrectSymbols()
{
	int correctSymbolsCount = 0;

	// подсчёт символов, в обчином режиме теста
	if (!randomMode)
	{
		for (int iii = 1; iii < wordsArray.size(); ++iii)
		{
			for (int jjj = 0; jjj < wordsArray[iii].size(); ++jjj)
			{
				if (jjj < userWordsArray[iii].size())
				{
					if (wordsArray[iii][jjj] == userWordsArray[iii][jjj])
					{
						++correctSymbolsCount;
					}
				}
			}
		}
	}
	// подсчёт символов, в рандомном режиме
	else
	{
		for (int iii = 0; iii < wordsArray.size() - 1; ++iii)
		{
			for (int jjj = 0; jjj < wordsArray[randomIndexArray[iii]].size(); ++jjj)
			{
				if (jjj < userWordsArray[iii + 1].size())
				{
					if (wordsArray[randomIndexArray[iii]][jjj] == userWordsArray[iii + 1][jjj])
					{
						++correctSymbolsCount;
					}
				}
			}
		}
	}

	return correctSymbolsCount;
}

int getCountOfCorrectWords()
{
	int correctWordsCount = 0;

	// подсчёт слов, в обчином режиме теста
	if (!randomMode)
	{
		for (int iii = 1; iii < wordsArray.size(); ++iii)
		{
			if (wordsArray[iii] == userWordsArray[iii])
			{
				++correctWordsCount;
			}
		}
	}
	// подсчёт символов, в рандомном режиме
	else
	{
		for (int iii = 0; iii < wordsArray.size() - 1; ++iii)
		{
			if (wordsArray[randomIndexArray[iii]] == userWordsArray[iii + 1])
			{
				++correctWordsCount;
			}
		}
	}
	
	return correctWordsCount;
}

#pragma endregion
}
