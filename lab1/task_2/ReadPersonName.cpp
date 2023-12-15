#include "Header.h"

string ReadPersonName() {
	string name;
	cout << "Name: ";
	cin.ignore();
	getline(cin, name);
	return name;
}