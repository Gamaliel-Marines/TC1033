#include "Point.h"
#include<cmath>
Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double x2, double y2)
{
    x = x2;
    y = y2;
}


double Point:: getX()
{
    return x;
}

double Point:: getY()
{
    return y;
}

void Point:: setX(double x2)
{
    x = x2;
}

void Point:: setY(double y2)
{
    y = y2;
}

double Point:: distance(Point point2)
{
    double distance;

    distance = sqrt(pow((point2.getX() - x), 2) + pow((point2.getY() - y), 2));

    return distance;
}