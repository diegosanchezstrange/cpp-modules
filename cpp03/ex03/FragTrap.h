#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.h"

class FragTrap: virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string const name);
    ~FragTrap();
    void attack(std::string const & target);
    void highFivesGuys(void);

};


#endif //FRAGTRAP_H
