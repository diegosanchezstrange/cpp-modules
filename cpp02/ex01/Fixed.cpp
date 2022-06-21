#include "Fixed.h"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int num)
{
    std::cout << "Integer constructor called" << std::endl;
    this->value = num << this->fraction;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(num * (1 << this->fraction));
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

float Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << this->fraction));
}

int Fixed::toInt(void) const
{
    return (this->value >> this->fraction);
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = fixed.getRawBits();

    return (*this);
}
std::ostream & operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
    return (out);
}
