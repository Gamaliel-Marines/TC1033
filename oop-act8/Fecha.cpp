#include <string.h>
#include "Fecha.h"

using namespace std;


Fecha::Fecha()
{
    dia = 0; 
    mes = 0;   
}

Fecha::Fecha(int dia1, int mes1)
{
    dia = dia1; 
    mes = mes1;
}

int Fecha::getDia()
{
    return dia;
} 

int Fecha::getMes()
{
    return mes;
}

void Fecha::setDia(int dia1)
{
    dia = dia1; 
}

void Fecha::setMes(int mes1)
{
    mes = mes1; 

}
