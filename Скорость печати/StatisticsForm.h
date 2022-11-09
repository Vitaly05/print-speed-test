#pragma once

#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <string>
#include <iostream>

namespace Скоростьпечати {

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

	// переменная для отслеживания открытия формы
	bool statisticsFormOpen = false;

#pragma endregion

#pragma region объявления функций

	void StatisticsFormOpen();
	void StatisticsFormClose();

#pragma endregion

#pragma region класс (не для редактирования)

	/// <summary>
	/// Сводка для StatisticsForm
	/// </summary>
	public ref class StatisticsForm : public System::Windows::Forms::Form
	{
	public:
		StatisticsForm(void)
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
		~StatisticsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ homeButton;
	private: System::Windows::Forms::Panel^ resultsPanel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ textNameLabel;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StatisticsForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->homeButton = (gcnew System::Windows::Forms::Button());
			this->resultsPanel = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textNameLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->resultsPanel, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(784, 361);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->Controls->Add(this->homeButton, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(120, 291);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(542, 48);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// homeButton
			// 
			this->homeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homeButton->Location = System::Drawing::Point(138, 3);
			this->homeButton->Name = L"homeButton";
			this->homeButton->Size = System::Drawing::Size(265, 42);
			this->homeButton->TabIndex = 0;
			this->homeButton->Text = L"На главную";
			this->homeButton->UseVisualStyleBackColor = true;
			this->homeButton->Click += gcnew System::EventHandler(this, &StatisticsForm::homeButton_Click);
			// 
			// resultsPanel
			// 
			this->resultsPanel->AutoScroll = true;
			this->resultsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->resultsPanel->Location = System::Drawing::Point(120, 57);
			this->resultsPanel->Name = L"resultsPanel";
			this->resultsPanel->Size = System::Drawing::Size(542, 228);
			this->resultsPanel->TabIndex = 1;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel3->Controls->Add(this->textNameLabel, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(120, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(542, 48);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// textNameLabel
			// 
			this->textNameLabel->AutoSize = true;
			this->textNameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textNameLabel->Location = System::Drawing::Point(140, 5);
			this->textNameLabel->Margin = System::Windows::Forms::Padding(5);
			this->textNameLabel->Name = L"textNameLabel";
			this->textNameLabel->Size = System::Drawing::Size(261, 38);
			this->textNameLabel->TabIndex = 0;
			this->textNameLabel->Text = L"Название текста:";
			this->textNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 361);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(800, 350);
			this->Name = L"StatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StatisticsForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &StatisticsForm::StatisticsForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &StatisticsForm::StatisticsForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion

#pragma endregion

#pragma region функции класса

	private: System::Void homeButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

private: System::Void StatisticsForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	StatisticsFormOpen();

	// установка названия текста
	textNameLabel->Text = "Название текста: " + marshal_as<System::String^>(fileName);

	// открытие файла с результатом
	std::ifstream resultsFile("..\\Тексты\\Результаты\\" + fileName + "_res" + textFileExtension);
	
	if (resultsFile.is_open())
	{
		// считываются строки, содержащие результаты
		std::string line;
		while (std::getline(resultsFile, line))
		{
			// добавление результата в окно
			Label^ resultLabel = gcnew Label();

			// установка параметров labele-а
			resultLabel->Text = marshal_as<System::String^>(line);
			resultLabel->Dock = DockStyle::Top;
			resultLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			// добавление созданного label-а на панель
			resultsPanel->Controls->Add(resultLabel);
		}
	}

	// если файл отсутствует (нет результатов)
	else
	{
		Label^ resultLabel = gcnew Label();
		resultLabel->Text = "Вы ещё не печатали этот текст";
		resultLabel->Dock = DockStyle::Fill;
		resultLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		resultsPanel->Controls->Add(resultLabel);
	}

	resultsFile.close();
}

private: System::Void StatisticsForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	StatisticsFormClose();
}
};

#pragma endregion

#pragma region функции

	void StatisticsFormOpen()
	{
		statisticsFormOpen = true;
	}
	void StatisticsFormClose()
	{
		statisticsFormOpen = false;
	}

#pragma endregion

}
