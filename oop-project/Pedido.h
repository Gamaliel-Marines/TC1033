#include"Item.cpp"
#include <string>

using namespace std;

class Pedido
{
    private:
        
        int num_items; 
        Item items[10]; 
        string tipo_pedido; 
        double precio_pedido; 
        string fecha_entrega;         
        
    public:    
        
        Pedido();
        Pedido(int, double, Item[], string, string);

        int get_num_items();
        string get_tipo_pedido(); 
        double get_precio_pedido(); 
        string get_fecha_entrega(); 

        void set_num_items(int); 
        void set_tipo_pedido(string); 
        void set_precio(Item[]); 
        void set_fecha_entrega(string); 

        string imprimir_info_pedido();
};