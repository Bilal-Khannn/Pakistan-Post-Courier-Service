#pragma once
#ifndef POSTMAN_H_
#define POSTMAN_H_

#include "PostalWorker.h"
#include<iostream>
using namespace std;

class Postman : public PostalWorker {
public:
	Postman();		//Default constructor

	Postman(string id, string nam);		//Parametrized construtor

	void setId(string id);

	void setName(string nam);

	string getId();

	string getName();

	void addEmployee(int numofemp, string filename);		//Takes the number of Postman to be added as an argument and stores their info to a file

	void deleteEmployee(string id, string filename);		//Deletes info of employee from file
};

#endif // !POSTMAN_H_