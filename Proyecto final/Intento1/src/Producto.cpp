#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto(char miNombre[], int miPrecio,string miCategoria)
    : nombre(miNombre), precio(miPrecio),categoria(miCategoria) {}
