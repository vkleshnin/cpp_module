#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *_brain;
public:
	Dog();
	Dog(Dog &Copy);
	~Dog();
	virtual Brain* getBrain() const;
	virtual void makeSound() const;
	virtual	Animal &operator = (const Animal &object);
	virtual Dog &operator = (Dog &object);
};

#endif /*DOG_H*/
