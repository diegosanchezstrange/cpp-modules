#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie* horde = zombieHorde(4, "Pepe");

	horde[0].announce();

	delete[] horde;
}
