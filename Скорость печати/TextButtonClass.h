#pragma once

namespace Скоростьпечати
{
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class TextButton
	{
		TextButton(void)
		{
			InitializeComponent();
		}
		void InitializeComponent(void)
		{
			TableLayoutPanel^ tableLayoutPanel1 = gcnew TableLayoutPanel();
			tableLayoutPanel1->ColumnCount = 3;
			tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				60)));
			tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			Label^ label1 = gcnew Label();
			tableLayoutPanel1->Controls->Add(label1, 0, 0);
			Button^ button2 = gcnew Button();
			tableLayoutPanel1->Controls->Add(button2, 1, 0);
			Button^ button3 = gcnew Button();
			tableLayoutPanel1->Controls->Add(button3, 2, 0);
			tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
		}
	};
}