#include "Producto.h"
#include <iostream>
using namespace std;

void Producto::SetData(string nombre, string tipo, int cantidad, int precio,int y)
{
    listaProductoChar[y][0]=nombre;
    listaProductoChar[y][1]=tipo;
    listaProductoInt[y][0]=cantidad;
    listaProductoInt[y][1]=precio;
    listaProductoInt[y][2]=y;
}

void Producto::GetData(int a)
{
    cout<<"Codigo: "<<listaProductoInt[a][2]<<endl
    <<" Nombre: "<<listaProductoChar[a][0]<<endl
    <<" Tipo: "<<listaProductoChar[a][1]<<endl
    <<" Cantidad: "<<listaProductoInt[a][0]<<endl
    <<" Precio: "<<listaProductoInt[a][1];
}


void Producto::GetAllData(int a)
{
    cout<<" Codigo     Nombre     Tipo de producto     Cantidad     Precio "<<endl
    <<    " -----      ------     ----------------     --------     ------ ";
    for(int p=0;p<a;p++)
    {
        cout<<endl<<"  "<<listaProductoInt[p][2]<<"     "
        <<listaProductoChar[p][0]<<"     "
        <<listaProductoChar[p][1]<<"     "
        <<listaProductoInt[p][0]<<"     "
        <<listaProductoInt[p][1]<<"     ";
    }
}
