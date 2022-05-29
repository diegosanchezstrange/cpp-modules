#include "Weapon.h"

#ifndef HUMANB_H
#define HUMANB_H


class HumanB {
    private:
        std::string name;
        Weapon*		weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon& weapon);
};


#endif //HUMANB_H
