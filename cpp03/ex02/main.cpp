#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap a("Viktor");
	ScavTrap b("Vasya");
	FragTrap c("Semen");

	a.attack("Johny");
	b.attack("Mike");
	c.attack("Danny");
	b.attack("Michael");
	c.attack("Lanny");
	b.beRepaired(10);
	b.beRepaired(10);
	b.beRepaired(10);
	b.beRepaired(10);
	b.beRepaired(10);
	b.guardGate();
	c.highFivesGuys();
	std::cout << "ScavTrap " << b.getName() << " HP - " << b.getHP() << " EP - " << b.getEP() << std::endl;
	std::cout << "FragTrap " << c.getName() << " HP - " << c.getHP() << " EP - " << c.getEP() << std::endl;
}
