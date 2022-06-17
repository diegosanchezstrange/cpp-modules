#ifndef DIAMONTRAP_H
#define DIAMONTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap
{
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string const name);
    void attack(std::string const & target);
};


#endif //DIAMONTRAP_H
