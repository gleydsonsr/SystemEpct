#include <iostream>
#include <string>
#include "address.h"
#include "ContactInformation.h"

using namespace std;

class Person {
private:
	int id;
	string name;
	string dateOfBirth;
	Address address;
	ContactInformation contactInformation;
	string photo;
public:
	Person(string name, string dateOfBirth, Address address, string photo, ContactInformation contactInformation = ContactInformation());
	int getId();
	void setId(int id);
	string getName();
	void setName(string name);
	string getDateOfBirth();
	void setDateOfBirth(string dateOfBirth);
	Address getAddress();
	void setAddress(Address address);
	ContactInformation getContactInformation();
	void setContactInformation(ContactInformation contactInformation);
	string getPhoto();
	void setPhoto(string photo);
};