#ifndef DIAMONTRAP_H
#define DIAMONTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string const name);
    DiamondTrap(DiamondTrap &obj);
    DiamondTrap &operator=(DiamondTrap &obj);
    void attack(std::string const & target);
};


#endif //DIAMONTRAP_H
