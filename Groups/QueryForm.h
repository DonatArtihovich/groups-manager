#pragma once

namespace Groups {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для QueryForm
	/// </summary>
	public ref class QueryForm : public System::Windows::Forms::Form
	{

	public:
		QueryForm()
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
		~QueryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ groupNumberInput;
	private: System::Windows::Forms::Label^ resultLabel;
	protected:


	private: System::Windows::Forms::Button^ showButton;
	private: System::Windows::Forms::Button^ button1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupNumberInput = (gcnew System::Windows::Forms::TextBox());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->showButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(12, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите номер группы: ";
			// 
			// groupNumberInput
			// 
			this->groupNumberInput->Location = System::Drawing::Point(12, 92);
			this->groupNumberInput->Name = L"groupNumberInput";
			this->groupNumberInput->Size = System::Drawing::Size(217, 22);
			this->groupNumberInput->TabIndex = 1;
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Font = (gcnew System::Drawing::Font(L"Mistral", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultLabel->Location = System::Drawing::Point(108, 129);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(0, 16);
			this->resultLabel->TabIndex = 2;
			// 
			// showButton
			// 
			this->showButton->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->showButton->Font = (gcnew System::Drawing::Font(L"Mistral", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->showButton->Location = System::Drawing::Point(235, 84);
			this->showButton->Name = L"showButton";
			this->showButton->Size = System::Drawing::Size(91, 38);
			this->showButton->TabIndex = 3;
			this->showButton->Text = L"Поиск";
			this->showButton->UseVisualStyleBackColor = false;
			this->showButton->Click += gcnew System::EventHandler(this, &QueryForm::showButton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Mistral", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(78, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 38);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Показать";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// QueryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(328, 428);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->showButton);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->groupNumberInput);
			this->Controls->Add(this->label1);
			this->Name = L"QueryForm";
			this->Text = L"QueryForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void showButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
