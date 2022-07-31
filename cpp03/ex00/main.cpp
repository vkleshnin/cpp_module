#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap a("Viktor");

	a.attack("Johny");
	a.attack("Mike");
	a.attack("Danny");
	a.attack("Michael");
	a.attack("Lanny");
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	std::cout << "ClapTrap " << a.getName() << " HP - " << a.getHP() << " EP - " << a.getEP() << std::endl;
}
