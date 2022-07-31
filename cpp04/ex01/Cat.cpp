#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Default Cat constructor called." << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat &Copy) {
	std::cout << "Copy Cat constructor called." << std::endl;
	*this = Copy;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Default Cat destructor called." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meooow!" << std::endl;
}

Brain *Cat::getBrain() const { return this->_brain; }

Animal &Cat::operator=(const Animal &object) {
	std::cout << "Assigment AnimalCat operator called." << std::endl;
	this->type = object.getType();
	*(this->_brain) = *(object.getBrain());
	return *this;
}

Cat &Cat::operator=(const Cat  &object) {
	std::cout << "Assigment Cat operator called." << std::endl;
	this->type = object.getType();
	*(this->_brain) = *(object.getBrain());
	return *this;
}