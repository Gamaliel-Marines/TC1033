#include <string>
#include<iostream>

using namespace std;


class Item
{
    private:
        double precio_item; 
        string nombre_item; 
    
    
    public: 
        Item();
        Item(double, string);

        double get_precio_item(); 
        string get_nombre_item(); 

        void set_precio_item(double); 
        void set_nombre_item(string); 

        string imrprimir_info_item(); 

};
