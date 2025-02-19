#include "User.h"



User::User(string login, string pass, string firstName, string lastName, string patronymic, string adress, string phone)
{
	this->data["login"] = login;
	this->data["pass"] = pass;
	this->data["firstName"] = firstName;
	this->data["lastName"] = lastName;
	this->data["patronymic"] = patronymic;
	this->data["adress"] = adress;
	this->data["phone"] = phone;
	this->id++;

	if (id == 1) {
		// admin
	}
	else {
		// student
	}
}

User::~User()
{
}

