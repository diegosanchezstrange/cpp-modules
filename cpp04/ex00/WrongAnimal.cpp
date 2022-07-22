#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default WrongAnimal deconstructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    this->type = obj.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    this->type = obj.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Default WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const { return (this->type); }
