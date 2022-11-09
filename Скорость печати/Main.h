#pragma once

namespace Скоростьпечати 
{

#pragma region using namespace

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

#pragma endregion

#pragma region глобальные переменные

	bool removeTextFile = false;
	bool firstSelect = true;

#pragma endregion

#pragma region класс (не для редактирования)

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::TableLayoutPanel^ mainTableLayoutPanel;

	private: System::Windows::Forms::Panel^ fileButtonsPanel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ buttpnsTableLayoutPanel;
	private: System::Windows::Forms::Button^ addTextButton;
	private: System::Windows::Forms::Button^ removeTextButton;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ startTestButton;
	private: System::Windows::Forms::Button^ statisticsButton;
	private: System::Windows::Forms::ToolStripMenuItem^ руководствоПользователяToolStripMenuItem;






	protected:





























	protected:

	protected:

	protected:


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
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->руководствоПользователяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mainTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttpnsTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->removeTextButton = (gcnew System::Windows::Forms::Button());
			this->addTextButton = (gcnew System::Windows::Forms::Button());
			this->startTestButton = (gcnew System::Windows::Forms::Button());
			this->statisticsButton = (gcnew System::Windows::Forms::Button());
			this->fileButtonsPanel = (gcnew System::Windows::Forms::Panel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->mainTableLayoutPanel->SuspendLayout();
			this->buttpnsTableLayoutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->руководствоПользователяToolStripMenuItem });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->файлToolStripMenuItem->Text = L"Справка";
			// 
			// руководствоПользователяToolStripMenuItem
			// 
			this->руководствоПользователяToolStripMenuItem->Name = L"руководствоПользователяToolStripMenuItem";
			this->руководствоПользователяToolStripMenuItem->Size = System::Drawing::Size(221, 22);
			this->руководствоПользователяToolStripMenuItem->Text = L"Руководство пользователя";
			this->руководствоПользователяToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::руководствоПользователяToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
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
			this->mainTableLayoutPanel->Controls->Add(this->label1, 1, 0);
			this->mainTableLayoutPanel->Controls->Add(this->buttpnsTableLayoutPanel, 1, 2);
			this->mainTableLayoutPanel->Controls->Add(this->fileButtonsPanel, 1, 1);
			this->mainTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainTableLayoutPanel->Location = System::Drawing::Point(0, 24);
			this->mainTableLayoutPanel->Name = L"mainTableLayoutPanel";
			this->mainTableLayoutPanel->RowCount = 3;
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->mainTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->mainTableLayoutPanel->Size = System::Drawing::Size(984, 537);
			this->mainTableLayoutPanel->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(152, 5);
			this->label1->Margin = System::Windows::Forms::Padding(5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(678, 43);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите файл";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttpnsTableLayoutPanel
			// 
			this->buttpnsTableLayoutPanel->ColumnCount = 4;
			this->buttpnsTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->buttpnsTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->buttpnsTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->buttpnsTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->buttpnsTableLayoutPanel->Controls->Add(this->removeTextButton, 0, 0);
			this->buttpnsTableLayoutPanel->Controls->Add(this->addTextButton, 3, 0);
			this->buttpnsTableLayoutPanel->Controls->Add(this->startTestButton, 2, 0);
			this->buttpnsTableLayoutPanel->Controls->Add(this->statisticsButton, 1, 0);
			this->buttpnsTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttpnsTableLayoutPanel->Location = System::Drawing::Point(150, 485);
			this->buttpnsTableLayoutPanel->Name = L"buttpnsTableLayoutPanel";
			this->buttpnsTableLayoutPanel->RowCount = 1;
			this->buttpnsTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->buttpnsTableLayoutPanel->Size = System::Drawing::Size(682, 49);
			this->buttpnsTableLayoutPanel->TabIndex = 2;
			// 
			// removeTextButton
			// 
			this->removeTextButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->removeTextButton->Enabled = false;
			this->removeTextButton->Location = System::Drawing::Point(5, 5);
			this->removeTextButton->Margin = System::Windows::Forms::Padding(5);
			this->removeTextButton->Name = L"removeTextButton";
			this->removeTextButton->Size = System::Drawing::Size(160, 39);
			this->removeTextButton->TabIndex = 1;
			this->removeTextButton->Text = L"Удалить";
			this->removeTextButton->UseVisualStyleBackColor = true;
			this->removeTextButton->Click += gcnew System::EventHandler(this, &Main::removeTextButton_Click);
			// 
			// addTextButton
			// 
			this->addTextButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addTextButton->Location = System::Drawing::Point(515, 5);
			this->addTextButton->Margin = System::Windows::Forms::Padding(5);
			this->addTextButton->Name = L"addTextButton";
			this->addTextButton->Size = System::Drawing::Size(162, 39);
			this->addTextButton->TabIndex = 0;
			this->addTextButton->Text = L"Добавить";
			this->addTextButton->UseVisualStyleBackColor = true;
			this->addTextButton->Click += gcnew System::EventHandler(this, &Main::addTextButton_Click);
			// 
			// startTestButton
			// 
			this->startTestButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->startTestButton->Enabled = false;
			this->startTestButton->Location = System::Drawing::Point(345, 5);
			this->startTestButton->Margin = System::Windows::Forms::Padding(5);
			this->startTestButton->Name = L"startTestButton";
			this->startTestButton->Size = System::Drawing::Size(160, 39);
			this->startTestButton->TabIndex = 2;
			this->startTestButton->Text = L"Пройти";
			this->startTestButton->UseVisualStyleBackColor = true;
			this->startTestButton->Click += gcnew System::EventHandler(this, &Main::startTestButton_Click);
			// 
			// statisticsButton
			// 
			this->statisticsButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->statisticsButton->Enabled = false;
			this->statisticsButton->Location = System::Drawing::Point(175, 5);
			this->statisticsButton->Margin = System::Windows::Forms::Padding(5);
			this->statisticsButton->Name = L"statisticsButton";
			this->statisticsButton->Size = System::Drawing::Size(160, 39);
			this->statisticsButton->TabIndex = 3;
			this->statisticsButton->Text = L"Статистика";
			this->statisticsButton->UseVisualStyleBackColor = true;
			this->statisticsButton->Click += gcnew System::EventHandler(this, &Main::statisticsButton_Click);
			// 
			// fileButtonsPanel
			// 
			this->fileButtonsPanel->AutoScroll = true;
			this->fileButtonsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fileButtonsPanel->Location = System::Drawing::Point(152, 58);
			this->fileButtonsPanel->Margin = System::Windows::Forms::Padding(5);
			this->fileButtonsPanel->Name = L"fileButtonsPanel";
			this->fileButtonsPanel->Size = System::Drawing::Size(678, 419);
			this->fileButtonsPanel->TabIndex = 0;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->mainTableLayoutPanel);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(460, 520);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Скорость печати";
			this->Activated += gcnew System::EventHandler(this, &Main::Main_Activated);
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->mainTableLayoutPanel->ResumeLayout(false);
			this->mainTableLayoutPanel->PerformLayout();
			this->buttpnsTableLayoutPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

#pragma endregion

		Button^ clickedButton;

#pragma region функции класса

		private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void fileButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Main_Activated(System::Object^ sender, System::EventArgs^ e);
		private: System::Void addTextButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void removeTextButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void addButton(System::String^ fileName);
		private: System::Void startTestButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void statisticsButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void руководствоПользователяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};

#pragma endregion

}
