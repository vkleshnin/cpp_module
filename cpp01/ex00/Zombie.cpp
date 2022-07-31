#include "Zombie.hpp"

Zombie::Zombie(std::string _name) {
	std::cout << "Create zombie - " << _name << std::endl;
	name = _name;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->name << " is destroyed" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
