#include "stdafx.h"
#include "Student.h"

Student::Student(string registry, string name, string dateOfBirth, Address address, string photo) : Person(name, dateOfBirth, address, photo) {
	this->registry = registry;
}

string Student::getRegistry() {
	return this->registry;
}
void Student::setRegistry(string registry) {
	this->registry = registry;
}