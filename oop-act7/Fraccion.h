// Gamaliel Marines Olvera A01708746

// Librerias usadas en el codigo
#include<string>

using namespace std;

// se crea la clase Fraccion
class Fraccion
{
    // los atributos (designados como variables) del objeto Fraccion  se declaran privados
    private:

        int num;

        int den;

    // los metodos (designados como funciones) del objeto con los cuales se modifican los valores de los atributos
    // se declaran como publicos
    public:
        
        // se crea un objeto con valores por defualt
        Fraccion();


        // se crea un objeto que resiva parametros y designe el valor de esos parametros a los atributos del obj
        Fraccion(int _num, int _den);

        int get_num();

        int get_den();
        
        void set_num(int _num);

        void set_den(int _den);


        double calc_val_real();

        Fraccion suma_fracciones(Fraccion);

        string imprime_fraccion();

        ~Fraccion();

};