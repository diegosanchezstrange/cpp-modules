#include "Fixed.h"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int num)
{
    //std::cout << "Integer constructor called" << std::endl;
    this->value = num << this->fraction;
}

Fixed::Fixed(const float num)
{
    //std::cout << "Float constructor called" << std::endl;
    this->value = roundf(num * (1 << this->fraction));
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    //std::cout << "Copy constructor called" << std::endl;
    this->value = fixed.value;
}

int Fixed::getRawBits() const
{
    //std::cout << "GetRawBits member function called" << std::endl;
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

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
   if (obj1.toFloat() > obj2.toFloat())
       return (obj1);
    return (obj2);
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1.toFloat() > obj2.toFloat())
        return (obj1);
    return (obj2);
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if (obj1.toFloat() < obj2.toFloat())
        return (obj1);
    return (obj2);
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1.toFloat() < obj2.toFloat())
        return (obj1);
    return (obj2);
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    //std::cout << "Assignation operator called" << std::endl;
    this->value = fixed.getRawBits();

    return (*this);
}

Fixed& Fixed::operator++()
{
    ++(this->value);
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed last(*this);

    ++(this->value);

    return (last);
}

Fixed& Fixed::operator--()
{
    --(this->value);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed last(*this);

    --(this->value);

    return (last);
}

bool Fixed::operator==(const Fixed &rhs) const {
    return value == rhs.value;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return !(rhs == *this);
}

bool Fixed::operator<(const Fixed &rhs) const {
    return rhs.getRawBits() > this->value;
}

bool Fixed::operator>(const Fixed &rhs) const {
    return rhs.getRawBits() < this->value;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return rhs.getRawBits() <= this->value;
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return rhs.getRawBits() >= this->value;
}

Fixed Fixed::operator+(const Fixed &obj) const
{
    Fixed sol(this->toFloat() + obj.toFloat());
    return (sol);
}

Fixed Fixed::operator-(const Fixed &obj) const
{
    Fixed sol(this->toFloat() - obj.toFloat());
    return (sol);
}

Fixed Fixed::operator*(const Fixed &obj) const
{
    Fixed  sol(this->toFloat() * obj.toFloat());
    return (sol);
}

Fixed Fixed::operator/(const Fixed &obj) const
{
    Fixed sol(this->toFloat() / obj.toFloat());
    return (sol);
}

std::ostream & operator<<(std::ostream &out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}
