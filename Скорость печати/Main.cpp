#include <string>
#include <msclr/marshal_cppstd.h>
#include <fstream>

#include "Main.h"
#include "TypingForm.h"
#include "StatisticsForm.h"
#include "UsersManual.h"


#pragma region using namespace

using namespace System;
using namespace System::Windows::Forms;

using namespace msclr::interop;

#pragma endregion

#pragma region main()

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Скоростьпечати::Main mainForm;
	Application::Run(% mainForm);
}

#pragma endregion

#pragma region функции

System::Void Скоростьпечати::Main::Main_Load(System::Object^ sender, System::EventArgs^ e)
{
	// содержит информацию о файле, найденном FindFirstFileW()
	WIN32_FIND_DATAW wfd;

	// HANDLE - дескриптор, т.е. число, с помощью которого можно идентифицировать ресурс.
	// с помощью дескприторов можно ссылаться на окна, объекты ядра, графические объекты и т.п.
	HANDLE const hFind = FindFirstFileW(L"..\\Тексты\\*", &wfd);

	if (hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			// конвертирование названия файла в System::String^
			System::String^ SysFileName = marshal_as<System::String^>(&wfd.cFileName[0]);

			if (SysFileName != "." && SysFileName != "..")
			{

				// конвертирование названия файла в std::wstring для дальнейшего преобразования
				fileName = marshal_as<std::string>(SysFileName);
				
				// удаление расширения файла (.txt)
				
				// для пропуска не .txt файлов и папок
				try
				{
					fileName.erase(fileName.find(textFileExtension), textFileExtension.length());


					SysFileName = marshal_as<System::String^>(fileName);

					addButton(SysFileName);
				}
				catch (...)
				{

				}
				
			}
		} while (FindNextFileW(hFind, &wfd) != NULL);

		// закрытие дескриптора поиска FindFirstFileW()
		FindClose(hFind);

	}
}

System::Void Скоростьпечати::Main::fileButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	// установка фона ранее нажатой кнопки в белый цвет
	if (!firstSelect)
	{
		clickedButton->BackColor = Color::White;
	}
	firstSelect = false;

	// запись нажатой кнопки в переменную clickedButton
	clickedButton = (Button^)sender;
	fileName = marshal_as<std::string>(clickedButton->Text);

	// установка фона нажатой кнопки в серый
	clickedButton->BackColor = Color::FromArgb(50, 0, 0, 0);

	// активация кнопок, работающих с текстом
	startTestButton->Enabled = true;
	removeTextButton->Enabled = true;
	statisticsButton->Enabled = true;
}

System::Void Скоростьпечати::Main::Main_Activated(System::Object^ sender, System::EventArgs^ e)
{
	// активация кнопок после закрытия формы с тестом или статистикой
	if (!typingFormOpen && !statisticsFormOpen)
	{
		fileButtonsPanel->Enabled = true;
		addTextButton->Enabled = true;
	}
}

System::Void Скоростьпечати::Main::addTextButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	// фильтр на отркрытие только .txt файлов
	openFileDialog1->Filter = "Text files(*.txt)|*.txt";

	// в случае закрытия диалогового окна
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
	{
		return;
	}

	// записываем переменную, в которой будет храниться имя файла (пока что полный путь)
	std::string openFileName = marshal_as<std::string>(openFileDialog1->FileName);

	// переменная для извлечения имени файла из полного пути
	std::string revFileName = "";

	// начинаем с элемента, после которого идёт .txt
	int iii = openFileName.find(textFileExtension);
	// пока мы не дойдём до "\"
	while (openFileName[iii] != '\\')
	{
		revFileName += openFileName[iii];
		--iii;
	}

	// очищаем путь к файлу, для добавления имени файла
	openFileName.clear();

	// присваиваем элементы revFileName в обратном порядке
	for (int jjj = revFileName.size() - 1; jjj > 0; --jjj)
	{
		openFileName += revFileName[jjj];
	}

	System::String^ SysFileName = marshal_as<System::String^>(openFileName);

	addButton(SysFileName);


	// очищаем слова, для добавления слов из выбранного файла в новый файл
	words.clear();

	std::ifstream openFile(marshal_as<std::string>(openFileDialog1->FileName));

	if (!openFile.is_open())
	{
		MessageBox::Show("Невозможно открыть файл.");
	}
	else
	{
		// запись всех символов в строку для дальшейшего анализа
		std::string word;
		while (openFile >> word)
		{
			words += " " + word;
		}
	}
	openFile.close();


	// создаём новый файл
	std::string fullFileName = openFileName + textFileExtension;
	std::ofstream file("..\\Тексты\\" + fullFileName);

	// записываем слова в новый файл
	file << words;
	file.close();
}

System::Void Скоростьпечати::Main::removeTextButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	// если было подтвержденно удаление файла
	if (MessageBox::Show("Вы действительно хотите удалить файл " + marshal_as<System::String^>(fileName) + 
		"?", "Удалить файл", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes)
	{
		// записывается имя файла
		std::string removeFileName = "..\\Тексты\\" + fileName + textFileExtension;
		// удаляется этот файл
		std::remove(removeFileName.c_str());
		removeTextFile = false;
		// удаление файла из списка текстов
		fileButtonsPanel->Controls->Remove(clickedButton);

		// выключение кнопок, работающих с текстом
		startTestButton->Enabled = false;
		removeTextButton->Enabled = false;
		statisticsButton->Enabled = false;
	}
}

System::Void Скоростьпечати::Main::addButton(System::String^ fileName)
{
	// создиние кнопки
	Button^ fileButton = gcnew Button();

	// стиль кнопки и расположение

	fileButton->Size = System::Drawing::Size(0, 50);
	fileButton->Dock = DockStyle::Top;
	fileButton->Text = fileName;

	// добавление кнопки на панель
	fileButtonsPanel->Controls->Add(fileButton);

	// добавлене события нажатия на эту кнопку
	fileButton->Click += gcnew System::EventHandler(this, &Main::fileButton_Click);
}

System::Void Скоростьпечати::Main::startTestButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!typingFormOpen && !statisticsFormOpen)
	{
		// создание и открытие формы теста
		TypingForm^ form = gcnew TypingForm();
		form->Show();

		// установка фона выбранного текста в белый
		clickedButton->BackColor = Color::White;

		// отключение всех возможных кнопок
		fileButtonsPanel->Enabled = false;
		startTestButton->Enabled = false;
		removeTextButton->Enabled = false;
		addTextButton->Enabled = false;
		statisticsButton->Enabled = false;
	}
}

System::Void Скоростьпечати::Main::statisticsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!statisticsFormOpen && !typingFormOpen)
	{
		// создание и открытие формы статистики
		StatisticsForm^ form = gcnew StatisticsForm();
		form->Show();

		// установка фона выбранного текста в белый
		clickedButton->BackColor = Color::White;

		// отключение всех возможных кнопок
		fileButtonsPanel->Enabled = false;
		startTestButton->Enabled = false;
		removeTextButton->Enabled = false;
		addTextButton->Enabled = false;
		statisticsButton->Enabled = false;
	}
}

System::Void Скоростьпечати::Main::руководствоПользователяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!usersManualOpen)
	{
		UsersManual^ form = gcnew UsersManual();
		form->Show();
	}
}

# pragma endregion
