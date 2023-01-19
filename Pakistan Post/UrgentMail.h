#pragma once
#ifndef URGENTMAIL_H_
#define URGENTMAIL_H_

#include"MailService.h"
#include<iostream>
using namespace std;

class UrgentMail : public MailService{
private:
	int price;
public:
	UrgentMail();		//Default constructor

	int TypeService(int weight);		//virtual function whose implementation will be provided by classes inherited from mail service
};
#endif // !URGENTMAIL_H_
