#include "../incs/HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _gun) : name(_name), gun(_gun){}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}
