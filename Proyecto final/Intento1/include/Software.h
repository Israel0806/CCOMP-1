#ifndef SOFTWARE_H
#define SOFTWARE_H
#include "Producto.h"

class Software : public Producto
{

    private:
        string Tier1,Tier2;
        int codigo;
    public:
        Software();
        void setData(string miNombre, float miPrecio, string miCategoria, int miCodigo, string miTier1, string miTier2);
};

#endif // SOFTWARE_H
