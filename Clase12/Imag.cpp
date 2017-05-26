#include "Imag.h"
#include <iostream>
using namespace std;
Imag::Imag(double r, double i)
{
    real=r; imag=i;
}
Imag::Imag()
{}

Imag Imag::suma(Imag o2)
{
    double a=real+o2.real; double b=imag+o2.imag;
    Imag o(a,b);
    return o;
}

Imag Imag::p_escalar(int x)
{
    double a=real*x; double b=imag*x;
    Imag o(a,b);
    return o;
}

Imag Imag::multiplicacion(Imag o2)
{
    double a=(real*o2.real)-(imag*o2.imag); double b=a=(real*o2.imag)-(imag*o2.real);
    Imag o(a,b);
    return o;
}

void Imag::igual(Imag o1)
{
    real=o1.real; imag=o1.imag;
}

Imag Imag::resta(Imag o2)
{
    double a=real-o2.real; double b=imag-o2.imag;
    Imag o(a,b);
    return o;
}
