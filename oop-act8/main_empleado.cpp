#include "Empleado.cpp"
#include <string>
#include <iostream>

using namespace std;


int main()
{

    Fecha fecha1;

    fecha1.setDia(19);
    fecha1.setMes(5);
    
    Empleado empleado1;

    empleado1.setNombreEmp("Pepe");
    empleado1.setSueldo(100);
    empleado1.setFecha(fecha1);

    cout<<"El nombre es : "<<empleado1.getNombreEmp()<<endl;
    cout<<"El sueldo es de: "<<empleado1.getSueldoEmp()<<endl;
    empleado1.subeSueldo(9);

    cout<<"El nombre es : "<<empleado1.getNombreEmp()<<endl;
    cout<<"El sueldo es de: "<<empleado1.getSueldoEmp()<<endl;

    cout<<endl;
   

    Empleado empleado2("Rocio", 12000, Fecha (1,1));

    cout<<"El sueldo es de: "<<empleado2.getSueldoEmp()<<endl;
    cout<<" El nombre del empleado es: "<<empleado2.getNombreEmp()<<endl;
    cout<<" El cumpleanos del empleado2 es: "<<empleado2.getFecha().getDia()<<"/"<<empleado2.getFecha().getMes()<<endl;
    empleado2.subeSueldo(320);

    return 0;
}