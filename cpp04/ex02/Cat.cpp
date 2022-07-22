//
// Created by Diego Sanchez strange on 17/06/2022.
//

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
	this->brain = new Brain();
    std::cout << "Default Cat constructor called." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Default Cat deconstructor called." << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &obj): Animal(obj)
{
	this->brain = new Brain();
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->Animal::operator=(obj);

    this->type = obj.type;
	*this->brain = *obj.brain;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}

Brain *Cat::getBrain() { return (this->brain); }