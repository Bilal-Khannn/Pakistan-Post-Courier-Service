#pragma once
#ifndef REGULARMAIL_H_
#define REGULARMAIL_H_

#include"MailService.h"
#include<iostream>
using namespace std;

class RegularMail : public MailService{
private:
	int price;
public:
	RegularMail();		//Default Constructor

	virtual int TypeService(int weight);		//virtual function whose implementation will be provided by classes inherited from mail service


};
#endif // !REGULARMAIL_H_
