//
// Created by jjy84 on 2023-06-03(003).
//
#include "Zombie.hpp"

Zombie* newZombie(std::string name){
	Zombie* heapZ = new Zombie(name);
	return (heapZ);
}
