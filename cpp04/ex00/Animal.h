#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(Animal &Copy);
	virtual ~Animal();
	std::string		getType() const;
	void			setType(std::string _type);
	virtual void	makeSound() const;
};

#endif /*ANIMAL_H*/
