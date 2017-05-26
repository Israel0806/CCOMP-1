#ifndef IMPRESORAS_H
#define IMPRESORAS_H
#include "Producto.h"

class Impresoras : public Producto
{
    private:
        char caracteristicas[3],codigo[3];
        string tipo;
    public:
        Impresoras(char miNombre[],float miPrecio,string miCategoria, char miCodigo[], string miTipo, char miCaracteristica[]);

};

#endif // IMPRESORAS_H
