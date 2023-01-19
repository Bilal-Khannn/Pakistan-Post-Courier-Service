#pragma once
#ifndef MAILS_H_
#define MAILS_H_

#include"MailService.h"
#include"RegularMail.h"
#include"UrgentMail.h"
#include"Invoice.h"

#include<iostream>

using namespace std;

class Mails {
private:
	Invoice invoice;
	int price;
	string sender_name;
	string sender_address;
	string receiver_name;
	string receiver_address;
	int weight;					//Weight of parcel in grams and kilo grams
	MailService* mailservice;	//Pointer of mailservice, Implemented Polymorphism in mailservice so we cant create its object
public:
	Mails();	//Default constructor

	void choose_service();		//Choose type of mail service (urgent or regular)
};

#endif // !MAILS_H_
