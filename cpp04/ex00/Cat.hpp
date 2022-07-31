#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.h"

class Cat : public Animal {
public:
	Cat();
	Cat(Cat &Copy);
	~Cat();
	virtual void makeSound() const;
};

#endif /*CAT_HPP*/
