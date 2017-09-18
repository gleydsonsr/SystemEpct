#include "Person.h"

class Student : public Person {
private:
	string registry;
public:
	Student(string registry, string name, string dateOfBirth, Address address, string photo);
	string getRegistry();
	void setRegistry(string registry);
};