//
// Created by jjy84 on 2023-06-03(003).
//

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << this->nameZ << " died\n";
}

void Zombie::set_name(std::string name) {
	nameZ = name;
}

void	Zombie::announce() {
	std::cout << this->nameZ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
