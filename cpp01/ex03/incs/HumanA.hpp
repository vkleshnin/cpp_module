#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"


class HumanA {
private:
	std::string name;
	Weapon &gun;
public:
	HumanA(std::string _name, Weapon& _gun);
	void attack();
};


#endif //HUMANA_HPP
