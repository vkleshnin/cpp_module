#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon *gun;
public:
	HumanB(std::string _name);
	void attack();
	void setWeapon(Weapon& _gun);
};

#endif //HUMANB_HPP
