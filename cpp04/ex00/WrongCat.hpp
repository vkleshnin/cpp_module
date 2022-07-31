#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(WrongCat &Copy);
	~WrongCat();
	void makeSound() const;
};

#endif /*WRONGCAT_HPP*/
