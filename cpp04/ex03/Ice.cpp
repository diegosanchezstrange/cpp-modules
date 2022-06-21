#include <iostream>
#include "Ice.h"
#include "ICharacter.h"

Ice::Ice(): AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &obj): AMateria(obj) {}

Ice &Ice::operator=(const Ice &obj)
{
    this->type = obj.type;
    return (*this);
}

AMateria *Ice::clone() const
{
    AMateria * newMateria = new Ice();
    return (newMateria);
}

void Ice::use(ICharacter &target)
{
    std::cout << "*shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
