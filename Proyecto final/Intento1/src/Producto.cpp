#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto()
{}

void Producto::setData(string miNombre, float miPrecio,string miCategoria)
{
    nombre=miNombre;
    precio=miPrecio;
    categoria=miCategoria;
}
