#include "Cumpleaņos.h"

Cumpleaņos::Cumpleaņos()
{
    year=0;
    month="";
    day=0;
}

int Cumpleaņos::getAge()
{
    return (2017-year);
}

Cumpleaņos::~Cumpleaņos()
{
    //dtor
}
