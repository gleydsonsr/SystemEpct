#include <iostream>
#include <string>
#include <list>
#include "Student.h"
#include "Teacher.h";

using namespace std;

class SchoolClass {
private:
	int id;
	string name;
	int numberOfStudents;
	list<Student> listStudents;
	list<Teacher> listTeachers;
public:
	SchoolClass(string name, int numberOfStudents, list<Student> listStudents = list<Student>(), list<Teacher> listTeachers = list<Teacher>());
	int getId();
	void setId(int id);
	string getName();
	void setName(string name);
	int getNumberOfStudents();
	void setNumberOfStudents(int numberOfStudents);
	list<Student> getListStudents();
	void setListStudents(list<Student> listStudents);
	list<Teacher> getListTeachers();
	void setListTeachers(list<Teacher> listTeachers);
};

