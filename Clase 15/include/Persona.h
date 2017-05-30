#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include "Birthday.h"
using namespace std;

class Persona
{
    protected:
        string nombre;
        char sexo;
        Birthday b(int myYear=0, string myMonth="", int myDay=0);
    public:
        Persona();
        Persona(string nombre, char sexo, Birthday a);
        virtual void mostrar()=0;
        //virtual void setNombre()=0;
        //virtual void setSexo()=0;

        ~Persona();

};

#endif // PERSONA_H
