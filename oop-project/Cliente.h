#include "Cuenta.cpp"
#include "Pedido.cpp"
#include <sstream>
#include <string.h>

using namespace std;

class Cliente
{
    private:
        string nombre;
        string apellido_paterno;
        string apellido_materno; 
        int edad;
        string nacionalidad;
        string direccion; 
        Cuenta cuenta; 
        Pedido pedido;

    public:
        Cliente();
        Cliente(string, string, string, int, string, string, Cuenta, Pedido);

        string get_nombre();
        string get_apellido_paterno();
        string get_apelliod_materno(); 
        int get_edad(); 
        string get_nacionalidad();
        string get_direccion(); 
        //string get_cuenta_bancaria(); 

        void set_nombre(string nombre1);
        void set_apellido_paterno(string);
        void set_apelliod_materno(string);
        void set_edad(int edad1); 
        void set_nacionalidad(string nacionalidad1);
        void set_direccion(string direccion1);
        void set_cuenta_bancaria(Cuenta cuenta1); 
        void set_pedido(Pedido pedido1); 

        void generar_deposito(double);
        void pagar_pedido(Pedido);
         

        string imprimir_cliente(); 

        string imprimir_pedido(); 

        string imprimir_cuenta(); 

};