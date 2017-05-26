#include "Cumpleaños.h"

Cumpleaños::Cumpleaños()
{
    year=0;
    month="";
    day=0;
}

int Cumpleaños::getAge()
{
    return (2017-year);
}

Cumpleaños::~Cumpleaños()
{
    //dtor
}
