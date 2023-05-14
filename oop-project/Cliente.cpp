#include "Cliente.h"
#include <sstream>
#include <string>
#include <iostream>


using namespace std;

    Cliente::Cliente()
    {
        nacionalidad = " - ";
        edad = 0; 
        nombre = " - "; 
        direccion = " - "; 

    }

    Cliente::Cliente(string nombre1, string apellido_paterno1, string apellido_materno1, int edad1, string nacionalidad1, string direccion1, Cuenta cuenta1, Pedido pedido1)
    {
         
        nombre = nombre1;
        apellido_paterno = apellido_paterno1;
        apellido_materno = apellido_materno1; 
        edad = edad1; 
        nacionalidad = nacionalidad1;
        direccion = direccion1; 
        cuenta = cuenta1; 
        pedido = pedido1;
    }

    string Cliente::get_nombre()
    {
        return nombre;
    }

    int Cliente::get_edad()
    {
        return edad;
    }

    string Cliente::get_nacionalidad()
    {
        return nacionalidad;
    }

    string Cliente::get_direccion()
    {
        return direccion;
    }

    // string Cliente::get_cuenta_bancaria()
    // {
    //     return cuenta.imprimir_info_cuenta();
    // }

    void Cliente::set_nombre(string nombre1)
    {
        nombre = nombre1;  
    }


    void Cliente::set_apellido_paterno(string apellido_paterno1)
    {
        apellido_paterno = apellido_paterno1;
    }

    void Cliente::set_apelliod_materno(string apellido_materno1)
    {
        apellido_materno = apellido_materno1;
    }

    void Cliente::set_edad(int edad1)
    {
        edad = edad1; 
    } 

    void Cliente::set_nacionalidad(string nacionalidad1)
    {
        nacionalidad = nacionalidad1;
    }

    void Cliente::set_direccion(string direccion1)
    {
        direccion = direccion1; 
    }   

    void Cliente::set_cuenta_bancaria(Cuenta cuenta1)
    {
        cuenta = cuenta1; 
    }
    
    void Cliente::set_pedido(Pedido pedido1)
    {
        pedido = pedido1;
    }

    void Cliente::generar_deposito(double cantidad_deposito)
    {
        cuenta.sumar_a_estado(cantidad_deposito);
    }
    
    void Cliente::pagar_pedido(Pedido pedido)
    {
        
        if (pedido.get_tipo_pedido() == "fisico")
        {
        cuenta.restar_a_estado(pedido.get_precio_pedido());
        }

        if (pedido.get_tipo_pedido() == "remoto" || pedido.get_tipo_pedido() == "digital")
        {
        cuenta.restar_a_estado(pedido.get_precio_pedido()*0.9);
        }
    } 

     

    string Cliente::imprimir_cliente()
    {
        stringstream info_cliente;

        info_cliente<<"El nombre del cliente es: "<<nombre<<endl;
        info_cliente<<"El apellido paterno del cliente es: "<<apellido_paterno<<endl;
        info_cliente<<"El apellido materno del cliente es: "<<apellido_materno<<endl;
        info_cliente<<"La edad del cliente es: "<<edad<<endl;
        info_cliente<<"La nacionalidad del cliente es: "<<nacionalidad<<endl;
        info_cliente<<"La direccion del cliente es: "<<direccion<<endl;

        return info_cliente.str();
    } 

    string Cliente::imprimir_pedido()
    {
        return pedido.imprimir_info_pedido();
    } 

    string Cliente::imprimir_cuenta()
    {
        return cuenta.imprimir_info_cuenta();
    } 
