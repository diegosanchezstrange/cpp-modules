#include <iostream>
#include "Fixed.h"
#include "Point.h"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point a = Point(1, 1);
    Point b = Point(4, 2);
    Point c = Point(2, 7);
    Point p = Point(2, 3);

    //std::cout << "X: " << p.getX() << std::endl;
    //std::cout << "Y: " << p.getY() << std::endl;

    std::cout << bsp(a, b, c, p) << std::endl;

    Point p2 = Point(5, 5);

    std::cout << bsp(a, b, c, p2) << std::endl;

    return 0;
}
