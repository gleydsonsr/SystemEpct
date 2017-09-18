#include "stdafx.h"
#include "SchoolYear.h"

SchoolYear::SchoolYear(int year, list<SchoolClass> listSchoolClass) {
	this->year = year;
	this->listSchoolClass = listSchoolClass;
}

int SchoolYear::getYear() {
	return this->year;
}

void SchoolYear::setYear(int year) {
	this->year = year;
}

list<SchoolClass> SchoolYear::getListSchoolClass() {
	return this->listSchoolClass;
}

void SchoolYear::setListSchoolClass(list<SchoolClass> listSchoolClass) {
	this->listSchoolClass = listSchoolClass;
}