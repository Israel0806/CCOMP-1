#include "TV.h"

TV::TV(char miNombre[],int miPrecio,string miCategoria, char miCodigo[], string miCalidad, string miCaracteristicas[],string mipantallaTy, float miTam)
    :Producto(miNombre,miPrecio,miCategoria), codigo(miCodigo), calidad(miCalidad), caracteristicas(miCaracteristicas), pantallaTy(mipantallaTy),Tam(miTam)
{}
