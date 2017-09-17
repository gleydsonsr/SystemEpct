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
	string photo;
public:
	Person(string name, string dateOfBirth, Address address, string photo);
	int getId();
	void setId(int id);
	string getName();
	void setName(string name);
	string getDateOfBirth();
	void setDateOfBirth(string dateOfBirth);
	Address getAddress();
	void setAddress(Address address);
	string getPhoto();
	void setPhoto(string photo);
};

