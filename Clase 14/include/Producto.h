#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;
class Producto
{
    protected:
        string marca;
        float precio;
    public:
        Producto();
        Producto(string,float);
        virtual void getData();
        void setNombre(string);
        void setPrecio(float);
};

#endif // PRODUCTO_H
