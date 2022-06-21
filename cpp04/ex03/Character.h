//
// Created by diego on 19/6/22.
//

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"

class Character: public ICharacter
{
private:
	AMateria materias[4];
	std::string name;
public:
	Character();
	~Character();
	Character(std::string const &name);
	std::string const & getName() const = 0;
	void equip(AMateria* m) = 0;
	void unequip(int idx) = 0;
	void use(int idx, ICharacter& target) = 0;
};


#endif //CHARACTER_H
