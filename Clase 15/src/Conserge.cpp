#include "Conserge.h"

Conserge::Conserge(string miNombre, char miSexo, float miSueldo, int miHorasT, Birthday a)
    : Persona(miNombre, miSexo, a), sueldo(miSueldo), horasT(miHorasT){}

void Conserge::mostrar()
{
    cout<<"Nombre: "<<nombre<<endl
        <<"Sexo: "<<sexo<<endl
        <<"Sueldo: "<<sueldo<<endl
        <<"Horas de trabajo: "<<horasT<<endl
        <<"Edad: "<<getAge()<<endl<<endl;
}

void Conserge::setNombre(string miNombre)
{
    nombre=miNombre;
}

void Conserge::setSexo(char miSexo)
{
    sexo=miSexo;
}

void Conserge::setHorasT(int miHorasT)
{
    horasT=miHorasT;
}

Conserge::~Conserge()
{
    //dtor
}
