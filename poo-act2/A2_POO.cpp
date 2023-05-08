// A01708746 - Gamaliel Marines Olvera

// Librerias
#include <iostream>
#include <random>
#include <fstream>

// Namespace
using namespace std;

// Función para generar números random.
int generateRanomNumber(int min, int max)
{
    // Genera el número aleatorio.
    int numero_random = (rand() %(max - min + 1)) + min;
    // Print para probar que se hayan generado correctamente el número aleatorio.
    //cout<<numero_random;
    
    // Regresa el número aleatorio.
    return numero_random;
}


/*
   Algoritmo Funcion ImprimeArreglo

    1. Se crea la funcion "imprimeArreglo"
    2. Se ingresan los parametros de la funcion: arreglo[] y el tamano del arreglo
    3. Se utiliza el ciclo "for" para recorrer cada uno de los elementos del arreglo e imprimirlos
    4. Se utiliza condicionales "if" para cubrir los escenarios en que el arreglo este vacio y si sí tiene elementos
    5. Se manda a llamar la funcion en la funcion main junto con sus parametros e imprime el arreglo con todos sus elementos
 
 */




// Función para imprimir arreglo.
void imprimeArreglo(int tamano_arreglo, int arreglo[])
{
    // Ciclo para imprir cada elemento del arreglo.
    for(int i = 0; i < tamano_arreglo; i++)
    {
        // En caso de que no sea el último elemento del arreglo.
        if(i != tamano_arreglo -1)
        {
            cout<<arreglo[i]<<", ";   
        }
        // En caso de que sea el último elemento del arreglo.
        if(i == tamano_arreglo -1)
        {
            cout<<arreglo[i]<<".\n";   
        }
    }
}


/*
   Algoritmo Funcion Promedio

    1. Se crea la funcion "promedio"
    2. Se ingresan los parametros de la funcion: arreglo[] y el tamano del arreglo
    3. Se crea una variable donde se almacena la suma de los elementos del arreglo: suma_elementis_arreglo
    4. Se crea una variable donde se almacenara el promedio del arreglo: primedio
    5. Se Utuliza el ciclo "for" para recorrer todos los elementos del arreglo
    6. Se calcula el promedio: promedio = num 1 + num 2 + ... + num n / n
    7. Se manda a llamar la funcion en la funcion main junto con sus parametros y se muestra el resultado
 
 */

// Función para sacar el promedio de los elementos de un arreglo.
int promedio(int tamano_arreglo, int arreglo[])
{
    // Variables
    int suma_elementos_arreglo = 0;
    int promedio;
    
    // Ciclo para sumar todos los elementos del arreglo.
    for(int i = 0; i < tamano_arreglo; i++)
    {
        suma_elementos_arreglo = suma_elementos_arreglo + arreglo[i];
    }
    
    // La suma de los elementos del arreglo lo divide entre el
    // tamaño del arreglo y lo asigna a la variable promedio.
    promedio = suma_elementos_arreglo / tamano_arreglo;
    
    // Regresa el promedio
    return promedio;
}


/*
   Algoritmo Funcion Menor

    1. Se crea la funcion "menor"
    2. Se ingresan los parametros de la funcion: arreglo[] y el tamano del arreglo
    3. Se crea una variable donde se almacena un elemento del arreglo y se le designa un valor: int menor_elemento = arreglo[0]
    4. Se Utuliza el ciclo "for" para recorrer todos los elementos del arreglo
    5. Se comparan los valores del arreglo con la variable "menor_elemento" y si el valor del arreglo entonces se le designa ese nuevo valor a la vaiable
    6. Se recorre todo el arreglo hasta encontrar el menor valor
    7. Se manda a llamar la funcion en la funcion main junto con sus parametros y se muestra el resultado
 
 */


// Función para sacar el menor elemento de los elementos de un arreglo.
int menor(int tamano_arreglo, int arreglo[])
{
    // Variable para guardar el menor valor del arreglo.
    int menor_elemento;
    
    // Se empieza el valor menor con el primer elemento del arreglo.
    menor_elemento = arreglo [0];
    
    // Ciclo para evaluar cada elemento del arreglo.
    for(int i = 0; i < tamano_arreglo; i++)
    {
        // Compara el valor menor actual con el valor actual del arreglo.
        if(arreglo[i] < menor_elemento)
        {
            menor_elemento = arreglo[i];
        }
    }
    
    // Regresa el valor menor del arreglo.
    return menor_elemento;
}

