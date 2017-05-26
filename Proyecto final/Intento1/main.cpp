#include <iostream>
#include<stdlib.h>
#include "Clientes.h"
#include "Producto.h"
#include "Audifonos.h"
#include "Impresoras.h"
#include "Software.h"
#include "TV.h"
#include "Computadora.h"
//A1023
//I102
using namespace std;


void printMenu();

int main()
{
    //Declaracion de instancias
    Clientes clientes[20];
    Computadora computadoras[20];
    Audifonos audifonos[20];
    Software software[20];
    TV Tv[20];
    Impresoras impresoras[20];
    vector <Producto *> productos;
    productos.push_back(&computadoras)
    //Declaracion de variables

    int op,x=0,y=0;
    int edad,precio,cantidad;
    string direccion,preferencia,sexo,tipo;
    char nombre[20];

    do
    {
        printMenu(); cin>>op;
        switch(op)
            {
            case 1:
                //datos del cliente
                cout<<"\nDatos del cliente "<<x+1<<": \n\n";
                cout<<"Ingrese el nombre: "; cin>>nombre;
                cout<<"Ingrese la direccion: "; cin>>direccion;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese las preferencias: "; cin>>preferencia;
                cout<<"Ingrese el sexo: "; cin>>sexo;
                //Coloca los datos del cliente en un array(por ahora)
                clientes[x].SetData(nombre,direccion,preferencia,edad,sexo);
                x++; //actualiza numero de cliente(codigo)
                break;
            case 2:
                //Datos del producto
                cout<<"\nDatos del producto "<<y+1<<": \n\n";
                cout<<"Ingrese el nombre: "; cin>>nombre;
                cout<<"Ingrese el tipo de producto: "; cin>>tipo;
                cout<<"Ingrese la cantidad: "; cin>>cantidad;
                cout<<"Ingrese el precio: "; cin>>precio;
                //Coloca los datos del producto en un array(por ahora)
                productos.SetData(nombre,tipo,cantidad,precio,y);

                y++;//Actualiza numero de producto(codigo)
                break;
            case 3:
                //Muestra todos los datos de todos los productos
                productos.GetAllData(y);
                break;
            case 4:

                //Busca un producto en especifico
                break;
            case 5:
                //Realiza la venta de un producto
                break;
            case 6:
                //Termina el programa
                break;
            default:
                cout<<"Ingrese opcion correcta\n";

            }
        cout<<endl;
        system("pause");
        system("cls");
    }
    while(op!=6);
    return 32;
}

void printMenu()
{
    cout<<"\t\t\t\t\t\t Menu de opciones \n"; //Ponerle nombre en vez menu de opciones
    cout<<" 1.Ingresar cliente\n";
    cout<<" 2.Ingresar producto\n";
    cout<<" 3.Lista de productos\n";
    cout<<" 4.Buscar producto\n";
    cout<<" 5.Vender producto\n";
    cout<<" 6.Salir\n";
    cout<<"Ingrese una opcion\n";
}
