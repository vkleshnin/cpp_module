#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact {
public:
	int Index;
	std::string FirstName;
	std::string	LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;

	void getInformation();
	void getFullInformation();
	std::string trueLine(std::string str);
};


#endif //CONTACT_HPP
