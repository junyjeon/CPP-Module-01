//
// Created by jjy84 on 2023-06-03(003).
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->nameZ = name;
}

Zombie::~Zombie() {
	std::cout << this->nameZ << '\n';
}

void	Zombie::announce() {
	std::cout << this->nameZ << "BraiiiiiiinnnzzzZ..." << std::endl;
}

int main(void){
	Zombie mainZ(std::string("mainZ"));
	mainZ.announce();
	std::cout << std::endl;

	Zombie* heapZ = newZombie(std::string("heapZ")) ;
	heapZ->announce();
	std::cout << "before" << std::endl;
	delete heapZ;
	std::cout << "after" << std::endl;
	std::cout << std::endl;

	randomChump(std::string("funcZ"));
	std::cout << std::endl;

	return (0);
}
