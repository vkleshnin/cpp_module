#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "Default WrongCat constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &Copy) {
	std::cout << "Copy WrongCat constructor called." << std::endl;
	*this = Copy;
}

WrongCat::~WrongCat() {
	std::cout << "Default WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meooow!" << std::endl;
}