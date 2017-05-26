#ifndef ARREGLOPERSONA_H
#define ARREGLOPERSONA_H
#include "Persona.h"
#include <iostream>
using namespace std;

class ArregloPersona : public Persona
{
    private:
        int tam;
        Persona *personas;
    public:
        ArregloPersona(int tam);
        ~ArregloPersona();

};

#endif // ARREGLOPERSONA_H
