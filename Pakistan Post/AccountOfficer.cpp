#include"AccountOfficer.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

AccountOfficer::AccountOfficer()		//Default constructor
{
	ID = "";
	Name = "";
}

AccountOfficer::AccountOfficer(string id, string name)		//Parametrized Construtor
{
	ID = id;
	Name = name;
}

void AccountOfficer::setId(string id)
{
	ID = id;
}

void AccountOfficer::setName(string nam)
{
	Name = nam;
}

string AccountOfficer::getId()
{
	return ID;
}

string AccountOfficer::getName()
{
	return Name;
}

void AccountOfficer::addEmployee(int numofemp, string filename)		//Writes employee information to a file
{
	fstream input;
	string id, nam;

	input.open(filename, ios::app);

	for (int i = 0; i < numofemp; i++)
	{
		cout << "Enter the ID number of Account Officer you want to add: " << endl;
		cin >> id;
		cout << "Enter the name of Account Officer you want to add: " << endl;
		cin >> nam;

		input << id << " " << nam << "\n";
	}

	input.close();
}

void AccountOfficer::deleteEmployee(string id, string filename)		//Deletes info of employee from file
{
	int to_delete = stoi(id);		//Convert id to int

	char ch;		//To read character by character
	
	int line = 1;

	ifstream read;

	read.open(filename);

	ofstream temp;

	temp.open("temp.txt");

	while (read.get(ch))		//Read the file character by character
	{
		if (ch == '\n')
		{
			line++;
		}

		if (line != to_delete)
		{
			temp << ch;
		}
		
	}


	read.close();
	temp.close();

	int s;

	s = filename.length();

	char ar[20];

	strcpy_s(ar, filename.c_str());			//Convert the string which stores the filename to an array because remove function can only work
											//on char arrays or filenames directly

	read.close();
	temp.close();

	remove(ar);
	rename("temp.txt", ar);
	
}