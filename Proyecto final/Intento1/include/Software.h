#ifndef SOFTWARE_H
#define SOFTWARE_H
#include "Producto.h"

class Software
{

    private:
        string Tier1,Tier2;
        char codigo[3];
    public:
        Software(float miPrecio, char miNombre[], string categoria, char miCodigo[], string miTier1, string miTier2);
};

#endif // SOFTWARE_H
