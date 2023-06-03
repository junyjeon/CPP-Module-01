//
// Created by jjy84 on 2023-06-03(003).
//

#include "zombie.hpp"

void Zombie::set_name(std::string name) {
	nameZ = name;
}

Zombie* zombieHorde( int N, std::string name ){
	Zombie* ZB = new Zombie[N];
	for (int i = 0; i < N; i++)
		ZB[i].set_name(name);
	return (ZB);
}

int main(void) {
	int N;
	std::cin >> N;
	Zombie* ZB = zombieHorde(N, std::string("Zombie"));

	delete[]ZB;
	return (0);
}
