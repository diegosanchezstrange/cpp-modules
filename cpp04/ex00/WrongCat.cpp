//
// Created by Diego Sanchez strange on 17/06/2022.
//

#include "WrongCat.h"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Default WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Default WrongCat deconstructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj): WrongAnimal(obj)
{
    this->type = obj.type;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    this->type = obj.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}
