#include "Persona.h"

Persona::Persona() {}

Persona::Persona(string miNombre, char miSexo, Birthday a)
{
    this->nombre=miNombre;
    this->sexo=miSexo;
    this->b=a;
    //Birthday(1998,"Julio",21);
}

int Persona::getAge()
{
    return 2017-b.year;
}

void Persona::mostrar()
{}

Persona::~Persona()
{}
