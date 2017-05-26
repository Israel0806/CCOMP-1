#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include "Producto.h"

class Computadora : public Producto
{
    private:
        string tipo;
    public:
        Computadora(char miNombre[], float miPrecio, string categoria,string tipo);
};

#endif // COMPUTADORA_H
