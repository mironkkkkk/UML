#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;


class User{

public:
	User(map<string, string> data);
	void showData();
	int getId();
	bool getIsAdmin();
	~User();

private:
	int id = 0;
	bool isAdmin = false;

protected:
	map<string, string> data = {
		{"login", ""},
		{"pass", ""},
		{"firstName", ""},
		{"lastName", ""},
		{"patronymic", ""},
		{"adress", ""},
		{"phone", ""},
	};
};

