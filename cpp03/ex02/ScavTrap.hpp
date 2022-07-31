#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string _Name);
	ScavTrap(ScavTrap &Copy);
	~ScavTrap();
	void	attack (const std::string & target);
	void	guardGate();
};

#endif /*SCAVTRAP_HPP*/
