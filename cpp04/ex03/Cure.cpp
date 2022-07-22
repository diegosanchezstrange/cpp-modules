#include <iostream>
#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &obj): AMateria(obj) {}

Cure &Cure::operator=(const Cure &obj)
{
    this->type = obj.type;
    return (*this);
}

AMateria *Cure::clone() const
{
    AMateria * newMateria = new Cure();
    return (newMateria);
}

void Cure::use(ICharacter &target)
{
    std::cout << "*heals " << target.getName() << " wounds*" << std::endl;
}
