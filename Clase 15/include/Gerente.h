#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"
#include <iostream>
using namespace std;

class Gerente : public Persona
{
    private:
        float sueldo;
    public:
        Gerente(string miNombre, char miSexo, float miSueldo, Birthday a);
        void mostrar();
        void setNombre(string miNombre);
        void setSexo(char miSexo);

        ~Gerente();
    };

#endif // GERENTE_H
