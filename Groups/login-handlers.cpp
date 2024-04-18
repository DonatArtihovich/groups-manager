#include "MyForm.h"
#include <string>
#include "lib.h"
#include <msclr/marshal_cppstd.h>
#include "QueryForm.h"
#include "CreateForm.h"
using namespace msclr::interop;
using namespace Groups;
System::Void MyForm::registerButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ userPassword{ this->passwordInput->Text };
	String^ userLogin{ this->loginInput->Text };

	registerUser(marshal_as<std::string>(userLogin), marshal_as<std::string>(userPassword));
}

System::Void MyForm::loginButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ userPassword{ this->passwordInput->Text };
	String^ userLogin{ this->loginInput->Text };

	bool isLogined{ loginUser(marshal_as<std::string>(userLogin), marshal_as<std::string>(userPassword)) };

	if (isLogined)
	{
		if (this->showGroupsRadio->Checked)
		{
			QueryForm^ queryForm{ gcnew QueryForm() };
			queryForm->Show();
		}
		else {
			CreateForm^ createForm{ gcnew CreateForm() };
			createForm->Show();
		}

		this->Hide();
	}
}