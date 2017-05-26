#include "Computadora.h"

Computadora::Computadora(char miNombre[], float miPrecio, string miCategoria,string miTipo)
    : Producto(miNombre, miPrecio, miCategoria), tipo(miTipo) {}
