#include <iostream>
#include <string>
#include "address.h"

using namespace std;

class Person {
private:
	int id;
	string name;
	string dateOfBirth;
	Address address;
public:
	Person(string name, string dateOfBirth, Address address);
	int getId();
	void setId(int id);
	int getName();
	void setName(string name);
	int getDateOfBirth();
	void setDateOfBirth(string dateOfBirth);

};

