#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
    this->name = name;
}

HumanA::~HumanA() {}

void HumanA::attack()
{
    std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}
