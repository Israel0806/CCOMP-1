#include "Gerente.h"

Gerente::Gerente(string miNombre, char miSexo, float miSueldo, Birthday a)
    :Persona(miNombre, miSexo, a), sueldo(miSueldo) {}

void Gerente::mostrar()
{
    cout<<"Nombre: "<<nombre<<endl
        <<"Sexo: "<<sexo<<endl
        <<"Sueldo: "<<sueldo<<endl
        <<"Edad: "<<getAge()<<endl<<endl;
}

void Gerente::setNombre(string miNombre)
{
    nombre=miNombre;
}

void Gerente::setSexo(char miSexo)
{
    sexo=miSexo;
}

Gerente::~Gerente()
{
    //dtor
}
