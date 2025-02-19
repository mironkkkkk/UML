#include <iostream>
#include <string>
#include <map>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	map<string, string> data;
	data["login"];
	map<string, string> copy(data);
}

