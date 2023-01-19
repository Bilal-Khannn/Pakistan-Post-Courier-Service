#include "Postman.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

Postman::Postman()		//Default constructor
{
	ID = "";
	Name = "";
}

Postman::Postman(string id, string nam)		//Parametrized construtor
{
	ID = id;
	Name = nam;
}

void Postman::setId(string id)
{
	ID = id;
}

void Postman::setName(string nam)
{
	Name = nam;
}

string Postman::getId()
{
	return ID;
}

string Postman::getName()
{
	return Name;
}

void Postman::addEmployee(int numofemp, string filename)	
{
	fstream input;
	string id, nam;

	input.open(filename, ios::app);

	for (int i = 0; i < numofemp; i++)
	{
		cout << "Enter the ID number of Postman you want to add: " << endl;
		cin >> id;
		cout << "Enter the name of Postman you want to add: " << endl;
		cin >> nam;

		input << id << " " << nam << "\n";
	}

	input.close();
}

void Postman::deleteEmployee(string id, string filename)		//Deletes info of employee from file
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

	int s;

	s = filename.length();
	
	char ar[20];

	strcpy_s(ar, filename.c_str());		//Convert the string which stores the filename to an array because remove function can only work
											//on char arrays or filenames directly

	read.close();
	temp.close();

	remove(ar);
	rename("temp.txt", ar);

}