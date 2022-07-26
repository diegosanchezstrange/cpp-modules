#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string const name);
    ~FragTrap();
    FragTrap(FragTrap &obj);
    FragTrap &operator=(FragTrap &obj);
    void attack(std::string const & target);
    void highFivesGuys(void);

};


#endif //FRAGTRAP_H
