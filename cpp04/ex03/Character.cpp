#include "Character.hpp"

Character::Character()
{
    this->num = 0;
}

Character::~Character() {}

Character::Character(const std::string &name)
{
    this->name = name;
    this->num = 0;
}

Character::Character(const Character &obj)
{
    this->num= obj.num;
    this->name = obj.name;
    for (int i = 0; i < this->num; i++)
    {
        this->materias[i] = obj.materias[i]->clone();
    }
}

Character &Character::operator=(const Character &obj)
{
    this->num= obj.num;
    this->name = obj.name;
    for (int i = 0; i < this->num; i++)
    {
        this->materias[i] = obj.materias[i]->clone();
    }
    return (*this);
}

const std::string &Character::getName() const { return (this->name); }

void Character::equip(AMateria *m)
{
    if (this->num == 3)
    {
        for (int i = 0 ; i < 4; i++)
        {
            if (!this->materias[this->num])
                this->materias[this->num] = m;
        }
    }
    this->materias[this->num] = m;
    this->num++;
}

void Character::unequip(int idx)
{
    if (idx > 3)
        return ;
    this->materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx > 3)
        return ;
    if (this->materias[idx])
        this->materias[idx]->use(target);
}
