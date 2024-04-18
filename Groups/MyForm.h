#pragma once
//#include "QueryForm.h";

namespace Groups {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ passwordInput;
	private: System::Windows::Forms::TextBox^ loginInput;



	private: System::Windows::Forms::Button^ loginButton;

	private: System::Windows::Forms::Button^ registerButton;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ showGroupsRadio;
	private: System::Windows::Forms::RadioButton^ enterGroupsRadio;



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->loginInput = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->showGroupsRadio = (gcnew System::Windows::Forms::RadioButton());
			this->enterGroupsRadio = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"password";
			// 
			// passwordInput
			// 
			this->passwordInput->Location = System::Drawing::Point(15, 103);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->Size = System::Drawing::Size(173, 22);
			this->passwordInput->TabIndex = 2;
			// 
			// loginInput
			// 
			this->loginInput->Location = System::Drawing::Point(15, 41);
			this->loginInput->Name = L"loginInput";
			this->loginInput->Size = System::Drawing::Size(173, 22);
			this->loginInput->TabIndex = 3;
			// 
			// loginButton
			// 
			this->loginButton->Location = System::Drawing::Point(15, 205);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(95, 36);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Log in";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &MyForm::loginButton_Click);
			// 
			// registerButton
			// 
			this->registerButton->Location = System::Drawing::Point(175, 205);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(95, 36);
			this->registerButton->TabIndex = 5;
			this->registerButton->Text = L"Sign Up";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &MyForm::registerButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"operation:";
			// 
			// showGroupsRadio
			// 
			this->showGroupsRadio->Checked = true;
			this->showGroupsRadio->AutoSize = true;
			this->showGroupsRadio->Location = System::Drawing::Point(15, 160);
			this->showGroupsRadio->Name = L"showGroupsRadio";
			this->showGroupsRadio->Size = System::Drawing::Size(109, 21);
			this->showGroupsRadio->TabIndex = 7;
			this->showGroupsRadio->TabStop = true;
			this->showGroupsRadio->Text = L"show groups";
			this->showGroupsRadio->UseVisualStyleBackColor = true;
			// 
			// enterGroupsRadio
			// 
			this->enterGroupsRadio->AutoSize = true;
			this->enterGroupsRadio->Location = System::Drawing::Point(141, 160);
			this->enterGroupsRadio->Name = L"enterGroupsRadio";
			this->enterGroupsRadio->Size = System::Drawing::Size(110, 21);
			this->enterGroupsRadio->TabIndex = 8;
			this->enterGroupsRadio->TabStop = true;
			this->enterGroupsRadio->Text = L"enter groups";
			this->enterGroupsRadio->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->enterGroupsRadio);
			this->Controls->Add(this->showGroupsRadio);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->loginInput);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm::registerButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
};

