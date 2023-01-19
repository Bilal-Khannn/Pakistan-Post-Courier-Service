#pragma once
#ifndef ACCOUNTOFFICER_H_
#define ACCOUNTOFFICER_H_

#include"PostalWorker.h"
#include<iostream>
using namespace std;

class AccountOfficer : public PostalWorker {
public:
	AccountOfficer();		//Default constructor

	AccountOfficer(string id, string name);		//Parametrized Construtor

	void setId(string id);

	void setName(string nam);

	string getId();

	string getName();

	void addEmployee(int numofemp, string filename);		//Writes employee information to a file

	void deleteEmployee(string id, string filename);		//Deletes info of employee from file
};

#endif // !ACCOUNTOFFICER_H_