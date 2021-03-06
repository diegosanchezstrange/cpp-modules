#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string const name);
    ~ScavTrap();
    void attack(std::string const & target);
    void guardGate();
};

#endif //SCAVTRAP_H
