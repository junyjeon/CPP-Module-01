//
// Created by jjy84 on 2023-06-03(003).
//

#include "Weapon.h"

Weapon::Weapon() {};
Weapon::~Weapon() {};
Weapon::Weapon(std::string _type) {
	type = _type;
}

std::string Weapon::getType() {
	return (this->type);
}

void Weapon::setType(std::string _type) {
	type = _type;
}