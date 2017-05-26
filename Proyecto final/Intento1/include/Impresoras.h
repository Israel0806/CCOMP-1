#ifndef IMPRESORAS_H
#define IMPRESORAS_H
#include "Producto.h"

class Impresoras : public Producto
{
    private:
        int codigo;
        string tipo,caracteristicas[3];
    public:
        Impresoras();
        void setData(string miNombre,float miPrecio,string miCategoria, int miCodigo, string miTipo, string miCaracteristica[]);

};

#endif // IMPRESORAS_H
