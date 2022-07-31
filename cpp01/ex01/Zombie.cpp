#include "Zombie.hpp"

void Zombie::setName(std::string _name) {
	name = _name;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->name << " is destroyed" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
