#include"AdminLogin.h"
#include<iostream>
#include<fstream>
using namespace std;

AdminLogin::AdminLogin()		//Default
{
	fstream read;
	read.open("LoginDetails.txt", ios::in);
	read >> name >> pass;

	cout << name << endl;
	cout << pass << endl;

	read.close();
}

int AdminLogin::check()
{
	fstream comp;

	string input_name, input_password;
	string temporary_name, temporary_password;


	cout << "Enter the username: " << endl;
	cin >> input_name;

	cout << "Enter the password: " << endl;
	cin >> input_password;

	comp.open("LoginDetails.txt", ios::in);

	while (comp >> temporary_name >> temporary_password)
	{
		if (comp.is_open())
		{
			if ((name.compare(input_name) == 0 && pass.compare(input_password) == 0))
			{
				comp.close();
				return 1;
			}
			else
			{
				cout << "Entered credentials are incorrect! " << endl;
				comp.close();
				return 0;
			}
		}
	}
}