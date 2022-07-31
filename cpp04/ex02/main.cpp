#include "Animal.h"
#include "Cat.hpp"
#include "Dog.h"

int	main(void) {
	Animal* _animals[10];

	for (int i = 0; i < 10; i++) {
		if (i < 5) {
			_animals[i] = new Dog();
		} else {
			_animals[i] = new Cat();
		}
		std::cout << std::endl;
	}
	_animals[9]->getBrain()->ideas[0] = "Eaaaat!";
	*_animals[5] = *_animals[9];
	std::cout << _animals[5]->getBrain()->ideas[0] << std::endl << std::endl;
	for (int i = 0; i < 10; i++) {
		delete _animals[i];
		std::cout << std::endl;
	}
	return 0;
}
