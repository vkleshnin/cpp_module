#include "Dog.h"

Dog::Dog() : Animal() {
	std::cout << "Default Dog constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog &Copy) {
	std::cout << "Copy Dog constructor called." << std::endl;
	*this = Copy;
}

Dog::~Dog() {
	std::cout << "Default Dog destructor called." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Wooof!" << std::endl;
}