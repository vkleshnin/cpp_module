#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
private:
	std::string	Name;
	short		HitPoints;
	short		EnergyPoints;
	short		Damage;
public:
	ClapTrap(std::string _Name);
    ClapTrap(ClapTrap &object);
	~ClapTrap();
	std::string	getName();
	short		getHP();
	short		getEP();
	short		getDamage();
	void		setHP(short amount);
	void		setEP(short amount);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};


#endif /*CLAPTRAP_HPP*/
