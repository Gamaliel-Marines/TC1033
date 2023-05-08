// librerias
#include<string.h>
#include "Alumno.h"

using namespace std;


// definicion de los metodos de la clase

// objeto con valores default
Alumno::Alumno()
{
    matricula = "_";
	nombre = "_";
	carrera = "_";
    edad = 0;
}

// objeto con los datos modificado por medio de los metodos de la clase
Alumno::Alumno(string _matricula, string _nombre, int _edad, string _carrera)
{
    matricula = _matricula;
	nombre = _nombre;
	edad = _edad;
	carrera = _carrera;
}


// definicion del metodo que muestra la matricula del objeto (alumno)
string Alumno::get_matricula()
{
	return matricula;
}

// definicion del metodo que muestra el nombre del objeto (alumno)
string Alumno::get_nombre()
{
	return nombre;
}


// definicion del metodo que muestra la edad del objeto (alumno)
int Alumno::get_edad()
{
	return edad;
}


// definicion del metodo que muestra la carrera del objeto (alumno)
string Alumno::get_carrera()
{
	return carrera;
}


// definicion del metodo que modifica la matricula del objeto (alumno)
void Alumno::set_matricula(string _matricula)
{
	matricula = _matricula;
}

// definicion del metodo que modifica el nombre del objeto (alumno)
void Alumno::set_nombre(string _nombre)
{
	nombre = _nombre;
}

// definicion del metodo que modifica la edad del objeto (alumno)
void Alumno::set_edad(int _edad)
{
	edad = _edad;
}

// definicion del metodo que modifica la carrera del objeto (alumno)
void Alumno::set_carrera(string _carrera)
{
	carrera = _carrera;
}

// definicion del metodo que muestra los datos del objeto (alumno)
void Alumno::imprime_alumno()
{
    
    string datos[4] = {matricula , nombre, to_string(edad), carrera};

	int datos_length = sizeof(datos)/sizeof(datos[0]);

    for(int i = 0; i < datos_length; i++)
    {
        if (i == 0)
		{
			cout<<"La matricula del alumno es: "<<datos[i]<<endl;
		}

		if (i == 1)
		{
			cout<<"El nombre del alumno es: "<<datos[i]<<endl;
		}

		if (i == 2)
		{
			cout<<"La edad del alumno es: "<<datos[i]<<endl;
		}

		if (i == 3)
		{
			cout<<"La carrera del alumno es: "<<datos[i]<<endl;
		}
		
    }
}

// definicion del metodo que añade un año a la edad del objeto (alumno)
int Alumno::cumpleanios()
{
	
    edad = edad + 1;

    cout<<"Cunple_anos, el alumno icrementa 1 ano de edad: "<<edad<<endl;

}
