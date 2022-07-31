#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _Name) : ClapTrap(_Name){
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->Damage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &Copy) : ClapTrap(Copy) {
	std::cout << "Copy ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Default ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (this->getEP() > 0) {
        this->setEP(this->getEP() - 1);
        std::cout << "ScavTrap " << this->Name << " attack " << target << ", causing ";
        std::cout << this->Damage << " points of damage!!!" << std::endl;
    } else {
		std::cout << "ScavTrap " << this->Name << " has not " << "Energy Points!" << std::endl;
	}
}

void ScavTrap::guardGate() {
	if (this->getEP() > 0) {
		this->setEP(this->getEP() - 1);
		std::cout << this->Name << " is now in Gate keeper mode." << std::endl;
	} else {
		std::cout << "ScavTrap " << this->Name << " has not " << "Energy Points!" << std::endl;
	}
}
