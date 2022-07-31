#include "../incs/Weapon.hpp"

Weapon::Weapon(std::string _type) {
	this->type = _type;
}

void Weapon::setType(std::string _type) {
	type = _type;
}

const std::string Weapon::getType() {
	return type;
}
