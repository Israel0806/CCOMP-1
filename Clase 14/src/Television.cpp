#include "Television.h"

Television::Television(string miMarca,float miPrecio,float miCantidad,string miCaracteristica)
    : Producto(miMarca,miPrecio),cantidad(miCantidad),caracteristica(miCaracteristica) {}

void Television::getData()
{
    cout<<"Marca: "<<marca
        <<"\nPrecio: "<<precio
        <<"\nCantidad: "<<cantidad
        <<"\nCaracteristica: "<<caracteristica<<endl<<endl;
}

void Television::setCaracteristica(string miCaracteristica)
{
    caracteristica=miCaracteristica;
}
