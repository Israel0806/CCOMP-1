#include "ArregloPersona.h"

ArregloPersona::ArregloPersona(int tam)
{
    this->tam=tam;
    this->personas=new Persona[tam];
}

ArregloPersona::~ArregloPersona()
{
    delete[] personas;
}
