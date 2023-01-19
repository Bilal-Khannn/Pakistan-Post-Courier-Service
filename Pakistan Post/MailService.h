#pragma once
#ifndef MAILSERVICE_H_
#define MAILSERVICE_H_

#include<iostream>
using namespace std;

class MailService {
protected:
	int dummy;
public:
	MailService();

	virtual int TypeService(int weight) = 0;		//virtual function whose implementation will be provided by classes inherited from mail service
};

#endif // !MAILSERVICE_H_