#include "../incs/HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name), gun(NULL) {}

void HumanB::attack() {
	if (this->gun) {
		std::cout << this->name << " attacks with their " << this->gun->getType() << std::endl;
	}
	else {
		std::cout << this->name << " attacks with hands " <<  std::endl;
	}
}

void HumanB::setWeapon(Weapon& _gun) {
	this->gun = &_gun;
}
