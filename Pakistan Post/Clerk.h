#pragma once
#ifndef CLERK_H_
#define CLERK_H_

#include"PostalWorker.h"

class Clerk : public PostalWorker{
public:
	Clerk();		//Default constructor

	Clerk(string id, string nam);		//Parametrized construtor

	void setId(string id);

	void setName(string nam);

	string getId();

	string getName();

	void addEmployee(int numofemp, string filename);		//Adds a new employee

	void deleteEmployee(string id, string filename);		//Deletes info of employee from file
};

#endif // !