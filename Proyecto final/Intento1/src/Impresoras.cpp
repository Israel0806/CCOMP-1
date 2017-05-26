#include "Impresoras.h"

Impresoras::Impresoras()
{

}


void Impresoras::setData(string miNombre,float miPrecio,string miCategoria, int miCodigo, string miTipo, string miCaracteristica[])
{
    nombre=miNombre;
    precio=miPrecio;
    categoria=miCategoria;
    codigo=miCodigo;
    tipo=miTipo;
    for(int x=0;x<3;x++)
        caracteristicas[x]=miCaracteristica[x];

}
