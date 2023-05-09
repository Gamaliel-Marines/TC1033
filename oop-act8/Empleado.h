#include "Fecha.cpp"
#include <string>

using namespace std;

class Empleado
{

private:
    string nombreEmp; 
    float sueldoEmp; 
    Fecha cumpleAniosEmp;  

public:

    Empleado();
    Empleado(string nombreEmp1, float sueldoEmp1, Fecha cumpleAniosEmp1);

    string getNombreEmp();
    float getSueldoEmp();
    Fecha getFecha();

    void setNombreEmp(string nombreEmp1); 
    void setSueldo(float sueldoEmp1);
    void subeSueldo(float cumpleAniosEmp1);
    void setFecha(Fecha);

};


