#include "Triangle.h"
#include <cmath>

using namespace std;

Triangle :: Triangle()
{
    
    Point point1(0,0);
    Point point2(50,30);
    Point point3(25,10);
    
    vertex1 = point1;
    vertex2 = point2;
    vertex3 = point3;

    cout << "The default triangle is composed by the following vertexes: [ ("<<point1.getX()<<","<<point1.getY()<<") , ("<<point2.getX()<<","<<point2.getY()<<") , ("<<point3.getX()<<","<<point3.getY()<<") ]"<<endl;
    
}

Triangle :: Triangle(Point point1, Point point2, Point point3)
{   
    vertex1 = point1;
    vertex2 = point2;
    vertex3 = point3;
}

/*

Point Triangle :: get_vertex1()
{
    return vertex1;
}

Point Triangle:: get_vertex2()
{
    return vertex2;
}

Point Triangle :: get_vertex3()
{
    return vertex3;
}

*/

void Triangle :: set_vertex1(Point point1)
{
    vertex1 = point1;
}

void Triangle :: set_vertex2(Point point2)
{
    vertex2 = point2;
    
}

void Triangle :: set_vertex3(Point point3)
{
    vertex3 = point3;
    
}


double Triangle :: perimeter()
{
    double perimeter;
    perimeter = vertex2.distance(vertex1) + vertex3.distance(vertex2) + vertex1.distance(vertex3);

    return perimeter;
 
 }

double Triangle :: area()
{
    double semi_perimeter;
    double a;
    double b;
    double c;
    double area;

    a = vertex2.distance(vertex1);
    b = vertex3.distance(vertex2);
    c=  vertex1.distance(vertex3);

    semi_perimeter = (a+b+c) / 2;

    area = sqrt(semi_perimeter * (semi_perimeter-a) * (semi_perimeter-b)*(semi_perimeter-c));

    return area;
}


//____________________________________________________________________________________________

/*

void Triangle:: set_vertex1(Point p1)
{
    vertex1.setX(p1.getX());
}

*/

