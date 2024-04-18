#include "CreateForm.h"
#include "QueryForm.h"
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace msclr::interop;
using namespace std;

System::Void Groups::CreateForm::enterButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	string groupNumber{ marshal_as<string>(this->groupInput->Text) };
	string firstName{ marshal_as<string>(this->firstNameInput->Text) };
	string lastName{ marshal_as<string>(this->lastNameInput->Text) };

	fstream file;
	file.open(groupNumber + ".txt", ios::app);
	file << firstName + " " + lastName << endl;
	file.close();

	this->groupInput->Text = "";
	this->firstNameInput->Text = "";
	this->lastNameInput->Text = "";
};

System::Void Groups::CreateForm::showButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Groups::QueryForm^ queryForm{ gcnew Groups::QueryForm() };
	this->Hide();
	queryForm->Show();

}