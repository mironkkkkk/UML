#include "Student.h"

Student::Student(string login, string pass, string firstName, string lastName, string patronymic, string adress, string phone) : User(login, pass)
{
	this->login = login;
	this->pass = pass;
	this->firstName = firstName;
	this->lastName = lastName;
	this->patronymic = patronymic;
	this->adress = adress;
	this->phone = phone;
	this->id++;
}

Student::~Student()
{
}
