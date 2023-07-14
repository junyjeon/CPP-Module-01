//
// Created by jjy84 on 2023-06-03(003).
//

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie* ZB = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		ZB[i].set_name(name);
		ZB[i].announce();
	}
	return (ZB);
}
