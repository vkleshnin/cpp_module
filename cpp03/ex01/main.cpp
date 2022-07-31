#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap a("Viktor");
	ScavTrap b("Vasya");
	ScavTrap c(b);

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
	std::cout << "ScavTrap " << b.getName() << " HP - " << b.getHP() << " EP - " << b.getEP() << std::endl;
}
