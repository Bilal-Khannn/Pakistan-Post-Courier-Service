#pragma once
#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include<iostream>
using namespace std;


class Customer {
private:
	string Name;
	string Password;
public:
	Customer();		//Default constructor

	Customer(string name, string Password);		//Parametrized constructor

	void CustomerRegistration();			//Regiseters the customer and stores the info to a file

	bool CustomerLogin();		//Matches the customer info from file and provides implementation to login
};

#endif // !CUSTOMER_H_
