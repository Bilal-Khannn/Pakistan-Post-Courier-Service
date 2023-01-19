#pragma once
#ifndef GPO_H_
#define GPO_H_

#include"PostOffice.h"

#include"AdminLogin.h"

class GPO {
private:
	AdminLogin login;
	PostOffice *postoffice;		//Array of post offices (Each city has a GPO which can have its own post offices)
public:
	GPO();			//Default constructor

	void CreatePostOffice(int num);		//Creates the Post Offices

	void setPostOffice(int num);		//Sets the details of Post Offices created by GPO
};

#endif // !GPO_H_