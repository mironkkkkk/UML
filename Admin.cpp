#include "Admin.h"

Admin::Admin(string login, string pass)
{
	this->login = login;
	this->pass = pass;
	this->id++;
}

Admin::~Admin()
{
}
