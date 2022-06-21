//
// Created by Diego Sanchez strange on 17/06/2022.
//

#include "Dog.h"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Default Dog constructor called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Default Dog deconstructor called." << std::endl;
}

Dog::Dog(const Dog &obj): Animal(obj)
{
    this->type = obj.type;
}

Dog &Dog::operator=(const Dog &obj)
{
    this->type = obj.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}
