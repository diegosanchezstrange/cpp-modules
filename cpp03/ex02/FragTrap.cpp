//
// Created by Diego Sanchez strange on 17/06/2022.
//

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->hitpoints = 100;
    this->attckDamage = 30;
    this->energypoints = 100;
    std::cout << "Default FragTrap constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Default FragTrap destructor called." << std::endl;
}

FragTrap::FragTrap(std::string const name)
{
    this->name = name;
    this->hitpoints = 100;
    this->attckDamage = 30;
    this->energypoints = 100;
    std::cout << "FragTrap constructor called." << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << this->name << " attack " << target << ", causing " << this->attckDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Give me five !!!" << std::endl;
}

