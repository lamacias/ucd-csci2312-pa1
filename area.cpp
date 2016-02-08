// Implementation for computeArea function
// Created by Lauren Macias


#include <cmath>
#include "Point.h"



double computeArea(const Point &a, const Point &b, const Point &c)
{
    double sideLength1, sideLength2, sideLength3, semiperimeter, difference1, difference2, difference3, underSqrt, area;
    
    sideLength1 = a.distanceTo(a, b);
    sideLength2 = b.distanceTo(b, c);
    sideLength3 = c.distanceTo(c, a);
    
    semiperimeter = 0.5 * (sideLength1 + sideLength2 + sideLength3);
    
    difference1 = semiperimeter - sideLength1;
    difference2 = semiperimeter - sideLength2;
    difference3 = semiperimeter - sideLength3;
    
    underSqrt = semiperimeter * difference1 * difference2 * difference3;
    
    area = sqrt(underSqrt);
    
    return area;
}
