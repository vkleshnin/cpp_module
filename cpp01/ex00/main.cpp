#include "Zombie.hpp"

int main(void) {
	Zombie *Victor = new Zombie("Victor");
	Victor->announce();
	delete Victor;
	randomChump("Petya");
	Zombie *Dany;
	Dany = newZombie("Dany");
	Dany->announce();
	delete Dany;
	return 0;
}
