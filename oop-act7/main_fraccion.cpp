// Gamaliel Marines Olvera A01708746

// Librerias usadas en el codigo
#include "Fraccion.cpp"
#include <iostream>
#include <string.h>

using namespace std;

// funcion main, donde se crean objs, se manda a llamar a los metodos y se modifican los valores del los atributos del obj
int main()
{
    // obj con atributos default 
    Fraccion f_default;

    // metodo imprime_fraccion que imprime la fraccion en forma de fraccion y de decimal
    cout<<f_default.imprime_fraccion()<<endl;


    // se crean las variables _num y _den que resibiran un valor entero y seran los nuevos valores de la Fraccion fraccion
    int _num;
    cout<<"Ingrese el numerador: "<<endl;
    cin>>_num;

    int _den;
    cout<<"Ingrese el denominador: "<<endl;
    cin>>_den;

    // se crea un codicional if por si el usuario del programa ingresa un 0 para el valor del denominador de la Fraccion fraccion
    // donde se le pide al usuario ingresar un valor diferente a cero
    if (_den == 0)
    {
        cout<<"Favor de ingresar un numero entero diferente a cero: ";
        cin>>_den;
    }
    
    // se crea la Fraccion fraccion
    Fraccion fraccion;

    // con los metodos setters se le desingan los valores de las variables _num y _den
    fraccion.set_num(_num);
    fraccion.set_den(_den);

    
    // los metodos getters son para comprobar que si se estan pasando de forma correcta los valores del num y del den
    // cout<<"El numerador es: "<<fraccion.get_num()<<endl;
    // cout<<"El denominador es: "<<fraccion.get_den()<<endl;

    cout<<endl;

    cout<<fraccion.imprime_fraccion()<<endl;

    cout<<endl;

    // metodo iprime_fraccion que imprime la fraccion en forma de fraccion y de decimal
    cout<<"El valor en decimales de la fraccion es: "<<fraccion.calc_val_real()<<endl;

    cout<<endl;
    cout<<endl;


    // se desingan nuevos valores a las variables _num y _den para la Fraccion fraccion2
    cout<<"Ingrese el numerador: "<<endl;
    cin>>_num;

    
    cout<<"Ingrese el denominador: "<<endl;
    cin>>_den;

    // se crea un codicional if por si el usuario del programa ingresa un 0 para el valor del denominador de la Fraccion fraccion2
    // donde se le pide al usuario ingresar un valor diferente a cero
    if (_den == 0)
    {
        cout<<"Favor de ingresar un numero entero diferente a cero: ";
        cin>>_den;
    }
    

    // se crea la Fraccion fraccion2
    Fraccion fraccion2;

    // con los metodos setters se le desingan los valores de las variables _num y _den
    fraccion2.set_num(_num);
    fraccion2.set_den(_den);

    // los metodos getters son para comprobar que si se estan pasando de forma correcta los valores del num y del den
    // cout<<"El numerador es: "<<fraccion2.get_num()<<endl;
    // cout<<"El denominador es: "<<fraccion2.get_den()<<endl;

    cout<<endl;

    // metodo imprime_fraccion imprime la fraccion en forma de fraccion y de decimal
    cout<<fraccion2.imprime_fraccion()<<endl;

    cout<<endl;

    // metodo calc_val_real imprime el valor de la fraccion en forma de decimal
    cout<<"El valor en decimales de la fraccion es: "<<fraccion2.calc_val_real()<<endl;

    cout<<endl;
    cout<<endl;

    // se crea la Fraccion fraccion3
    Fraccion fraccion3; 

    // a la Fraccion fraccion3 se le designa el valor de la suma entre las fracciones Fraccion fraccion y Fraccion fraccion2
    fraccion3 = fraccion2.suma_fracciones(fraccion); 

    // metodo imprime_fraccion imprime la fraccion en forma de fraccion y de decimal
    cout<<fraccion3.imprime_fraccion()<<endl;
    
    // se crea la variable N que se designara como el tamano del arreglo
    int N;
    cout<<"Ingrese el tamaño del arreglo: "<<endl;
    cin>>N;

    // se crea un codicional if por si el usuario del programa ingresa un valor menor a 5 para el tamano del arreglo
    // donde se le pide al usuario ingresar un valor igual o menor a 5
    if (N < 5)
    {
        cout<<"Favor de ingresar un numero mayor o igual a 5: ";
        cin>>N;
    }

    // se crea  un arreglo vacio, fracciones[N], de tipo Fraccion 
    Fraccion fracciones[N];

    
    // con un ciclo for se designara un obj por posicion del arreglo
    for (int i = 0; i < N; i++)
    {
        // se crean y designan valores a las variables _num3 y _den3 de tipo double
        double _num3;

        double _den3;

        
        cout<<"Ingrese el numerador de la fraccion: ";
        cin>>_num3;

        cout<<"Ingrese el denumerador de la fraccion: ";
        cin>>_den3;

        // se crea un codicional if por si el usuario del programa ingresa un 0 para el valor del denominador de la Fraccion f
        // donde se le pide al usuario ingresar un valor diferente a 0
        if (_den3 == 0)
        {
        cout<<"Favor de ingresar un numero entero diferente a cero: ";
        cin>>_den3;
        }

        // se crea la Fraccion f que resibe como parametros _num3 y _den3
        Fraccion f(_num3,_den3);

        // se designa el obj(Fraccion f) a una posicion del arreglo
        fracciones[i] = f;
    }


    // con un ciclo for se imprimen y se suman las fracciones del arreglo
    for (int i = 0; i < N; i++)
    {
        // se imprime la fraccion en la posiscion i del arreglo
        cout<<"Fraccion "<<i<<": "<<fracciones[i].get_num()<<"/"<<fracciones[i].get_den()<<endl;

        // // se crea la Fraccion fraccion_suma la cual es la Fraccion donde se guarda el resultado de la suma de las fracciones
        // Fraccion fraccion_suma; 

        // fraccion_suma = fracciones[i].suma_fracciones(fraccion); 

        // // con el metodo imprime_fraccion se imprime el valor de la fraccion en forma de fraccion y de decimal
        // cout<<fraccion_suma.imprime_fraccion()<<endl;
        
    }


    Fraccion fraccion_r; 

    fraccion_r = fracciones[1].suma_fracciones(fracciones[2]);
    fraccion_r = fraccion_r.suma_fracciones(fracciones[4]);

    cout<<fraccion_r.imprime_fraccion()<<endl;


    return 0;
}