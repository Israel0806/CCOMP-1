#include <iostream>
#include<stdlib.h>
#include <vector>
#include <string.h>

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


/* de char a int

#include <stdlib.h>
    char a[]={'1','2','3'};
    int b=atoi(a);
    cout<<b+2;

*/


void printMenu();
void printCategorias();

int main()
{
    //Declaracion de instancias
    Clientes clientes[20];
    Computadora computadoras[20];
    Audifonos audifonos[20];
    Software software[20];
    TV Tv[20];
    Impresoras impresoras[20];
    /*vector <Clientes *> clientes;
    vector <Computadora *> computadoras;*/



    vector <Producto *> productos;
    /*for(int y=0; y<20; y++) //Queda pendiente mejorar el push back
    {
        productos.push_back(&computadoras[y]);
        productos.push_back(&audifonos[y]);
        productos.push_back(&software[y]);
        productos.push_back(&Tv[y]);
        productos.push_back(&impresoras[y]);
    }*/

    //Declaracion de variables

    int op,c=0,p=0,cat;
    int edad,precio,cantidad;
    string direccion,tipo,categoria;
    char nombre[20],sexo;
    do
    {
        printMenu(); cin>>op;
        switch(op)
            {
            case 1:
                //datos del cliente
                cout<<"\nDatos del cliente "<<c+1<<": \n\n";
                cout<<"Ingrese el nombre: "; cin>>nombre;
                cout<<"Ingrese la direccion: "; cin>>direccion;
                cout<<"Ingrese la edad: "; cin>>edad;
                //cout<<"Ingrese las preferencias: "; cin>>preferencia;
                cout<<"Ingrese el sexo: "; cin>>sexo;

                //Coloca los datos del cliente en un array(por ahora)
                clientes[c].setData(nombre,direccion,edad,sexo);
                c++; //actualiza numero de cliente(codigo)
                break;
            case 2:
                {
                printCategorias(); cin>>cat;
                switch(cat)
                {
                    case 1:
                        {
                            //char *au= new char [4];
                            char au[0];
                            int *r=new int;
                            string cod;
                            au[0]='A';
                            cout<<"\n1. Cancelacion de sonido pasiva"<<endl
                                <<"2. Cancelacion de sonido activa"<<endl<<endl;
                                cin>>*r;
                            while(*r!=1 and *r!=2)//verifies if *r is correct
                                {
                                    cout<<"Opcion incorrecta\n";
                                    cin>>*r;
                                }
                            (*r==1)? au[1]='0':au[1]='1';
                            //au++;
                            cout<<"1. Auriculares abiertos"<<endl
                                <<"2. Auriculares cerrados"<<endl<<endl;
                                cin>>*r;
                            while(*r!=1 and *r!=2)
                                {
                                    cout<<"Opcion incorrecta\n";
                                    cin>>*r;
                                }
                                (*r==1)? au[2]='0':au[2]='1'; //if statement
                            //au++;

                            cout<<"1. Conexion wireless"<<endl
                                <<"2. Conexion alambrica"<<endl<<endl;
                                cin>>*r;
                            while(*r!=1 and *r!=2)
                                {
                                    cout<<"Opcion incorrecta\n";
                                    cin>>*r;
                                }
                                (*r==1)? au[3]='0':au[3]='1';
                            //au--;
                            cod=au;
                            audifonos[p].setData("Aasd",32,"Audifono",cod,"asd","asd","asd");
                            audifonos[p].getData();
                            delete r;
                            break;
                        }
                    case 2:
                        {

                           break;
                        }
                    case 3:
                        {
                            break;
                        }
                    case 4:
                        {
                            break;
                        }
                    case 5:
                        {
                            break;
                        }
                }





                //Datos del producto
                /*cout<<"\nDatos del producto "<<y+1<<": \n\n";
                cout<<"Ingrese el nombre: "; cin>>nombre;
                cout<<"Ingrese la categoria del producto: "; cin>>tipo;
                cout<<"Ingrese la cantidad: "; cin>>cantidad;
                cout<<"Ingrese el precio: "; cin>>precio;*/
                //Coloca los datos del producto en un array(por ahora)
                //productos.setData(nombre,tipo,cantidad,precio,y);

                p++;//Actualiza numero de producto(codigo)
                break;
                }
            case 3:
                //Muestra todos los datos de todos los productos
                //productos.getAllData(y);
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
    cout<<"\t\t\t\t\t\t Menu de opciones"<<endl     //Ponerle nombre en vez menu de opciones
        <<" 1.Ingresar cliente"  <<endl
        <<" 2.Ingresar producto" <<endl
        <<" 3.Lista de productos"<<endl
        <<" 4.Buscar producto"   <<endl
        <<" 5.Vender producto"   <<endl
        <<" 6.Salir"             <<endl
        <<"Ingrese una opcion"   <<endl;
}

void printCategorias()
{
    system("cls");
    cout<<"\n\n 1. Audifonos "  <<endl
        <<" 2. Computadoras "   <<endl
        <<" 3. Impresoras "     <<endl
        <<" 4. Software "       <<endl
        <<" 5. Television "     <<endl
        <<"\nIngrese una opcion"<<endl;
}



