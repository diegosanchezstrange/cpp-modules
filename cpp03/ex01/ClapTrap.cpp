#include <iostream>
#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
    this->energypoints = 10;
    this->hitpoints = 10;
    this->attckDamage = 0;
    std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
    this->name = name;
    this->energypoints = 10;
    this->hitpoints = 10;
    this->attckDamage = 0;
    std::cout << "Constructor called with name: " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
    this->name = obj.name;
    std::cout << "Default copy constructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &obj)
{
    this->name = obj.name;
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attckDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->name << " takes " << amount << " hitpoints back!" << std::endl;
}


