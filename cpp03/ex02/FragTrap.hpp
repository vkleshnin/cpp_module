#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string _Name);
	FragTrap(FragTrap & Copy);
	~FragTrap();
	void highFivesGuys(void);
};

#endif /*FRAGTRAP_HPP*/
