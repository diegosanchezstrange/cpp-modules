//
// Created by Diego Sanchez strange on 17/06/2022.
//

#ifndef POINT_H
#define POINT_H

#include "Fixed.h"

class Point
{

private:
    Fixed   x;
    Fixed   y;
public:
    Point();
    ~Point();
    Point(const Point &obj);
    Point(const float x, const float y);
    Point&  operator=(const Point &obj);
    float   getX(void) const;
    float   getY(void) const;

};


#endif //POINT_H
