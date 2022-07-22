//
// Created by Diego Sanchez strange on 17/06/2022.
//

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default Dog constructor called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Default Dog deconstructor called." << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	this->brain = new Brain();
	*this = obj;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->Animal::operator=(obj);

	*this->brain = *obj.brain;
	std::cout << "Dog assignment operator called." << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}

Brain *Dog::getBrain() const { return (this->brain); }
