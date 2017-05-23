#ifndef TELEVISION_H
#define TELEVISION_H
#include <iostream>
#include "Producto.h"
using namespace std;

class Television : public Producto
{
private:
    string caracteristica;
    float cantidad;
public:
    Television(string,float,float,string);
    void getData();
    void setCaracteristica(string);
};

#endif // TELEVISION_H
