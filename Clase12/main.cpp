#include <iostream>
#include "Imag.h"
using namespace std;

int main()
{
    Imag o1(2,1);
    Imag o2(2,2);
    Imag o3=o1.suma(o2);
    Imag o4=o1.p_escalar(4);
    Imag o5=o1.multiplicacion(o2);
    Imag o6;
    o6.igual(o1);
    Img o7=o1.resta(o2);
    return 0;
}
