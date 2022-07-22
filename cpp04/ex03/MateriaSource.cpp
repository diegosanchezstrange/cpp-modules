#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->num = 0;
}

MateriaSource::~MateriaSource(){}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    this->num= obj.num;
    for (int i = 0; i < this->num; i++)
    {
        this->learnedMaterias[i] = obj.learnedMaterias[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    this->num= obj.num;
    for (int i = 0; i < this->num; i++)
    {
        this->learnedMaterias[i] = obj.learnedMaterias[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *obj)
{
    if (this->num == 3)
    {
        for (int i = 0 ; i < 4; i++)
        {
            if (!this->learnedMaterias[this->num])
                this->learnedMaterias[this->num] = obj;
        }
    }
    this->learnedMaterias[this->num] = obj;
    this->num++;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->learnedMaterias[i]->getType() == type)
            return (this->learnedMaterias[i]->clone());
    }
    return (0);
}
