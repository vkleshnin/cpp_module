#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	ScavTrap a("Masha");
	FragTrap b("Cassy");
	DiamondTrap c("Vinni");

	a.attack("Johny");
	b.attack("Mike");
	c.attack("Danny");
	a.attack("Michael");
	b.attack("Lanny");
	c.attack("Manny");

	c.guardGate();
	c.highFivesGuys();
	c.whoAmI();
	std::cout << "ScavTrap " << a.getName() << " HP - " << a.getHP() << " EP - " << a.getEP() << std::endl;
	std::cout << "FragTrap " << b.getName() << " HP - " << b.getHP() << " EP - " << b.getEP() << std::endl;
	std::cout << "DiamondTrap " << c.getName() << " HP - " << c.getHP() << " EP - " << c.getEP() << std::endl;
}
