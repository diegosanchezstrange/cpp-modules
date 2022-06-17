#include "Point.h"

Point::Point()
{
    this->x = Fixed();
    this->y = Fixed();
}

Point::~Point() {}

Point::Point(const Point &obj)
{
    this->x.setRawBits(obj.x.getRawBits());
    this->y.setRawBits(obj.y.getRawBits());
}

Point::Point(const float x, const float y)
{
    this->x = Fixed(x);
    this->y = Fixed(y);
}

Point &Point::operator=(const Point &obj)
{
    this->x.setRawBits(obj.x.getRawBits());
    this->y.setRawBits(obj.y.getRawBits());

    return (*this);
}

float Point::getX() const { return (this->x.toFloat()); }

float Point::getY() const { return (this->y.toFloat()); }

