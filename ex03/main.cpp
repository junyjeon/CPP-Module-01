//
// Created by jjy84 on 2023-06-03(003).
//

#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int main(){
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}