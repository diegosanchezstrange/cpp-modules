#include <iostream>
#include "Zombie.h"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

int	main(void)
{
	Zombie juan("Juan");
	Zombie pedro("Pedro");

	juan.announce();
	pedro.announce();

	randomChump("Jose");

	Zombie*	diego = newZombie("Diego");
	diego->announce();
	delete (diego);
}
