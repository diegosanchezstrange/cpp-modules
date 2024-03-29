//
// Created by Diego Sanchez strange on 17/06/2022.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

ScavTrap::ScavTrap(ScavTrap &obj)
{
    this->name = obj.name;
    std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &obj)
{
    this->name = obj.name;
    return (*this);
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attckDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap in Gate keeper mode" << std::endl;
}
