#pragma once
#include"PostalWorker.h"
#include"Customer.h"
#include<iostream>
#include<fstream>
using namespace std;

class PostOffice {
private:
	PostalWorker* PW;
	Customer customer;
public:
	PostOffice();		//Default Constructor

	void AddClerk();		//Adds a clerk using Postal worker class

	void AddPostman();		//Adds a postman using Postal worker class

	void AddAccountOfficer();	//Adds an Account officer using postal worker class

	void deleteClerk();		//Deletes a clerk from the file

	void deletePostman();	//Deletes a postman from the file

	void deleteAccountOfficer();	//Deletes an account officer from the file

	void BuyPostalStamps();		//Customer can use this fucntion to buy postal stamps from the post office
};