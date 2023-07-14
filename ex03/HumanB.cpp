//
// Created by jjy84 on 2023-06-03(003).
//

#include "HumanB.h"

HumanB::HumanB() : name("default"), weapon(NULL) {};
HumanB::~HumanB() {};
HumanB::HumanB(std::string _name) {
	name = _name;
	weapon = NULL;
}

void HumanB::setWeapon(Weapon &_weapon) {
	weapon = &_weapon;
}

void HumanB::attack() {
	if (!this->weapon)
		std::cout << this->name << " does not have any weapon" << std::endl;
	else std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}