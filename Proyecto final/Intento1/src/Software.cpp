#include "Software.h"

Software::Software(float miPrecio, char miNombre[], string categoria, char miCodigo[], string miTier1, string miTier2)
    : Producto(miNombre,miPrecio, categoria), codigo(miCodigo), Tier1(miTier1), Tier2(miTier2) {}
