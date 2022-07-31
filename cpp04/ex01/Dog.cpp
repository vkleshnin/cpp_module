#include "Dog.h"

Dog::Dog() : Animal() {
	std::cout << "Default Dog constructor called." << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog &Copy) {
	std::cout << "Copy Dog constructor called." << std::endl;
	*this = Copy;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Default Dog destructor called." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Wooof!" << std::endl;
}

Brain *Dog::getBrain() const { return this->_brain; }

Animal &Dog::operator=(const Animal &object) {
	std::cout << "Assigment AnimalDog operator called." << std::endl;
	this->type = object.getType();
	*(this->_brain) = *(object.getBrain());
	return *this;
}

Dog &Dog::operator = (Dog &object) {
	std::cout << "Assigment Dog operator called." << std::endl;
	this->type = object.type;
	*(this->_brain) = *(object.getBrain());
	return *this;
}