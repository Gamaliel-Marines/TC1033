#include <string.h>

using namespace std;

class Fecha
{

private:
int dia; 
int mes; 

public:

    Fecha();
    Fecha(int dia1, int mes1);
    int getDia(); 
    int getMes(); 
    void setDia(int dia1);
    void setMes(int mes1);

};