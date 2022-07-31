#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::setInformation(int index) {
	this->contacts[index - 1].Index = index;
	std::cout << "First Name --> ";
	while (!std::cin.eof() && this->contacts[this->numbers].FirstName.empty()) {
		std::getline(std::cin, this->contacts[this->numbers].FirstName);
	}
	std::cout << "Last Name --> ";
	while (!std::cin.eof() && this->contacts[this->numbers].LastName.empty()) {
		std::getline(std::cin, this->contacts[this->numbers].LastName);
	}
	std::cout << "Nickname --> ";
	while (!std::cin.eof() && this->contacts[this->numbers].NickName.empty()) {
		std::getline(std::cin, this->contacts[this->numbers].NickName);
	}
	std::cout << "Phone number --> ";
	while (!std::cin.eof() && this->contacts[this->numbers].PhoneNumber.empty()) {
		std::getline(std::cin, this->contacts[this->numbers].PhoneNumber);
	}
	std::cout << "Darkest Secret --> ";
	while (!std::cin.eof() && this->contacts[this->numbers].DarkestSecret.empty()) {
		std::getline(std::cin, this->contacts[this->numbers].DarkestSecret);
	}
	if (std::cin.eof())
		return ;
}

void PhoneBook::clearContact(int index) {
	this->contacts[index].FirstName.clear();
	this->contacts[index].LastName.clear();
	this->contacts[index].NickName.clear();
	this->contacts[index].PhoneNumber.clear();
	this->contacts[index].DarkestSecret.clear();
}

void PhoneBook::addUser() {
	if (this->numbers == 8) {
		this->numbers = 0;
		addUser();
	} else {
		if (!this->contacts[this->numbers].FirstName.empty())
			clearContact(this->numbers);
		setInformation(this->numbers + 1);
		this->numbers++;
	}
}

void PhoneBook::searchContact() {
	std::cout << "|-------------------------------------------|" << std::endl
	<< "|" << std::setw(10) << "Index" << "|"
	<< std::setw(10) << "First Name" << "|"
	<< std::setw(10) << "Last Name" << "|"
	<< std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; !this->contacts[i].FirstName.empty() && i < 8; i++) {
		this->contacts[i].getInformation();
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::string number;
	std::cout << "Index --> ";
	while (!std::cin.eof() && number.empty()) {
		std::getline(std::cin, number);
		if (std::cin.eof())
			return ;
	}
	int num = atoi(number.c_str());
	if (num > 0 && num < this->numbers + 1) {
		this->contacts[num - 1].getFullInformation();
	} else {
		std::cout << "Wrong index" << std::endl;
	}
}
