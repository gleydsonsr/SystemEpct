#include <iostream>
#include <string>

using namespace std;

class ContactInformation {
private:
	string phoneNumberOne;
	string phoneNumberTwo;
	string email;
public:
	ContactInformation(string phoneNumberOne = "", string phoneNumberTwo = "", string email = "");
	string getPhoneNumberOne();
	void setPhoneNumberOne(string phoneNumberOne);
	string getPhoneNumberTwo();
	void setPhoneNumberTwo(string phoneNumberTwo);
	string getEmail();
	void setEmail(string email);
};

