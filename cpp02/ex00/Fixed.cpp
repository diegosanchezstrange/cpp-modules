#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = fixed.value;
}

int Fixed::getRawBits() const
{
    std::cout << "GetRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(const int raw)
{
    this->value = raw;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = fixed.getRawBits();

    return (*this);
}
