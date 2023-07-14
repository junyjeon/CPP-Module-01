//
// Created by jjy84 on 2023-06-03(003).
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->nameZ = name;
}

Zombie::~Zombie() {
	std::cout << this->nameZ << " died\n";
}

void	Zombie::announce(void) {
	std::cout << this->nameZ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}