#include "Audifonos.h"

Audifonos::Audifonos()
{

}


void Audifonos::setData(string miNombre,float miPrecio,string miCategoria,int miCodigo,string miConexion,string miTier1,string miTier2,string miTier3,string miCaracteristica)
{
    nombre=miNombre;
    precio=miPrecio;
    categoria=miCategoria;
    codigo=miCodigo;
    conexion=miConexion;
    tier1=miTier1;
    tier2=miTier2;
    tier3=miTier3;
    caracteristica=miCaracteristica;
}
