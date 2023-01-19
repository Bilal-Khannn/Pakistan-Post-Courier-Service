#pragma once
#ifndef INVOICE_H_
#define INVOICE_H_

#include<iostream>

using namespace std;

class Invoice {
public:
	void CreateInvoice(string filename, string sender_name, string sender_address, string receiver_name, string reciever_address, int weight, int bill);		//Stores the information of invoice generated from mail considering the details

};

#endif // !INVOICE_H_