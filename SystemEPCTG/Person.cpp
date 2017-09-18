#include "stdafx.h"
#include "Person.h"

Person::Person(string name, string dateOfBirth, Address address, string photo, ContactInformation contactInformation) {	
	this->name = name;
	this->dateOfBirth = dateOfBirth;
	this->address = address;
	this->contactInformation = contactInformation;
	this->photo = photo;
}

int Person::getId() {
	return this->id;
}

void Person::setId(int id) {
	this->id = id;
}

string Person::getName() {
	return this->name;
}

void Person::setName(string name) {
	this->name = name;
}

string Person::getDateOfBirth() {
	return this->dateOfBirth;
}

void Person::setDateOfBirth(string dateOfBirth) {
	this->dateOfBirth = dateOfBirth;
}

Address Person::getAddress() {
	return this->address;
}

void Person::setAddress(Address address) {
	this->address = address;
}

ContactInformation Person::getContactInformation() {
	return this->contactInformation;
}

void Person::setContactInformation(ContactInformation contactInformation) {
	this->contactInformation = contactInformation;
}

string Person::getPhoto() {
	return this->photo;
}

void Person::setPhoto(string photo) {
	this->photo = photo;
}