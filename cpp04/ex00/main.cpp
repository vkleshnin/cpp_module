#include "Animal.h"
#include "Cat.hpp"
#include "Dog.h"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) {
	const Animal *meta = new Animal();
	const Animal *j = new Cat();
	const Animal *i = new Dog();
	const WrongAnimal *k = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	k->makeSound();

	delete meta;
	delete j;
	delete i;
	delete k;
	return 0;
}
