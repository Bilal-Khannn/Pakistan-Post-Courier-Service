#pragma once
#ifndef ADMINLOGIN_H_
#define ADMINLOGIN_H_

#include<iostream>
#include<fstream>
using namespace std;

class AdminLogin {
private:
	string name;
	string pass;

public:
	AdminLogin();		//Default

	int check();		//Compares the entered credentials with the ones already present in the file
};

#endif // !ADMINLOGIN_H_
