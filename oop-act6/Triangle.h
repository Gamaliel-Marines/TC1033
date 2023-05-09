// librerias
#include <string.h>
#include "Point.cpp"

using namespace std;

class Triangle
{
	// atributos de la clase (designados como variables) privados  
    private:
		
        Point vertex1;
        Point vertex2;
        Point vertex3;
		
	
    // metodos de la clase (designados como funciones) publicos  
    public:
		
        Triangle();

        Triangle(Point, Point, Point);
        
		double perimeter();

        double area();

        /* 
        
        Point get_vertex1(); 

        Point get_vertex2();

        Point get_vertex3();

        */

        void set_vertex1(Point);

        void set_vertex2(Point);

        void set_vertex3(Point);

};

// formula de Heron

        /*
        
        A = sqrt(s(s-a)(s-b)(s-c))

        s = semi-perimetro = perimetro/2

        */

