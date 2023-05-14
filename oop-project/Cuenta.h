#include <string>
#include<iostream>

using namespace std;

class Cuenta
{

    private: 
    
        string id_cuenta;
        double estado_cuenta;


    public:

        Cuenta();
        Cuenta(string, double);
    
    
        string get_id_cuenta();
        double get_estado_cuenta();


        void set_id_cuenta(string); 
        void set_estado_cuenta(double);

    
        void restar_a_estado(double);
        
    
        void sumar_a_estado(double);

        // void restar_a_estado(double estado_cuenta,double cantidad_retiro1 );
        // void sumar_a_estado(double estado_cuenta, double cantidad_deposito1);

        string imprimir_info_cuenta();
};