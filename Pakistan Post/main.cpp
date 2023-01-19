#include"Customer.h"
#include"PostOffice.h"
#include"GPO.h"
#include"Clerk.h"
#include"AccountOfficer.h"
#include"Postman.h"
#include"PostalWorker.h"
#include"Mails.h"
#include"TransactionRecord.h"

#include<iostream>

using namespace std;
int main()
{
	Mails mail;
	TransactionRecord obj;
	Customer customer;
	PostOffice postoffice;
	int number;
	int choice;
	GPO gpo;
	cout << "\t\t\t\t * Welcome to Pakistan Post Office System * \t\t\t" << endl;
	cout << "\t\t\t\t * One GPO has been created * \t\t\t" << endl;
	cout << "\t\t\t\t * Enter the number of Post Offices you would like to create * \t\t\t\t " << endl;
	cout << "\t\t\t\t";
	cin >> number;
	cout << "\n\n";

	gpo.CreatePostOffice(number);			//Admin will be able to create Post Offices and then add employees as well
	gpo.setPostOffice(number);

	cout << "\t\t\t\t * Would you like to delete an employee: * \t\t\t\t" << endl;
	cout << "\t\t\t\t *1. Delete Clerk. *\t\t\t\t " << endl;
	cout << "\t\t\t\t *2. Delete Postman. *\t\t\t\t " << endl;
	cout << "\t\t\t\t *3. Delete Account Officer. *\t\t\t\t " << endl;
	cout << "\t\t\t\t *4. If you don't want to delete an employee. *\t\t\t\t " << endl;
	cout << "\t\t\t\t";

	cin >> choice;

	switch (choice)
	{
		case 1:
			postoffice.deleteClerk();
			break;
		case 2:
			postoffice.deletePostman();
			break;
		case 3:
			postoffice.deleteAccountOfficer();
			break;
		case 4:
			break;
	}

	cout << "\t\t\t\t *Customer Implementation* \t\t\t\t" << endl;
	cout << "\t\t\t\t *1. Register Customer * \t\t\\t\t " << endl;
	cout << "\t\t\t\t *2. Login Customer * \t\t\t\t " << endl;
	cout << "\t\t\t\t *3. If you don't want to perform any action * \t\t\t\t " << endl;
	cout << "\t\t\t\t";
	cin >> choice;

	switch (choice)
	{
		case 1:
			customer.CustomerRegistration();
			break;
		case 2:
			customer.CustomerLogin();
			break;
		case 3:
			break;
	}
	
	cout << "\t\t\t\t  *Mail Implementation *  \t\t\t\t" << endl;
	cout << "\t\t\t\t  *1. Buy postal stamps * \t\t\t\t " << endl;
	cout << "\t\t\t\t  *2. Send a mail * \t\t\t\t " << endl;
	cout << "\t\t\t\t  *3. Generate Invoice * \t\t\t\t " << endl;

	cout << "\t\t\t\t";
	cin >> choice;

	switch (choice)
	{
		case 1:
			postoffice.BuyPostalStamps();
			break;
		case 2:
			mail.choose_service();
			break;
		case 3:
			obj.SaveTransactionRecord();
			break;
	}
	
}