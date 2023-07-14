//
// Created by jjy84 on 2023-06-03(003).
//

#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "Wrong number of arguments" << std::endl;
	return (0);
}