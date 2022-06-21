//
// Created by diego on 19/6/22.
//

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include "AMateria.h"

class ICharacter
{
public:
	virtual ICharacter() {}
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


#endif //ICHARACTER_H
