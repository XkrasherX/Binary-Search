#pragma once

#include "BinarySearch.h"

namespace lab8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			array = new BinarySearch;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			delete array;
			array = nullptr;
		}
	private: BinarySearch* array;
	private: System::Windows::Forms::Label^ EnterArraySizeLabel;
	protected:
	private: System::Windows::Forms::NumericUpDown^ ArraySizeUpDown;
	private: System::Windows::Forms::Button^ GenerateRandArrButton;
	private: System::Windows::Forms::TextBox^ InformationTextBox;
	private: System::Windows::Forms::Label^ EnterTargetNumberLabel;
	private: System::Windows::Forms::TextBox^ TargetNubmerTextBox;
	private: System::Windows::Forms::Button^ FindTargetNumberButton;
	private: System::Windows::Forms::Button^ IndividualTaskButton;
	private: System::Windows::Forms::Button^ ShowArrayButton;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->EnterArraySizeLabel = (gcnew System::Windows::Forms::Label());
			this->ArraySizeUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->GenerateRandArrButton = (gcnew System::Windows::Forms::Button());
			this->InformationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->EnterTargetNumberLabel = (gcnew System::Windows::Forms::Label());
			this->TargetNubmerTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FindTargetNumberButton = (gcnew System::Windows::Forms::Button());
			this->IndividualTaskButton = (gcnew System::Windows::Forms::Button());
			this->ShowArrayButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArraySizeUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// EnterArraySizeLabel
			// 
			this->EnterArraySizeLabel->AutoSize = true;
			this->EnterArraySizeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->EnterArraySizeLabel->Location = System::Drawing::Point(12, 26);
			this->EnterArraySizeLabel->Name = L"EnterArraySizeLabel";
			this->EnterArraySizeLabel->Size = System::Drawing::Size(328, 32);
			this->EnterArraySizeLabel->TabIndex = 0;
			this->EnterArraySizeLabel->Text = L"Введіть розмір масиву: ";
			// 
			// ArraySizeUpDown
			// 
			this->ArraySizeUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ArraySizeUpDown->Location = System::Drawing::Point(346, 26);
			this->ArraySizeUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->ArraySizeUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->ArraySizeUpDown->Name = L"ArraySizeUpDown";
			this->ArraySizeUpDown->Size = System::Drawing::Size(79, 39);
			this->ArraySizeUpDown->TabIndex = 1;
			this->ArraySizeUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// GenerateRandArrButton
			// 
			this->GenerateRandArrButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->GenerateRandArrButton->Location = System::Drawing::Point(18, 236);
			this->GenerateRandArrButton->Name = L"GenerateRandArrButton";
			this->GenerateRandArrButton->Size = System::Drawing::Size(269, 53);
			this->GenerateRandArrButton->TabIndex = 2;
			this->GenerateRandArrButton->Text = L"Згенерувати масив";
			this->GenerateRandArrButton->UseVisualStyleBackColor = true;
			this->GenerateRandArrButton->Click += gcnew System::EventHandler(this, &MyForm::GenerateRandArrButton_Click);
			// 
			// InformationTextBox
			// 
			this->InformationTextBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->InformationTextBox->Location = System::Drawing::Point(18, 313);
			this->InformationTextBox->Multiline = true;
			this->InformationTextBox->Name = L"InformationTextBox";
			this->InformationTextBox->ReadOnly = true;
			this->InformationTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->InformationTextBox->Size = System::Drawing::Size(571, 294);
			this->InformationTextBox->TabIndex = 3;
			// 
			// EnterTargetNumberLabel
			// 
			this->EnterTargetNumberLabel->AutoSize = true;
			this->EnterTargetNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->EnterTargetNumberLabel->Location = System::Drawing::Point(12, 101);
			this->EnterTargetNumberLabel->Name = L"EnterTargetNumberLabel";
			this->EnterTargetNumberLabel->Size = System::Drawing::Size(312, 32);
			this->EnterTargetNumberLabel->TabIndex = 4;
			this->EnterTargetNumberLabel->Text = L"Введіть шукане число:";
			// 
			// TargetNubmerTextBox
			// 
			this->TargetNubmerTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->TargetNubmerTextBox->Location = System::Drawing::Point(346, 101);
			this->TargetNubmerTextBox->Name = L"TargetNubmerTextBox";
			this->TargetNubmerTextBox->Size = System::Drawing::Size(100, 39);
			this->TargetNubmerTextBox->TabIndex = 5;
			this->TargetNubmerTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::TargetNubmerTextBox_TextChanged);
			// 
			// FindTargetNumberButton
			// 
			this->FindTargetNumberButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->FindTargetNumberButton->Location = System::Drawing::Point(320, 240);
			this->FindTargetNumberButton->Name = L"FindTargetNumberButton";
			this->FindTargetNumberButton->Size = System::Drawing::Size(269, 53);
			this->FindTargetNumberButton->TabIndex = 6;
			this->FindTargetNumberButton->Text = L"Знайти число";
			this->FindTargetNumberButton->UseVisualStyleBackColor = true;
			this->FindTargetNumberButton->Click += gcnew System::EventHandler(this, &MyForm::FindTargetNumberButton_Click);
			// 
			// IndividualTaskButton
			// 
			this->IndividualTaskButton->Location = System::Drawing::Point(320, 161);
			this->IndividualTaskButton->Name = L"IndividualTaskButton";
			this->IndividualTaskButton->Size = System::Drawing::Size(269, 53);
			this->IndividualTaskButton->TabIndex = 7;
			this->IndividualTaskButton->Text = L"Індивідуальне завдання";
			this->IndividualTaskButton->UseVisualStyleBackColor = true;
			this->IndividualTaskButton->Click += gcnew System::EventHandler(this, &MyForm::IndividualTaskButton_Click);
			// 
			// ShowArrayButton
			// 
			this->ShowArrayButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ShowArrayButton->Location = System::Drawing::Point(18, 161);
			this->ShowArrayButton->Name = L"ShowArrayButton";
			this->ShowArrayButton->Size = System::Drawing::Size(269, 53);
			this->ShowArrayButton->TabIndex = 8;
			this->ShowArrayButton->Text = L"Вивести масив";
			this->ShowArrayButton->UseVisualStyleBackColor = true;
			this->ShowArrayButton->Click += gcnew System::EventHandler(this, &MyForm::ShowArrayButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 628);
			this->Controls->Add(this->ShowArrayButton);
			this->Controls->Add(this->IndividualTaskButton);
			this->Controls->Add(this->FindTargetNumberButton);
			this->Controls->Add(this->TargetNubmerTextBox);
			this->Controls->Add(this->EnterTargetNumberLabel);
			this->Controls->Add(this->InformationTextBox);
			this->Controls->Add(this->GenerateRandArrButton);
			this->Controls->Add(this->ArraySizeUpDown);
			this->Controls->Add(this->EnterArraySizeLabel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArraySizeUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//кнопка для генерації масиву
	private: System::Void GenerateRandArrButton_Click(System::Object^ sender, System::EventArgs^ e) {
		array->clearAllData();
		InformationTextBox->Clear();
		
		//створення відсортованого масиву з випадковими числами
		int size = Convert::ToInt32(ArraySizeUpDown->Text);
		array->createSortedArray(size);

		//вивід масиву
		InformationTextBox->Text = "Масив випадкових чисел: " + Environment::NewLine;
		for (int i = 0;i < size; i++) {
			InformationTextBox->Text += " " + Convert::ToString((*array)[i]);
		}
	}

	//кнопка для пошуку заданого числа в масиві
	private: System::Void FindTargetNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
		InformationTextBox->Clear();

		int target_num = Convert::ToInt32(TargetNubmerTextBox->Text);
		int count = 0;
		int index = array->binarySearchAlgorithm(target_num, count);

		if (index != -1) {
			InformationTextBox->Text = "Число: " + Convert::ToString(target_num) +
				" знадиться за індексом: " + Convert::ToString(index) + Environment::NewLine +
				"Кількість порівнянь: " + Convert::ToString(count);
		}
		else {
			InformationTextBox->Text = "Число " + Convert::ToString(target_num) +
				" відсутнє у записі! ";
		}
	}
	

	private: System::Void TargetNubmerTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	//кнопка для виводу масиву 
	private: System::Void ShowArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		InformationTextBox->Clear();

		//вивід масиву
		InformationTextBox->Text = "Масив: " + Environment::NewLine;
		for (int i = 0; i < array->sizeOfVector();i++) {
			InformationTextBox->Text += " " + Convert::ToString((*array)[i]);
		}
	}
private: System::Void IndividualTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	InformationTextBox->Clear();

	int sum = 0;
	//вивід масиву
	array->replaceZeroWithAbsSumOfNegativeNum(sum);

	InformationTextBox->Text = "Сума від'ємних елементів(за модулем): " + Convert::ToString(sum)
		+ Environment::NewLine + "Масив після індивідуального завдання: " 
		+ Environment::NewLine;

	for (int i = 0; i < array->sizeOfVector();i++) {
		InformationTextBox->Text += " " + Convert::ToString((*array)[i]);
	}
}
};
}
