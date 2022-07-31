#include "Contact.hpp"
#include <iostream>
#include <iomanip>

std::string Contact::trueLine(std::string str) {
	if (str.length() > 9) {
		str.resize(9);
		str.push_back('.');
	}
	return str;
}

void Contact::getInformation() {
	std::cout << "|" << std::setw(10) << this->Index << "|"
	<< std::setw(10) << this->trueLine(FirstName) << "|"
	<< std::setw(10) << this->trueLine(LastName) << "|"
	<< std::setw(10) << this->trueLine(NickName) << "|" << std::endl;
}

void Contact::getFullInformation() {
	std::cout << "First Name: " << this->FirstName << std::endl
	<< "Last Name: " << this->LastName << std::endl
	<< "Nickname: " << this->NickName << std::endl
	<< "Phone number: " << this->PhoneNumber << std::endl
	<< "Darkest secret: " << this->DarkestSecret << std::endl;
}
