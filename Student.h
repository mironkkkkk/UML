#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
using namespace std;


class Student : public User
{
public:
	Student(string login, string pass, string firstName, string lastName, string patronymic, string adress, string phone);
	~Student();
private:
	int id = 0;	
	bool isAdmin = false;
	string login;
	string pass;
	string firstName;
	string lastName;
	string patronymic;
	string adress;
	string phone;
	
};

