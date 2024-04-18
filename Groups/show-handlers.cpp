#include "QueryForm.h"
#include "CreateForm.h"
#include <msclr/marshal_cppstd.h>
#include <string>
#include <fstream>

using namespace std;
using namespace msclr::interop;

System::Void Groups::QueryForm::showButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	string groupNumber{ marshal_as<string>(this->groupNumberInput->Text) };
	fstream file;
	file.open(groupNumber + ".txt", ios::in);
	
	if (file.is_open())
	{
		string currStr;
		while (getline(file, currStr))
		{
			this->resultLabel->Text += marshal_as<String^>(currStr + "\r\n");
		}
	}
}

System::Void Groups::QueryForm::enterButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	CreateForm^ createForm{ gcnew CreateForm() };
	this->Hide();
	createForm->Show();
}