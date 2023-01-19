#include"TransactionRecord.h"
#include<iostream>
#include<fstream>

using namespace std;

void TransactionRecord::SaveTransactionRecord()		//Copies all the data from the Urgent mail and regular mail invoice to a new file and combines them
{
	char ch;		//To read character by character

	int line = 1;

	ifstream read;

	read.open("RegularMail.txt");

	ofstream temp;

	temp.open("TransactionRecordofMails.txt", ios::app);

	while (read.get(ch))		//Read the file character by character
	{
		if (ch == '\n')
		{
			line++;
			temp << "\n";
		}
		else
		{
			temp << ch;
		}
	}

	int line1 = line;
	read.close();
	temp.close();

	//Urgent mail invoices

	char ch1;		//To read character by character

	ifstream read1;

	read1.open("UrgentMail.txt");

	ofstream temp1;

	temp1.open("TransactionRecordofMails.txt", ios::app);

	while (read1.get(ch1))		//Read the file character by character
	{
		if (ch1 == '\n')
		{
			line1++;
			temp1 << "\n";
		}
		else
		{
			temp1 << ch1;
		}
	}
	read1.close();
	temp1.close();
}