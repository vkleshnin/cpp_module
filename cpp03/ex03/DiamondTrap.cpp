#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string _Name) : ClapTrap(_Name) {
	_name = ClapTrap::Name + "_clap_trap_name";
	this->EnergyPoints = ScavTrap::getEP();
	this->HitPoints = FragTrap::getHP();
	this->Damage = FragTrap::getDamage();
	std::cout << "Default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Default DiamondTrap destructor called." << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	if (this->getHP() > 0) {
		if (this->getEP() > 0) {
			this->setEP(this->getEP() - 1);
			std::cout << "I am " << this->getName() << " and " << _name << std::endl;
		} else {
			std::cout << "DiamondTrap " << this->getName() << " has not EP!" << std::endl;
		}
	} else {
		std::cout << "DiamondTrap " << this->getName() << " has not HP!" << std::endl;
	}
}
