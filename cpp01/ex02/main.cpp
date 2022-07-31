#include <iostream>

int main() {
	std::string Hi = "HI THIS IS BRAIN";
	std::string *stringPTR = &Hi;
	std::string &stringREF = Hi;

	std::cout << &Hi << " - " << Hi << std::endl;
	std::cout << &stringPTR << " - " << stringPTR << std::endl;
	std::cout << &stringREF << " - " << stringREF << std::endl;
	return 0;
}