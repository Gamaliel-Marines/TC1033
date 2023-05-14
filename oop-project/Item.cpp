#include "Item.h"
#include <sstream>

using namespace std;

Item::Item()
{
    precio_item = 0; 
    nombre_item = "undefined"; 
}

Item::Item(double precio_item1, string nombre_item1)
{
    precio_item = precio_item1; 
    nombre_item = nombre_item1;     
}


double Item::get_precio_item()
{
    return precio_item;
}

string Item::get_nombre_item()
{
    return nombre_item;
}

void Item::set_precio_item(double precio_item1)
{
    precio_item = precio_item1;    
}

void Item::set_nombre_item(string nombre_item1)
{
    nombre_item = nombre_item1; 
}

string Item::imrprimir_info_item()
{
    stringstream info_item;

    info_item<<"El nombre del item es: "<<nombre_item<<endl;
    info_item<<"El precio del item es: "<<precio_item<<endl;

    return info_item.str();
}