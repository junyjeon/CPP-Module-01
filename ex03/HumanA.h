//
// Created by jjy84 on 2023-06-03(003).
//

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class HumanA {
private:
	std::string name;
	Weapon weapon;
public:
	HumanA();
	HumanA(std::string _name, Weapon weapon);
	~HumanA();
	void attack();
};

#endif //HUMANA_H