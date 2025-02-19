#pragma once
#include <iostream>
#include <map>
#include <string>
using namespace std;


class User
{
public:
	User(string login, string pass, string firstName, string lastName, string patronymic, string adress, string phone);
	~User();
private:
	int id = 0;
	bool isAdmin = false;
protected:
	map<string, string> data;
};

