#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Default Cat constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat &Copy) {
	std::cout << "Copy Cat constructor called." << std::endl;
	*this = Copy;
}

Cat::~Cat() {
	std::cout << "Default Cat destructor called." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meooow!" << std::endl;
}