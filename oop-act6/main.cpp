// Libreria y archivo de la clase cpp
#include <iostream>
#include "Point.cpp"

using namespace std;

int main()
{

    Point p1;

    cout<<"x es: "<<p1.getX()<<endl;
    cout<<"y es: "<<p1.getY()<<endl;
    cout<<endl;
    cout<<endl;

    Point p2;
    
    p2.setX(0);
    p2.setY(3);
    
    cout<<"x2 es: "<<p2.getX()<<endl;
    cout<<"y2 es: "<<p2.getY()<<endl;
    cout<<endl;

    cout<<"La distancia entre el p1 y p2 es: "<<p2.distance(p1)<<endl;
    cout<<endl;
 


     Point p3;
    
    p3.setX(4);
    p3.setY(0);
    
    cout<<"x3 es: "<<p3.getX()<<endl;
    cout<<"y3 es: "<<p3.getY()<<endl;
    cout<<endl;

    cout<<"La distancia entre el p2 y p3 es: "<<p3.distance(p2)<<endl;
    cout<<endl;
    
    return 0;
}