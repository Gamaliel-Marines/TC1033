#include <iostream>
#include "Triangle.cpp"


using namespace std;

int main()
{
    
    cout<<endl;
    Triangle t1;
    cout<<endl;

    double x1;
    double x2;
    double x3;

    double y1;
    double y2;
    double y3;

    cout<<"Ingrese x1: "<<endl;
    cin>>x1;

    cout<<"Ingrese y1: "<<endl;
    cin>>y1;


    cout<<"Ingrese x2: "<<endl;
    cin>>x2;

    cout<<"Ingrese y2: "<<endl;
    cin>>y2;


    cout<<"Ingrese x3: "<<endl;
    cin>>x3;

    cout<<"Ingrese y3: "<<endl;
    cin>>y3;

    
    Point p1;
    
    p1.setX(x1);
    p1.setY(y1);

    Point p2;
    
    p2.setX(x2);
    p2.setY(y2);

    Point p3;
    
    p3.setX(x3);
    p3.setY(y3);

    Triangle t2;

    t2.set_vertex1(p1);
    t2.set_vertex2(p2);
    t2.set_vertex3(p3);

    /*
    //t2.get_vertex1();
    cout<<endl;
    //t2.get_vertex2();
    cout<<endl;
    //t2.get_vertex3();
    cout<<endl;
    */

    cout<<"The triangle is composed by these vertexes: [ ("<<p1.getX()<<","<<p1.getY()<<") , ("<<p2.getX()<<","<<p2.getY()<<") , ("<<p3.getX()<<","<<p3.getY()<<") ]"<<endl;
    cout<<endl;

    cout<<"The perimeter is: "<<t2.perimeter()<<endl;
    cout<<endl;

    cout<<"The area is: "<<t2.area()<<endl;
    cout<<endl;

    
    
    
    return 0;
}