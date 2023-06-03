//
// Created by jjy84 on 2023-06-03(003).
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
	std::string nameZ;
public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
