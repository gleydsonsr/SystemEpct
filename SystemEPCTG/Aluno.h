#include "Person.h"

class Aluno : public Person {
private:
	string registry;
public:
	Aluno(string registry, string name, string dateOfBirth, Address address, string photo);
};