#include <iostream>
#include "Vec.h"
using namespace std;

int main()
{
    Vec vec;
    vec.start.x=1.0; vec.start.y=2.0; vec.fin.x=3.0; vec.fin.y=4.0;
    vec.imprimir();
    cout<<"\n\n"<<vec.distancia();
    return 0;
}
