#include "Point.hpp"

float sign(Point const a, Point const b, Point const c)
{
    return ((a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

    float d1 = sign(point, a, b);
    float d2 = sign(point, b, c);
    float d3 = sign(point, c, a);

    bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
