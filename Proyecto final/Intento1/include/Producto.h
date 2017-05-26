#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

class Producto
{
    protected:
        char nombre[];
        int precio;
        string categoria;
    public:
        Producto(string nombre, int,string);
};

#endif // PRODUCTO_H
