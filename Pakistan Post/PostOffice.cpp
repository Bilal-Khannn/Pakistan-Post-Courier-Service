#include"PostOffice.h"
#include"Clerk.h"
#include"AccountOfficer.h"
#include"Postman.h"

#include<iostream>

using namespace std;

PostOffice::PostOffice()		//Default Constructor
{
	PW = NULL;
}

void PostOffice::AddClerk()		//Adds a clerk using Postal worker class
{
	Clerk clerk;
	PW = new Clerk;

	PW = &clerk;

	int num;
	string filename;

	cout << "Enter the number of clerks you would like to employee: " << endl;
	cin >> num;

	cout << "Enter the file name where you want to store the data of these clerks: " << endl;
	cin >> filename;

	PW->addEmployee(num, filename);
}

void PostOffice::AddPostman()		//Adds a postman using Postal worker class
{
	Postman postman;

	PW = new Postman;

	PW = &postman;

	int num;
	string filename;

	cout << "Enter the number of Postman you would like to employee: " << endl;
	cin >> num;

	cout << "Enter the file name where you want to store the data of these Postman: " << endl;
	cin >> filename;

	PW->addEmployee(num, filename);
}

void PostOffice::AddAccountOfficer()	//Adds an Account officer using postal worker class
{
	AccountOfficer Accofficer;

	PW = new AccountOfficer;
	
	PW = &Accofficer;

	int num;
	string filename;

	cout << "Enter the number of Account Officers you would like to employee: " << endl;
	cin >> num;

	cout << "Enter the file name where you want to store the data of these Account Officers: " << endl;
	cin >> filename;

	PW->addEmployee(num, filename);
}

void PostOffice::deleteClerk()		//Deletes a clerk from the file
{
	Clerk clerk;
	PW = new Clerk;

	PW = &clerk;

	string num;
	string filename;

	cout << "Enter the id of clerk you would like to remove: " << endl;
	cin >> num;

	cout << "Enter the file name where you want to make this change: " << endl;
	cin >> filename;

	PW->deleteEmployee(num, filename);
	
}

void PostOffice::deletePostman()	//Deletes a postman from the file
{
	Postman postman;
	PW = new Postman;

	PW = &postman;

	string num;
	string filename;

	cout << "Enter the id of Postman you would like to remove: " << endl;
	cin >> num;

	cout << "Enter the file name where you want to make this change: " << endl;
	cin >> filename;

	PW->deleteEmployee(num, filename);
}

void PostOffice::deleteAccountOfficer()	//Deletes an account officer from the file
{
	Postman Accofficer;
	PW = new AccountOfficer;

	PW = &Accofficer;

	string num;
	string filename;

	cout << "Enter the id of Account officer you would like to remove: " << endl;
	cin >> num;

	cout << "Enter the file name where you want to make this change: " << endl;
	cin >> filename;

	PW->deleteEmployee(num, filename);
}

void PostOffice::BuyPostalStamps()		//Customer can use this fucntion to buy postal stamps from the post office
{
	bool check = customer.CustomerLogin();

	if (check == 1)
	{
		int choice;
		int price_local = 20;
		int price_national = 50;
		int price_internationl = 100;

		int quantity = 0;
		int cost = 0;

		cout << "What kind of Parcel would you like to buy? " << endl;
		cout << "1. Local Parcel for Rs 20. " << endl;
		cout << "2. National Parcel for Rs 50. " << endl;
		cout << "3. International Parcel for Rs 100. " << endl;

		cin >> choice;

		char ch = 'Y';

		while (ch == 'y' || ch == 'Y')
		{
			switch (choice)
			{
			case 1:
				cout << "Enter the quantity: " << endl;
				cin >> quantity;
				cost = quantity * price_local;
				break;
			case 2:
				cout << "Enter the quantity: " << endl;
				cin >> quantity;
				cost = quantity * price_national;
				break;
			case 3:
				cout << "Enter the quantity: " << endl;
				cin >> quantity;
				cost = quantity * price_internationl;
				break;
			}

			fstream out;

			out.open("ParcelSold.txt", ios::app);

			out << "\n" << quantity << "\t\t" << cost << "\n";

			out.close();

			cout << "Would you like to buy more parcels: (Y/N) " << endl;
			cin >> ch;

		}
	}
	else
	{
		cout << "Wrong credentials. Try again! " << endl;
		return;
	}
	
} 