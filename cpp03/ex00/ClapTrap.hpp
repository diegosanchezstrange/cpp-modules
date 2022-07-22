//
// Created by Diego Sanchez strange on 17/06/2022.
//

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{

private:
    std::string name;
    int         hitpoints;
    int         energypoints;
    int         attckDamage;

public:
    ClapTrap();
    ClapTrap(std::string const name);
    ~ClapTrap();
    ClapTrap(ClapTrap &obj);
    ClapTrap &operator=(ClapTrap &obj);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif //CLAPTRAP_H
