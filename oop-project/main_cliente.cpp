#include "Cliente.cpp"
#include <iostream>
#include <fstream>

using namespace std;

void menu()
{
    cout<<"1. depositar a cuenta"<<endl;
    cout<<"2. generar pedido"<<endl;
    cout<<"3. ver cliente"<<endl;
    cout<<"4. ver cuenta"<<endl;
    cout<<"5. ver pedido"<<endl;
    cout<<"6. pagar pedido"<<endl;
    cout<<"7. salir"<<endl;
}

int main()
{


Cliente cliente;

    Cuenta cuenta_cliente;

    string id_cuenta;
    cout<<"Ingrese el id del cliente: "<<endl;
    cin>>id_cuenta;

    int estado_cuenta;
    cout<<"Ingrese el estado de cuenta del cliente: "<<endl;
    cin>>estado_cuenta;

    cuenta_cliente.set_id_cuenta(id_cuenta);
    cuenta_cliente.set_estado_cuenta(estado_cuenta);

 
 
Pedido pedido_cliente;  



string nombre_cliente;
string apellido_peterno;
string apellido_materno;
int edad_cliente;
string nacionalidad_cliente;
string direccion_cliente;

cout<<"Ingrese el nombre del cliente: "<<endl;
cin>>nombre_cliente;
cout<<"Ingrese el apellido paterno del cliente: "<<endl;
cin>>apellido_peterno;
cout<<"Ingrese el apellido materno del cliente: "<<endl;
cin>>apellido_materno;
cout<<"Ingrese la edad del cliente: "<<endl;
cin>>edad_cliente;
cout<<"Ingrese la nacionalidad del cliente: "<<endl;
cin>>nacionalidad_cliente;
cout<<"Ingrese la direccion del cliente: "<<endl;
cin>>direccion_cliente;
cout<<endl;
cout<<endl;
cout<<endl;



cliente.set_cuenta_bancaria(cuenta_cliente);
cliente.set_nombre(nombre_cliente);
cliente.set_apellido_paterno(apellido_peterno);
cliente.set_apelliod_materno(apellido_materno);
cliente.set_edad(edad_cliente);
cliente.set_nacionalidad(nacionalidad_cliente);
cliente.set_direccion(direccion_cliente);
//cliente.set_pedido(pedido_cliente);






bool continuar = true;

while(continuar == true)
{
    cout<<endl;
    menu();
    cout<<endl;
    cout<<endl;
    cout<<endl;


    int opcion;

    cout<<"Ingrese una opcion del menu: "<<endl;
    cin>>opcion;
    if (opcion < 1 || opcion > 7)
    {
        cout<<"Ingrese una opcion valida: "<<endl;
        cin>>opcion;
    }


    if (opcion == 1)
    {
        int cantidad_deposito;
        cout<<"Ingrese la cantidad que desea depositar: "<<endl;
        cin>>cantidad_deposito;
        cliente.generar_deposito(cantidad_deposito);
        //cout<<"El estado de cuenta es: "<<cuenta_cliente.get_estado_cuenta()<<endl;
        //cout<<"El estado de cuenta es: "<<cliente.imprimir_cuenta()<<endl;

        //break;
    }



    if (opcion == 2)
    {
        int num_items_pedido;
        cout<<"Ingrese el numero de items: "<<endl;
        cin>>num_items_pedido;

        Item items_pedido[num_items_pedido];

        for (int i = 0; i < num_items_pedido; i++)
        {
            string name_item;
            double price_item;
            
            
            cout<<"Ingrese el nombre del item:";
            cin>>name_item;
            cout<<"Ingrese el precio del item: ";
            cin>>price_item;

            items_pedido[i] = Item(price_item, name_item);
        } 

        double precio_del_pedido;

        for (int i = 0; i < num_items_pedido; i++)
        {
            double suma_precios;

            suma_precios = suma_precios + items_pedido[i].get_precio_item();
            precio_del_pedido = suma_precios;
        }


        string fecha_entrega_pedido;
        cout<<"Ingrese la fecha de entrega: "<<endl;
        cin>>fecha_entrega_pedido;

        string tipo_pedido;
        cout<<"Ingrese si el pedido es fisico o digital/remoto: "<<endl;
        cin>>tipo_pedido;


        Pedido pedido(num_items_pedido, precio_del_pedido, items_pedido,fecha_entrega_pedido, tipo_pedido);

        pedido_cliente = pedido;

        cliente.set_pedido(pedido);

        //break;

    }

    if (opcion == 3)
    {
        cout<<cliente.imprimir_cliente()<<endl;

        string informacion_del_cliente = cliente.imprimir_cliente();

        ofstream archivo;
        
        archivo.open("cliente.txt");
        
        if(archivo.fail())
        {
            cout<<"Error al abrir el archivo";
        }
        else
        {
            archivo<<"Cliente: "<<endl;
            {
                archivo<<informacion_del_cliente<<endl;
            }
            archivo.close();
        }

        //break;
    }


    if (opcion == 4)
    {
        // cout<<cuenta_cliente.imprimir_info_cuenta()<<endl;

        cout<<cliente.imprimir_cuenta()<<endl;

        string informacion_de_la_cuenta = cliente.imprimir_cuenta();



        ofstream archivo;
        
        archivo.open("cuenta.txt");
        
        if(archivo.fail())
        {
            cout<<"Error al abrir el archivo";
        }
        else
        {
            archivo<<"Cuenta: "<<endl;
            {
                archivo<<informacion_de_la_cuenta<<endl;
            }
            archivo.close();
        }


        //break;
    }

    if (opcion == 5)
    {
        //cout<<pedido_cliente.imprimir_info_pedido();
        cout<<cliente.imprimir_pedido();

        string informacion_del_pedido = cliente.imprimir_pedido();

       ofstream archivo;
        
        archivo.open("pedido.txt");
        
        if(archivo.fail())
        {
            cout<<"Error al abrir el archivo";
        }
        else
        {
            archivo<<"Pedido: "<<endl;
            {
                archivo<<informacion_del_pedido<<endl;
            }
            archivo.close();
        }

        //break;
    }

    if (opcion == 6)
    {
        cliente.pagar_pedido(pedido_cliente);
    }


    if (opcion == 7)
    {
        continuar = false;
    }
    
}


return 0;

}

