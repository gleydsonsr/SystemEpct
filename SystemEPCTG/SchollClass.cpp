#include "stdafx.h"
#include "SchoolClass.h"

SchoolClass::SchoolClass(string name, int numberOfStudents, list<Student> listStudents, list<Teacher> listTeachers) {
	this->name = name;
	this->numberOfStudents = numberOfStudents;
	this->listStudents = list<Student>(listStudents);
	this->listTeachers = list<Teacher>(listTeachers);
}

int SchoolClass::getId() {
	return this->id;
}

void SchoolClass::setId(int id) {
	this->id = id;
}

string SchoolClass::getName() {
	return this->name;
}

void SchoolClass::setName(string name) {
	this->name = name;
}

int SchoolClass::getNumberOfStudents() {
	return this->numberOfStudents;
}

void SchoolClass::setNumberOfStudents(int numberOfStudents) {
	this->numberOfStudents = numberOfStudents;
}

list<Student> SchoolClass::getListStudents() {
	return this->listStudents;
}

void SchoolClass::setListStudents(list<Student> listStudents) {
	this->listStudents = listStudents;
}

list<Teacher> SchoolClass::getListTeachers() {
	return this->listTeachers;
}

void SchoolClass::setListTeachers(list<Teacher> listTeachers) {
	this->listTeachers = listTeachers;
}