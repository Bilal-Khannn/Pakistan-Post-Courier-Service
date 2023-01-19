#include"Customer.h"
#include<iostream>
#include<fstream>
using namespace std;

Customer::Customer()		//Default constructor
{
	Password = "";
	Name = "";
}

Customer::Customer(string name, string pass)		//Parametrized constructor
{
	Password = pass; 
	Name = name;
}

void Customer::CustomerRegistration()			//Regiseters the customer and stores the info to a file
{
	cout << "Enter your Name: " << endl;
	cin >> Name;

	cout << "Enter your password: " << endl;
	cin >> Password;

	ofstream out;

	out.open("CustomerInfo.txt", ios::app);

	out << Name << " " << Password << "\n";

	out.close();
}

bool Customer::CustomerLogin()		//Matches the customer info from file and provides implementation to login
{
	string input_name, input_password;

	cout << "Enter your name: " << endl;
	cin >> input_name;

	cout << "Enter your password: " << endl;
	cin >> input_password;

	string temp_name, temp_password;

	fstream comp;

	comp.open("CustomerInfo.txt", ios::in);

	while (comp >> temp_name >> temp_password)
	{
		if (comp.is_open())
		{
			if ((input_name.compare(input_name) == 0 && input_password.compare(input_password) == 0))
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