#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default Animal deconstructor called." << std::endl;
}

Animal::Animal(const Animal &obj)
{
    this->type = obj.type;
}

Animal &Animal::operator=(const Animal &obj)
{
    this->type = obj.type;
    return (*this);
}

std::string Animal::getType() const { return (this->type); }
