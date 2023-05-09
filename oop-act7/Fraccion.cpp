// Gamaliel Marines Olvera A01708746

// Librerias usadas en el codigo
#include "Fraccion.h"
#include <sstream>
#include <string.h>

using namespace std;

// objeto de tipo Fraccion con valores default
Fraccion::Fraccion()
{
    num = 1;
    den = 2;
}

// objeto de tipo fraccion que resibe parametros de tipo entero que son sus nuevos valores
Fraccion::Fraccion(int _num, int _den)
{
    num = _num;
    den = _den;
}

// metodo getter de tipo entero
int Fraccion::get_num()
{
    return num;
}

// metodo getter de tipo entero
int Fraccion::get_den()
{
    return den;
}

// metodo setter
void Fraccion::set_num(int _num)
{
    num = _num;
}

// metodo setter
void Fraccion::set_den(int _den)
{
    den = _den;
}

// metodo de tipo double para calcular del valor del obj en decimales
double Fraccion::calc_val_real()
{

    double decimal_value;

    decimal_value = (double) num / (double) den;

    return decimal_value;
}

// metodo de tipo Fraccion para calcular la suma de fracciones
Fraccion Fraccion::suma_fracciones(Fraccion fraccion2)
{
    
    // se crean variables de tipo entero para guardar el valor del nuevo num y den
    int new_num;
    int new_den;

    //stringstream res;

    new_num = (num * fraccion2.get_den()) + (fraccion2.get_num() * den);
    new_den = (den * fraccion2.get_den());

    //res<<"La suma de las fracciones es: "<<new_num<<"/"<<new_den<<endl;

    //return res.str();

    // se crea un objeto (una nueva fraccion) al cal se le designan los nuevos num y den
    Fraccion fraccion_res;

    fraccion_res.set_num(new_num);
    fraccion_res.set_den(new_den);

    // se regresa la fraccion con los nuevos valores desoues de la suma
    return fraccion_res;
}


// metodod de tipo string que imprime el valor de el obj en forma de fraccion y de decimal
string Fraccion::imprime_fraccion()
{
    // stringstream convierte lo que resibe en datos de tipo string
    // variable que guarda la info el objeto en forma de fraccion
    stringstream res;
    
    // varible donde se guarda el valor de la fraccion en decimales
    float res_decimal;
    //res_decimal =  (float) num / (float) den;
    

    res<<"La fraccion es: "<<num<<"/"<<den<<endl;
    res<<"La fraccion en decimales es: "<<calc_val_real()<<endl;

    return res.str();
}

Fraccion::~Fraccion()
{}
