#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
using namespace std;


class Admin
{
private:
	map<string, string> data;
	bool isAdmin;
	int id = 0;

public:
	Admin(string login, string pass);
	~Admin();
};

