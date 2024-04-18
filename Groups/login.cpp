#include <fstream>
#include <string>
#include <iostream>
#include "md5.h"
#include <vector>
using namespace std;

void registerUser(string login, string password)
{
	fstream file;
	file.open("users.txt", ios::app);

	if (file.is_open()) {
		string userString{ md5(login) + "=" + md5(password) };

		fstream readFile;
		readFile.open("users.txt", ios::in);
		bool isUserExists{};
		/*if (readFile.is_open())
		{
			string currString;
			while (getline(file, currString))
			{
				if (!currString.compare(userString))
				{
					isUserExists = true;
					break;
				};
			}
		}*/

		if (!isUserExists)
		{
			file << userString << endl;
		}
	}

	file.close();
}

bool loginUser(string login, string password)
{
	fstream file;
	file.open("users.txt", ios::in);

	if (file.is_open())
	{
		string currString;
		while (getline(file, currString))
		{
			string fileLogin{ currString.substr(0, currString.find("=")) };
			string filePassword{ currString.substr(currString.find("=") + 1) };

			if (!fileLogin.compare(md5(login)) && !filePassword.compare(md5(password)))
			{
				file.close();
				return true;
			}
		}
	}

	file.close();
	return false;
}

