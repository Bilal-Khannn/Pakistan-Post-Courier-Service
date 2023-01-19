#include"RegularMail.h"
#include<iostream>
using namespace std;

RegularMail::RegularMail()		//Default Constructor
{
	price = 0;
}

int RegularMail::TypeService(int weight)		//virtual function whose implementation will be provided by classes inherited from mail service
{
	if (weight >= 1)
	{
		price = 100;
		return price;
	}
	else if (weight >= 3)
	{
		price = 175;
		return price;
	}
	else if (weight >= 5)
	{
		price = 250;
		return price;
	}
	else if (weight >= 10)
	{
		price = 375;
		return price;
	}
	else if (weight >= 15)
	{
		price = 500;
		return price;
	}
	else if (weight >= 20)
	{
		price = 625;
		return price;
	}
	else if (weight >= 25)
	{
		price = 750;
		return price;
	}
	else if (weight >= 30)
	{
		price = 875;
		return price;
	}	
}