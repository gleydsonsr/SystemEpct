#include <iostream>
#include <string>
#include <list>
#include "SchoolClass.h"

using namespace std;

class SchoolYear {
private:
	int year;
	list<SchoolClass> listSchoolClass;
public:
	SchoolYear(int year, list<SchoolClass> listSchoolClass);
	int getYear();
	void setYear(int year);
	list<SchoolClass> getListSchoolClass();
	void setListSchoolClass(list<SchoolClass> ListSchoolClass);
};

