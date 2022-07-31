#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->Damage = 30;
	std::cout << "Default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(std::string _Name) : ClapTrap(_Name) {
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->Damage = 30;
	std::cout << "Default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(FragTrap &Copy) : ClapTrap(Copy) {
	std::cout << "Copy FragTrap constructor called." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Default FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys() {
	if (this->getHP() <= 0 && this->getEP() > 0) {
		std::cout << "FragTrap " << this->getName() << " has not HP!" << std::endl;
	} else if (this->getEP() <= 0) {
		std::cout << "FragTrap " << this->getName() << " has not EP!" << std::endl;
	} else {
		this->setEP(this->getEP() - 1);
		std::cout << "FragTrap " << this->getName() << " high fives!" << std::endl;
	}
}
