//
// Created by Diego Sanchez strange on 17/06/2022.
//

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
    this->hitpoints = 100;
    this->attckDamage = 20;
    this->energypoints = 50;
    std::cout << "Default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Default DiamondTrap destructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name): ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->hitpoints = 100;
    this->attckDamage = 20;
    this->energypoints = 50;
    std::cout << "DiamondTrap constructor called." << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
    std::cout << "DiamondTrap " << this->name << " attack " << target << ", causing " << this->attckDamage << " points of damage!" << std::endl;
}
