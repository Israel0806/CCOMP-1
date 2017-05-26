#include <iostream>
#include "Persona.h"

#include "Gerente.h"
#include "Conserge.h"
#include "Birthday.h"

using namespace std;

int main()
{
    Persona* p1=new Conserge("Juan",'M',3200,8,Birthday(1998,"Julio",21));
    Persona* p2= new Gerente("Maria",'F',5000,Birthday(1951,"Marzo",5));
    p1->mostrar();
    p2->mostrar();
    return 0;
}
