#include <iostream>
#include "Weapon.h"

#ifndef HUMANA_H
#define HUMANA_H

class HumanA
{

	private:
		std::string name;
		Weapon&		weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
        void attack();
};

#endif //HUMANA_H
