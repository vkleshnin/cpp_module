#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
public:
	Contact contacts[8];
	int numbers;

	PhoneBook(int numbers) {
		this->numbers = numbers;
	}
	void addUser();
	void searchContact();
	void setInformation(int index);
	void clearContact(int index);
};


#endif //PHONEBOOK_HPP
