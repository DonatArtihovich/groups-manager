#pragma once
#include <string>

namespace Groups {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для CreateForm
	/// </summary>
	public ref class CreateForm : public System::Windows::Forms::Form
	{
	public:
		CreateForm(void)
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
		~CreateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ groupInput;
	private: System::Windows::Forms::TextBox^ firstNameInput;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ lastNameInput;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ enterButton;
	private: System::Windows::Forms::Button^ showButton;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupInput = (gcnew System::Windows::Forms::TextBox());
			this->firstNameInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lastNameInput = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->enterButton = (gcnew System::Windows::Forms::Button());
			this->showButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->Location = System::Drawing::Point(74, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Номер группы: ";
			// 
			// groupInput
			// 
			this->groupInput->Location = System::Drawing::Point(59, 81);
			this->groupInput->Name = L"groupInput";
			this->groupInput->Size = System::Drawing::Size(235, 22);
			this->groupInput->TabIndex = 1;
			// 
			// firstNameInput
			// 
			this->firstNameInput->Location = System::Drawing::Point(59, 183);
			this->firstNameInput->Name = L"firstNameInput";
			this->firstNameInput->Size = System::Drawing::Size(235, 22);
			this->firstNameInput->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->Location = System::Drawing::Point(128, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 31);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Имя: ";
			// 
			// lastNameInput
			// 
			this->lastNameInput->Location = System::Drawing::Point(59, 284);
			this->lastNameInput->Name = L"lastNameInput";
			this->lastNameInput->Size = System::Drawing::Size(235, 22);
			this->lastNameInput->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->Location = System::Drawing::Point(100, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 31);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Фамилия: ";
			// 
			// enterButton
			// 
			this->enterButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->enterButton->Location = System::Drawing::Point(98, 332);
			this->enterButton->Name = L"enterButton";
			this->enterButton->Size = System::Drawing::Size(148, 42);
			this->enterButton->TabIndex = 6;
			this->enterButton->Text = L"Ввод";
			this->enterButton->UseVisualStyleBackColor = true;
			this->enterButton->Click += gcnew System::EventHandler(this, &CreateForm::enterButton_Click);
			// 
			// showButton
			// 
			this->showButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->showButton->Location = System::Drawing::Point(98, 400);
			this->showButton->Name = L"showButton";
			this->showButton->Size = System::Drawing::Size(148, 42);
			this->showButton->TabIndex = 7;
			this->showButton->Text = L"Показать";
			this->showButton->UseVisualStyleBackColor = true;
			this->showButton->Click += gcnew System::EventHandler(this, &CreateForm::showButton_Click);
			// 
			// CreateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 477);
			this->Controls->Add(this->showButton);
			this->Controls->Add(this->enterButton);
			this->Controls->Add(this->lastNameInput);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->firstNameInput);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupInput);
			this->Controls->Add(this->label1);
			this->Name = L"CreateForm";
			this->Text = L"CreateForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void enterButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void showButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
