#include "stdafx.h"
#include "Parent.h"

Parent::Parent(string kinship, string name, string dateOfBirth, Address address, ContactInformation contactInformation, string photo) : Person(name, dateOfBirth, address, contactInformation, photo) {
	this->kinship = kinship;
}

string Parent::getKinship() {
	return this->kinship;
}
void Parent::setKinship(string kinship) {
	this->kinship = kinship;
}