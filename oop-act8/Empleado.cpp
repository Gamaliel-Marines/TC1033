#include "Empleado.h"
#include <string.h>
#include <iostream>

using namespace std;


Empleado::Empleado()
{
    nombreEmp = " - "; 
    sueldoEmp = 0; 
    //cumpleAniosEmp; 
}

Empleado::Empleado(string nombreEmp1, float sueldoEmp1, Fecha cumpleAniosEmp1)
{
    nombreEmp = nombreEmp1; 
    sueldoEmp = sueldoEmp1; 
    cumpleAniosEmp = cumpleAniosEmp1; 
}

string Empleado::getNombreEmp()
{
    return nombreEmp;
}


float Empleado::getSueldoEmp()
{
    return sueldoEmp;
}


Fecha Empleado::getFecha()
{
    return cumpleAniosEmp;
}


void Empleado::setNombreEmp(string nombreEmp1)
{
    nombreEmp = nombreEmp1; 

}


void Empleado::setSueldo(float sueldoEmp1)
{
    sueldoEmp = sueldoEmp1; 
    
}

void Empleado::setFecha(Fecha fecha1)
{
    cumpleAniosEmp = fecha1; 
    
}


void Empleado::subeSueldo(float incremento)
{

    float porInc = incremento/sueldoEmp;

    if (porInc <= 0.10 && porInc >= 0.010)
    {
        cout<<"Sueldo amuentado con exito"<<endl;
		sueldoEmp = sueldoEmp + (sueldoEmp * porInc);
        cout<<"El incremento es: "<<incremento<<endl;
        cout<<"El % de incremento es: "<<porInc<<endl;
    }
    else
    {
        cout<<"Porcentaje inválido, no hay incremento"<<endl;
        cout<<"El incremento es: "<<incremento<<endl;
        cout<<"El % de incremento es: "<<porInc<<endl;
    }

}


