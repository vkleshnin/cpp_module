#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->Name = "noname";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->Damage = 0;
	std::cout << "Default ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string _Name) : Name(_Name), HitPoints(10), EnergyPoints(10), Damage(0) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &Copy) {
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = Copy;
}

ClapTrap::~ClapTrap() {
	std::cout << "Default ClapTrap destructor called" << std::endl;
}

std::string ClapTrap::getName() { return this->Name; }

short ClapTrap::getHP() { return this->HitPoints; }

short ClapTrap::getEP() { return this->EnergyPoints; }

short ClapTrap::getDamage() { return this->Damage; }

void ClapTrap::setHP(short amount) {
	this->HitPoints = amount;
}

void ClapTrap::setEP(short amount) {
	this->EnergyPoints = amount;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getDamage() << " points of damage!" << std::endl;
	if (this->getEP() > 0) {
		this->setEP(this->getEP() - 1);
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->setHP((short)amount);
	if (this->getHP() < 0) {
		this->setHP(0);
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getEP() > 0) {
		this->setHP(this->getHP() + amount);
		this->setEP(this->getEP() - 1);
	}
}
