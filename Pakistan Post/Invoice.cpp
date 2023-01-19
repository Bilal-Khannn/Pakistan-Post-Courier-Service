#include"Invoice.h"
#include<iostream>
#include<fstream>
using namespace std;

void Invoice::CreateInvoice(string filename, string sender_name, string sender_address, string receiver_name, string reciever_address, int weight, int bill)		//Stores the information of invoice generated from mail considering the details
{
	fstream out;

	out.open(filename, ios::app);

	out << "Sender \t" << sender_name << "\n";
	out << "Sender Address \t " << sender_address << "\n";
	out << "Receiver \t" << receiver_name << "\n";
	out << "Receiver Address \t" << reciever_address << "\n";
	out << "Weight of Parcel \t" << weight << "\n";
	out << "Total Bill of the Parcel \t" << bill << "\n";
	out << "\n\n";

	out.close();

}