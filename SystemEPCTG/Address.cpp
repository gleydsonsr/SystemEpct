#include "stdafx.h"
#include "Address.h"

Address::Address(string street, int houseNumber, string complement, string district, string city, string state) {
	this->street = street;
	this->houseNumber = houseNumber;
	this->complement = complement;
	this->district = district;
	this->city = city;
	this->state = state;
}

int Address::getId() {
	return this->id;
}

void Address::setId(int id) {
	this->id = id;
}

string Address::getStreet() {
	return this->street;
}

void Address::setStreet(int street) {
	this->street = street;
}

int Address::getHouseNumber() {
	return this->houseNumber;
}

void Address::setHouseNumber(int houseNumber) {
	this->houseNumber = houseNumber;
}

string Address::getComplement() {
	return this->complement;
}

void Address::setComplement(int complement) {
	this->complement = complement;
}

string Address::getDistrict() {
	return this->district;
}

void Address::setDistrict(int district) {
	this->district = district;
}

string Address::getCity() {
	return this->city;
}

void Address::setCity(int city) {
	this->city = city;
}

string Address::getState() {
	return this->state;
}

void Address::setState(int state) {
	this->state = state;
}