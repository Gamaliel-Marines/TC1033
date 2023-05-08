// librerias usadas en programa
#include <iostream>
#include <string.h>
#include "Alumno.cpp"

using namespace std;

// funcion main donde se llaman y se utilizan los metodos de la clase
int main()
{

    // alumno 1 (objeto creado) con los datos default de la clase
    Alumno alumno1;

    cout<<alumno1.get_matricula()<<endl;
    cout<<alumno1.get_nombre()<<endl;
    cout<<alumno1.get_edad()<<endl;
    cout<<alumno1.get_carrera()<<endl;

    
    // alumno 2 con los datos modificados por los metodos de la clase
    Alumno alumno2;
    
    // variables que se utilizaran como parametros de los matodos 

    // variable que guarda la matricula del alumno
    string matricula2;
    cout<<"Ingrese la matricula del alumno: "<<endl;
    cin>>matricula2;
    cout<<endl;

    // variable que guarda el nombre del alumno
    string nombre2;
    cout<<"Ingrese el nombre del alumno: "<<endl;
    cin>>nombre2;
    cout<<endl;

    // variable que guarda la edad del alumno
    int edad2;
    cout<<"Ingrese la edad del alumno: "<<endl;
    cin>>edad2;
    cout<<endl;

    // variable que guarda la carrera del alumno
    string carrera2;
    cout<<"Ingrese la carrera del alumno: "<<endl;
    cin>>carrera2;
    cout<<endl;
    cout<<endl;
    

    
    // con los metodos stters y con los parametros (variables definidas anteriormente) 
    // designamos valores al alumno 2 (objeto creado)
    alumno2.set_matricula(matricula2);
    alumno2.set_nombre(nombre2);
    alumno2.set_edad(edad2);
    alumno2.set_carrera(carrera2);

    /*

    metodos getters...
    
    SIRVE PARA VERIFICAR QUE LOS METODOS SETTERS FUNCIONEN ADECUADAMENTE
    
    cout<<"La matricula del alumno es: "<<alumno2.get_matricula()<<endl;
    cout<<"El nombre del alumno es: "<<alumno2.get_nombre()<<endl;
    cout<<"La edad del alumno es: "<<alumno2.get_edad()<<endl;
    cout<<"La carrera del alumno es: "<<alumno2.get_carrera()<<endl;

    */
    
    
    //metodo que muestra los datos del objeto (alumno 2)
    alumno2.imprime_alumno();
    cout<<endl;

    // metodo que muestra la edad + 1, el valor despues de un cumpleanios
    alumno2.cumpleanios();
    alumno2.imprime_alumno();

    return 0;
}