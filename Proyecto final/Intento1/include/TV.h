#ifndef TV_H
#define TV_H
#include "Producto.h"

class TV : public Producto
{
    private:
        int codigo; // letra,calidad,caracteristicas,tipo del pantalla, tamaño
        float tam;
        string caracteristicas [3],pantallaTy,calidad;
    public:
        TV();
        void setData(string miNombre,int miPrecio,string miCategoria, int miCodigo, string miCalidad, string miCaracteristicas[],string mipantallaTy, float miTam);
//        getTv(char miCodigo[]);



};

#endif // TV_H
