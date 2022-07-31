#include "Animal.h"

Animal::Animal() : type("no_type") {
	std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal(Animal &Copy) {
	std::cout << "Copy Animal constructor called." << std::endl;
	*this = Copy;
}

Animal::~Animal() {
	std::cout << "Default Animal destructor called." << std::endl;
}

void Animal::setType(std::string _type) { this->type = _type; }

std::string Animal::getType() const { return this->type; }

void Animal::makeSound() const {
	std::cout << "Animal " << this->type << " has not sound." << std::endl;
}

Animal &Animal::operator=(const Animal &object) {
	std::cout << "Assigment Animal operator called." << std::endl;
	this->type = object.getType();
	return *this;
}
