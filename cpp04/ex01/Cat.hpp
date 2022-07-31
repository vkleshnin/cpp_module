#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.h"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *_brain;
public:
	Cat();
	Cat(Cat &Copy);
	~Cat();
	virtual Brain* getBrain() const;
	virtual void makeSound() const;
	virtual	Animal &operator = (const Animal &object);
	virtual Cat &operator = (const Cat &object);
};

#endif /*CAT_HPP*/
