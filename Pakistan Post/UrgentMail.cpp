#include"UrgentMail.h"
#include<iostream>
using namespace std;

UrgentMail::UrgentMail()		//Default constructor
{
	price = 0;
}

int UrgentMail::TypeService(int weight)		//virtual function whose implementation will be provided by classes inherited from mail service
{
	if (weight >= 1)
	{
		price = 120;
		return price;
	}
	else if (weight >= 3)
	{
		price = 195;
		return price;
	}
	else if (weight >= 5)
	{
		price = 270;
		return price;
	}
	else if (weight >= 10)
	{
		price = 395;
		return price;
	}
	else if (weight >= 15)
	{
		price = 520;
		return price;
	}
	else if (weight >= 20)
	{
		price = 645;
		return price;
	}
	else if (weight >= 25)
	{
		price = 770;
		return price;
	}
	else if (weight >= 30)
	{
		price = 895;
		return price;
	}
}