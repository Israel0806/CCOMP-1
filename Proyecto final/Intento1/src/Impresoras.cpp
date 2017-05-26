#include "Impresoras.h"

Impresoras::Impresoras(char miNombre[],float miPrecio,string miCategoria, char miCodigo[], string miTipo, char miCaracteristica[])
    :Producto(miNombre, miPrecio, miCategoria), codigo(miCodigo), tipo(miTipo), caracteristica(miCaracteristica) {}

