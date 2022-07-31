#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("no_type") {
	std::cout << "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &Copy) {
	std::cout << "Copy WrongAnimal constructor called." << std::endl;
	*this = Copy;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Default WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::setType(std::string _type) { this->type = _type; }

std::string WrongAnimal::getType() const { return this->type; }

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal " << this->type << " has not sound." << std::endl;
}