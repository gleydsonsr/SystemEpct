#include "Person.h"

class Parent : public Person {
private:
	string kinship; //parentesco
public:
	Parent(string kinship, string name, string dateOfBirth, Address address, ContactInformation contactInformation, string photo);
	string getKinship();
	void setKinship(string kinship);
};