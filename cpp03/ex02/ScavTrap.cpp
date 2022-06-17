//
// Created by Diego Sanchez strange on 17/06/2022.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
    this->hitpoints = 100;
    this->attckDamage = 20;
    this->energypoints = 50;
    std::cout << "Default ScavTrap constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Default ScavTrap destructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string const name)
{
    this->name = name;
    this->hitpoints = 100;
    this->attckDamage = 20;
    this->energypoints = 50;
    std::cout << "ScavTrap constructor called." << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attckDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap in Gate keeper mode" << std::endl;
}
