#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

class Producto
{
    protected:
        string nombre;
        float precio;
        string categoria;
    public:
        Producto();
        virtual void setData(string nombre, float,string);
};

#endif // PRODUCTO_H
