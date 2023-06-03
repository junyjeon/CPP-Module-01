//
// Created by jjy84 on 2023-06-03(003).
//

#include "HumanA.h"

HumanA::HumanA() {};
HumanA::~HumanA() {};
HumanA::HumanA(std::string _name, Weapon _weapon) : weapon(_weapon){
	name = _name;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}