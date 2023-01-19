#include"Mails.h"
#include<iostream>
using namespace std;

Mails::Mails()	//Default constructor
{
	sender_name = "";
	receiver_name = "";
	sender_address = "";
	receiver_address = "";
	weight = 0;					//Weight of parcel in grams and kilo grams
	mailservice = NULL;	//Pointer of mailservice, Implemented Polymorphism in mailservice so we cant create its object
	price = 0;
}

void Mails::choose_service()		//Choose type of mail service (urgent or regular)
{
	char choice;

	cout << "Enter the type of mail service you would like to choose: (U/u for urgent, R/r for regular)" << endl;
	cin >> choice;

	if (choice == 'r' || choice == 'R')
	{
		RegularMail r_mail;

		mailservice = &r_mail;

		cout << "Enter weight of parcel: " << endl;
		cin >> weight;

		cout << "Enter name of Sender: " << endl;
		cin >> sender_name;

		cout << "Enter name of Receiver: " << endl;
		cin >> receiver_name;

		cout << "Enter address of sender: " << endl;
		cin >> sender_address;

		cout << "Enter address of receiver: " << endl;
		cin >> receiver_address;

		price =  mailservice->TypeService(weight);

		invoice.CreateInvoice("RegularMail.txt", sender_name, sender_address, receiver_name, receiver_address, weight, price);
	}

	else if (choice == 'U' || choice == 'u')
	{
		UrgentMail urgentmail;

		mailservice = &urgentmail;

		cout << "Enter weight of parcel: " << endl;
		cin >> weight;

		cout << "Enter name of Sender: " << endl;
		cin >> sender_name;

		cout << "Enter name of Receiver: " << endl;
		cin >> receiver_name;

		cout << "Enter address of sender: " << endl;
		cin >> sender_address;

		cout << "Enter address of receiver: " << endl;
		cin >> receiver_address;

		price = mailservice->TypeService(weight);

		invoice.CreateInvoice("UrgentMail.txt", sender_name, sender_address, receiver_name, receiver_address, weight, price);

	}
}