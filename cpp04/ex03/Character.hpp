//
// Created by diego on 19/6/22.
//

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	AMateria    *materias[4];
	std::string name;
    int         num;
public:
	Character();
	~Character();
	Character(std::string const &name);

    Character(Character const &obj);
    Character &operator=(Character const &obj);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif //CHARACTER_H
