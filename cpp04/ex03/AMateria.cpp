#include "AMateria.h"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(const std::string &type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &obj)
{
    this->type = obj.type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    std::cout << "UNDEFINED MATERIA" << std::endl;
}

const std::string &AMateria::getType() const { return (this->type); }
