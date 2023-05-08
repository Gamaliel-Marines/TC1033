// libreria
#include <string.h>

using namespace std;

class Alumno
{
	// atributos de la clase (designados como variables) privados  
    private:
      string matricula;
      string nombre;
      int edad;
      string carrera;
		
	
    // metodos de la clase (designados como funciones) publicos  
    public:
		  Alumno();
		
      Alumno(string _matricula, string _nombre, int _edad, string _carrera);
  
      string get_matricula();
  
      string get_nombre();
  
      int get_edad();
  
      string get_carrera();
  
      void set_matricula(string _matricula);
  
      void set_nombre(string _nombre);
  
      void set_edad(int _edad);
  
      void set_carrera(string _carrera);
  
      void imprime_alumno();
  
      int cumpleanios();
};
