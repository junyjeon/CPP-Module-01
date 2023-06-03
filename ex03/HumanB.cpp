//
// Created by jjy84 on 2023-06-03(003).
//

#include "HumanB.h"
HumanB::HumanB() {};
HumanB::~HumanB() {};
HumanB::HumanB(std::string _name) {
	name = _name;
}

void HumanB::setWeapon(Weapon _weapon) {
	weapon = _weapon;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}