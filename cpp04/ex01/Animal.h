#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(Animal &Copy);
	virtual ~Animal();
	virtual Animal	&operator = (const Animal &object);
	virtual Brain*	getBrain() const = 0;
	virtual void	makeSound() const;
	std::string		getType() const;
	void			setType(std::string _type);
};

#endif /*ANIMAL_H*/
