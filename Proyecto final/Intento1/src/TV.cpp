#include "TV.h"

TV::TV()
{

}

void TV::setData(string miNombre,int miPrecio,string miCategoria, int miCodigo, string miCalidad, string miCaracteristicas[],string mipantallaTy, float miTam)
{
    nombre=miNombre;
    precio=miPrecio;
    categoria=miCategoria;
    codigo=miCodigo;
    calidad=miCalidad;
    pantallaTy=mipantallaTy;
    tam=miTam;
    for(int x=0;x<3;x++)
        caracteristicas[x]=miCaracteristicas[x];
}