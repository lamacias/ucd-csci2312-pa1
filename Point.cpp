// Point Class Implementation File
// Created by Lauren Macias


#include <cmath>
#include "Point.h"


//Constructors
Point::Point()
{
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

Point::Point(double initial_x, double initial_y)
{
    x = initial_x;
    y = initial_y;
    z = 0.0;
}

Point::Point(double initial_x, double initial_y, double initial_z)
{
    x = initial_x;
    y = initial_y;
    z = initial_z;
}


//Mutator Methods
void Point::setX(double newX)
{
    x = newX;
}

void Point::setY(double newY)
{
    y = newY;
}

void Point::setZ(double setZ)
{
    z = setZ;
}


//Accessor Methods
double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

double Point::getZ() const
{
    return z;
}

double Point::distanceTo(const Point& p2, const Point& p1) const
{
    double xDifference, yDifference, zDifference, xSquared, ySquared, zSquared, sum, distance;
    
    xDifference = p2.getX() - p1.getX();
    yDifference = p2.getY() - p1.getY();
    zDifference = p2.getZ() - p1.getZ();
    
    xSquared = pow(xDifference, 2.0);
    ySquared = pow(yDifference, 2.0);
    zSquared = pow(zDifference, 2.0);
    
    sum = xSquared + ySquared + zSquared;
    
    distance = sqrt(sum);
    
    
    return distance;
}

