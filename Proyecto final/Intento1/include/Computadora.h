#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include "Producto.h"

class Computadora : public Producto
{
    private:
        string tipo;
        int codigo;
    public:
        Computadora();
        void setData(string miNombre, float miPrecio, string miCategoria, int miCodigo,string miTipo);
};

#endif // COMPUTADORA_H