/*
   Algoritmo Funcion Guardar Arreglo

    1. Se crea la funcion "guardarArreglo"
    2. Se ingresan los parametros de la funcion: arreglo[] y el tamano del arreglo
    3. Se abre archivo: "arichivo.open" y el nombre del archivo >> archivo.open("archivo.txt");
    4. Se utuliza condicionales "if" por si el archivo falla en abrirse
    5. Se utiliza un ciclo "for" para recorrer cada elemento del arreglo e imprimirlos en el archivo
    6. Se recorre todo el arreglo hasta terminar de imprimir cada elemento de este en el archivo entonces se cierra el archivo:  archivo.close();
    7. Se manda a llamar la funcion en la funcion main junto con sus parametros (como es una funcion "void" no se muestra algun resultado)
 
 */

// Función para guardar el arreglo en un archivo.
void guardarArreglo(int tamano_arreglo, int arreglo[])
{
    ofstream archivo;
    
    // Abre el archivo
    archivo.open("archivo.txt");
    
    // Verifica que el archivo se haya podido abrir.
    if(archivo.fail())
    {
        // Imprime mensaje de error en caso de fallo.
        cout<<"Error al abrir el archivo";
     }
     else
     {
        archivo<<"Arreglo: ";
        for (int i = 0; i < tamano_arreglo; i++)
        {
            if(i != tamano_arreglo -1)
            {
                archivo<<arreglo[i]<<", ";   
            }
            // En caso de que sea el último elemento del arreglo.
            if(i == tamano_arreglo -1)
            {
                archivo<<arreglo[i]<<".\n";   
            }
        }
        archivo.close();
     }
     
}

/*
   Algoritmo Funcion Menu

    1. Se crea la funcion "menu"
    2. Se ingresan las opciones de nuestro programa
    3. Se imprimen cada opcion para que el usuario elija la opcion deseada: cout<<--la opcion--;
    4. Se manda a llamar la funcion en la funcion main, se muestra en la pantalla las opciones
 
 */

// Funcion menu para desplegar las diferentes opciones.
void menu()
{
    cout<<"1. Imprimir Arreglo\n";
    cout<<"2. Promedio del Arreglo\n";
    cout<<"3. Menor Elemento del Arreglo\n";
    cout<<"4. Guardar Arreglo en Archivo\n";
    cout<<"5. Salir (Terminar Programa)\n";
    
}


/*
   Algoritmo Funcion Main

    1. Se crea la funcion "Main"
    2. Se ingresan los valores de los parametros de las funciones que se van a mandar a llamar mas adelante
    3. Se manda a llamar la funcion menu
    4. Se utuliza un ciclo "while" para evitar que se cicle infinitamente nuestro programa
    5. Se utiliza  condicionales "if" adentro del ciclo "while" para mandar a llamar a una funcion dependiendo la opcion seleccionada por el usuario
    6. Se crea una opcion para salir del programa, se cierra el ciclo
 
 */


// Main
int main()
{
    // Variable para el tamaño del arreglo.
    int tamano_arreglo;
    
    // Pide al usuario el tamaño del arreglo y lo almacena en una variable.
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tamano_arreglo;
    
    // Arreglo
    int arreglo[tamano_arreglo];
    //int arreglo_prueba[] = {5, 2, 1, 4, 3};
    
    // Ciclo para llenar el arreglo con valores aleatorios entre 1 y 20.
    for(int i = 0; i < tamano_arreglo; i++)
    {
        arreglo[i] = generateRanomNumber(1, 20);
    }

    // Variable para guardar la opción seleccionada del menu.
    int opcion_menu;
    
    // Función para imprimir menu.
    menu();
    
    // Se ingresa una opción del menu.
    cout<<"Seleccione una opcion: ";
    cin>>opcion_menu;
    
    // Ciclo para imprimir menu y mantener ejecución del programa mientras
    // no se indique salir del programa.
    while(opcion_menu != 5)
    {
        if(opcion_menu == 1)
        {
            //cout<<tamano_arreglo;
            imprimeArreglo(tamano_arreglo, arreglo);
        }
        if(opcion_menu == 2)
        {
            int promedio_arreglo = promedio(tamano_arreglo, arreglo);
            cout<<promedio_arreglo<<"\n";
        }
        if(opcion_menu == 3)
        {
           int menor_elemento = menor(tamano_arreglo, arreglo);
            cout<<menor_elemento<<"\n";
        }
        if(opcion_menu == 4)
        {
            guardarArreglo(tamano_arreglo, arreglo);
        }
        if(opcion_menu == 5)
        {
            cout<<"Se terminó el programa con exito.";
            return 0;
        }
        
        // Imprime salto de linea y el menu.
        cout<<"\n";
        menu();
        
        // Se ingresa una opción del menu.
        cout<<"Seleccione una opcion: ";
        cin>>opcion_menu;
    }
    
    cout<<"Se terminó el programa con exito.";
    return 0;
}
