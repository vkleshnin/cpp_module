#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default Brain constructor called." << std::endl;
}

Brain::~Brain() {
	std::cout << "Default Brain destructor called." << std::endl;
}

Brain &Brain::operator = (Brain &object) {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = object.ideas[i];
	}
	return *this;
}