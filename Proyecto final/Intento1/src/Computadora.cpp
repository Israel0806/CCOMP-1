#include "Computadora.h"

Computadora::Computadora()
{

}

void Computadora::setData(string miNombre, float miPrecio, string miCategoria, int miCodigo,string miTipo)
{
    nombre=miNombre;
    precio=miPrecio;
    categoria=miCategoria;
    codigo=miCodigo;
    tipo=miTipo;
}
