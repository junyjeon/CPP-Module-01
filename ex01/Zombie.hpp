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
	Zombie();
	~Zombie();
	void announce(void);
	void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
