#include "Cuenta.h"
#include <sstream>
#include <string.h>

using namespace std;

Cuenta::Cuenta()
{
    id_cuenta = " - ";
    estado_cuenta = 0;
}

Cuenta::Cuenta(string id_cuenta1, double estado_cuenta1)
{
    id_cuenta = id_cuenta1;
    estado_cuenta = estado_cuenta1;
}

    
string Cuenta::get_id_cuenta()
{
    return id_cuenta;
}

double Cuenta::get_estado_cuenta()
{
    return estado_cuenta;
}

void Cuenta::set_id_cuenta(string id_cuenta1)
{
    id_cuenta = id_cuenta1;
}

void Cuenta::set_estado_cuenta(double estado_cuenta1)
{
    estado_cuenta = estado_cuenta1;
}

void Cuenta::restar_a_estado(double cantidad_retiro)
{
    if(cantidad_retiro <= estado_cuenta)
    {
        estado_cuenta = estado_cuenta - cantidad_retiro;
    }

    else
    {
        cout<<"Fondos insuficientes, favor de generar un deposito antes de proceder al pago"<<endl;
    }
    
     
}

void Cuenta::sumar_a_estado(double cantidad_deposito)
{
    estado_cuenta = estado_cuenta + cantidad_deposito;
}

string Cuenta::imprimir_info_cuenta()
{
    stringstream info_cuenta;

    info_cuenta<<"El id de la cuenta es: "<<id_cuenta<<endl;
    info_cuenta<<"El estado de la cuenta es: "<<estado_cuenta<<endl;

    return info_cuenta.str();
}


