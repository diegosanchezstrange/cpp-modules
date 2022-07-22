//
// Created by diego on 12/5/22.
//
#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie() {}

Zombie::~Zombie() {}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiizzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
