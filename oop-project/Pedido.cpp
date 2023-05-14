#include "Pedido.h"
#include <sstream>
#include <string.h>

using namespace std;

Pedido::Pedido()
{
    num_items = 0; 
    tipo_pedido = " - "; 
    precio_pedido = 0; 
    fecha_entrega = "undefined";
}        
                 
Pedido::Pedido(int num_items1, double precio_pedido1, Item item1[], string fecha_entrega1, string tipo_pedido1)
{
    num_items = num_items1; 
    tipo_pedido = tipo_pedido1; 
    precio_pedido = precio_pedido1; 
    fecha_entrega = fecha_entrega1;
} 

int Pedido::get_num_items()
{
    return num_items;
}

string Pedido::get_tipo_pedido()
{
    return tipo_pedido;
}

double Pedido::get_precio_pedido()
{
    return precio_pedido;
}

string Pedido::get_fecha_entrega()
{
    return fecha_entrega;
}

void Pedido::set_num_items(int num_items1)
{
    num_items = num_items1; 
} 

void Pedido::set_tipo_pedido(string tipo_pedido1)
{
    tipo_pedido = tipo_pedido1; 
} 

void Pedido::set_precio(Item items1[])
{
    double precio_pedido1;
    
    for (int i = 0; i < num_items; i ++)
    {
        precio_pedido1 = precio_pedido1 + items1[i].get_precio_item();
    } 

    precio_pedido = precio_pedido1;
} 

void Pedido::set_fecha_entrega(string fecha_entrega1)
{
    fecha_entrega = fecha_entrega1;
} 

string Pedido::imprimir_info_pedido()
{
    stringstream info_pedido;

    info_pedido<<"La cantidad de items es: "<<num_items<<endl;
    info_pedido<<"El tipo de pedido es: "<<tipo_pedido<<endl;
    info_pedido<<"El precio del pedido es: "<<precio_pedido<<endl;
    info_pedido<<"La fecha de entrega del pedido es: "<<fecha_entrega<<endl;

    return info_pedido.str();
}
