#include "Zombie.hpp"

int main(void){
	Zombie mainZ("mainZ");
	mainZ.announce();
	std::cout << std::endl;

	Zombie* heapZ = newZombie("heapZ");
	heapZ->announce();
	std::cout << "before" << std::endl;
	delete heapZ;
	std::cout << "after" << std::endl;
	std::cout << std::endl;

	randomChump("funcZ");
	std::cout << std::endl;

	return (0);
}
