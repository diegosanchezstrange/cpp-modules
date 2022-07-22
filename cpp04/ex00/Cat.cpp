//
// Created by Diego Sanchez strange on 17/06/2022.
//

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Default Cat constructor called." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Default Cat deconstructor called." << std::endl;
}

Cat::Cat(const Cat &obj): Animal(obj)
{
    this->type = obj.type;
}

Cat &Cat::operator=(const Cat &obj)
{
    this->type = obj.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}
