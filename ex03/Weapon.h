//
// Created by jjy84 on 2023-06-03(003).
//

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string _type);
	~Weapon();
	std::string	getType();
	void	setType(std::string _type);
};

#endif //WEAPON_H