#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"
#include <iostream>

class ScavTrap: virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string const name);
    ~ScavTrap();
    void attack(std::string const & target);
    void guardGate();
};

#endif //SCAVTRAP_H
