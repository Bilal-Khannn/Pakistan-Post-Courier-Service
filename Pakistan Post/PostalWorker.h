#pragma once 
#ifndef POSTALWORKER_H_
#define POSTALWORKER_H_

#include<iostream>
using namespace std;

//This is an abstract class whose object can't be created. All 3 types of employees are inherited from this class and provide 
//implementation for its functions

class PostalWorker {		
protected:
	string ID;
	string Name;
public:
	PostalWorker();		//Default constructor

	PostalWorker(string id, string name);		//Parametrized Construtor

	virtual void setId(string id) = 0;

	virtual void setName(string nam) = 0;

	virtual string getId() = 0;

	virtual string getName() = 0;

	virtual void addEmployee(int numofemp, string filename) = 0;		//Writes employee information to a file

	virtual void deleteEmployee(string id, string filename) = 0;		//Takes the ID of employee as an argument and deletes info of that employee from file
};

#endif