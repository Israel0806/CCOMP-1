#include "Producto.h"

Producto::Producto()
{

}

Producto::Producto(string miMarca,float miPrecio)
    : marca(miMarca), precio(miPrecio) {}

void Producto::getData()
{
    cout<<"Marca: "<<marca
        <<"\nPrecio: "<<precio<<endl<<endl;
}

void Producto::setNombre(string miMarca)
{
    marca=miMarca;
}

void Producto::setPrecio(float miPrecio)
{
    precio=miPrecio;
}

