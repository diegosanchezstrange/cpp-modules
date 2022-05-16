#include "Zombie.h"
#include <iostream>

void	randomChump(std::string name)
{
	Zombie random(name);

	random.announce();
}
