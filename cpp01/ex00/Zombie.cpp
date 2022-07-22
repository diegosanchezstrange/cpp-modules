#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie() {}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiizzzZ..." << std::endl;
}

