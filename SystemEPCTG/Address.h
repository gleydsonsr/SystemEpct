#include <iostream>
#include <string>

using namespace std;

class Address {
private:
	int id;
	string street;
	int houseNumber;
	string complement;
	string district;
	string city;
	string state;
public:
	Address(string street, int houseNumber, string complement, string district, string city, string state);
	int getId();
	void setId(int id);
	string getStreet();
	void setStreet(int street);
	int getHouseNumber();
	void setHouseNumber(int houseNumber);
	string getComplement();
	void setComplement(int complement);
	string getDistrict();
	void setDistrict(int district);
	string getCity();
	void setCity(int city);
	string getState();
	void setState(int state);
};

