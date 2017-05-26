#include "Audifonos.h"

Audifonos::Audifonos(char miNombre[],float miPrecio,string miCategoria,char miCodigo[],string miConexion,string miTier1,string miTier2,string miTier3,string miCaracteristica)
    : Producto(miNombre,miPrecio,miCategoria), codigo(miCodigo), conexion(miConexion), tier1(miTier1), tier2(miTier2), tier3(miTier3), caracteristica(miCaracteristica) {}
