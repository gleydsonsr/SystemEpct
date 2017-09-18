#include "Person.h"
#include "ContactInformation.h"

class Teacher : public Person {
public:
	Teacher(string name, string dateOfBirth, Address address, ContactInformation contactInformation, string photo);
};

