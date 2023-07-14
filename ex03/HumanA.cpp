//
// Created by jjy84 on 2023-06-03(003).
//

#include "HumanA.h"

HumanA::~HumanA() {};
HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(&_weapon) {
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}