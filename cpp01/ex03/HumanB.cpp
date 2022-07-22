#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (!this->weapon)
        std::cout << this->name << " has no weapon" << std::endl;
    std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}
