#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &Copy);
	~WrongAnimal();
	std::string	getType() const;
	void		setType(std::string _type);
	void		makeSound() const;
};

#endif /*WRONGANIMAL_HPP*/
