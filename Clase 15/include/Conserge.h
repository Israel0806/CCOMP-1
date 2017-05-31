#ifndef CONSERGE_H
#define CONSERGE_H
#include "Persona.h"
#include <iostream>
using namespace std;

class Conserge : public Persona
{
    private:
        float sueldo;
        int horasT;
    public:
        Conserge(string miNombre, char miSexo, float miSueldo, int miHorasT,Birthday a);
        void mostrar();
        void setNombre(string miNombre);
        void setSexo(char miSexo);
        void setHorasT(int miHorasT);
        ~Conserge();

};

#endif // CONSERGE_H
