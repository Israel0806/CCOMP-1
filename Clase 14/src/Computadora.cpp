#include "Computadora.h"

Computadora::Computadora(string miMarca,float miPrecio,float miCantidad)
    : Producto(miMarca,miPrecio),cantidad(miCantidad) {}

void Computadora::getData()
{
    cout<<"Marca: "<<marca
        <<"\nPrecio: "<<precio
        <<"\nCantidad: "<<cantidad<<endl<<endl;
}

void Computadora::setCantidad(float miCantidad)
{
    cantidad=miCantidad;
}
