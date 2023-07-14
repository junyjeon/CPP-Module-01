#include "Zombie.hpp"

int main(void) {
	int N;
	std::cin >> N;
	Zombie* ZB = zombieHorde(N, "Zombie");

	delete[]ZB;
	return (0);
}
