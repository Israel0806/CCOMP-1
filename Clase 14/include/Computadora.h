#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include "Producto.h"

class Computadora : public Producto
{
    private:
        float cantidad;
    public:
        Computadora(string, float,float);
        void getData();
        void setCantidad(float);
};

#endif // COMPUTADORA_H
