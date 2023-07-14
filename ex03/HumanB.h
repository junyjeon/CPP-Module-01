//
// Created by jjy84 on 2023-06-03(003).
//

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB {
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB();
	HumanB(std::string _name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &_weapon);
};

#endif //HUMANB_H