#include"PostalWorker.h"
#include<iostream>
#include<fstream>
using namespace std;

PostalWorker::PostalWorker()		//Default constructor
{
	ID = "";
	Name = "";
}

PostalWorker::PostalWorker(string id, string nam)		//Parametrized Construtor
{
	ID = id;
	Name = nam;
}

