#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook book = PhoneBook(0);
	std::string cmd;
	std::cout << "Commands:" << std::endl;
	std::cout << "ADD - add user" << " | "
	<< "SEARCH - search required user" << " | "
	<< "EXIT - end the program" << std::endl << std::endl;
	while (!std::cin.eof()) {
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			break;
		}
		if (cmd == "ADD") {
			book.addUser();
		} else if (cmd == "SEARCH") {
			book.searchContact();
		} else if (cmd == "EXIT") {
			break;
		} else {
			std::cout << "Unknown command" << std::endl;
		}
	}
	return 0;
}

