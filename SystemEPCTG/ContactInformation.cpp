#include "stdafx.h"
#include "ContactInformation.h"

ContactInformation::ContactInformation(string phoneNumberOne, string phoneNumberTwo, string email) {
	this->phoneNumberOne = phoneNumberOne;
	this->phoneNumberTwo = phoneNumberTwo;
	this->email = email;
}

string ContactInformation::getPhoneNumberOne() {
	return this->phoneNumberOne;
}

void ContactInformation::setPhoneNumberOne(string phoneNumberOne) {
	this->phoneNumberOne = phoneNumberOne;
}

string ContactInformation::getPhoneNumberTwo() {
	return this->phoneNumberTwo;
}
void ContactInformation::setPhoneNumberTwo(string phoneNumberTwo) {
	this->phoneNumberTwo = phoneNumberTwo;
}

string ContactInformation::getEmail() {
	return this->email;
}

void ContactInformation::setEmail(string email) {
	this->email = email;
}