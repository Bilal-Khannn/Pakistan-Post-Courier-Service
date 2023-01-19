#include"GPO.h"
#include<iostream>
#include<fstream>
using namespace std;

GPO::GPO()
{
	bool flag = login.check();

	if (flag == 0)		//If the admin enters the wrong credentials, the program won't proceed and will invoke exit
	{
		exit(0);
	}
	else
	{
		cout << endl;
		cout << "\t Logged in successfully! \t\t" << endl << endl;
	}

	postoffice = NULL;
}

void GPO::CreatePostOffice(int num)		//Creates the Post Offices
{
	postoffice = new PostOffice[num];
}

void GPO::setPostOffice(int num)		//Sets the details of Post Offices created by GPO
{
	for (int i = 0; i < num; i++)
	{
		postoffice[i].AddClerk();
		postoffice[i].AddAccountOfficer();
		postoffice[i].AddPostman();
	}
}

