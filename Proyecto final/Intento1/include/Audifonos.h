#ifndef AUDIFONOS_H
#define AUDIFONOS_H
#include "Producto.h"

class Audifonos : public Producto
{
private:
    string conexion,tier1,tier2,tier3,caracteristica;
    int codigo;
public:
    Audifonos();
    void setData(string miNombre,float miPrecio,string miCategoria,int miCodigo,string miConexion,string miTier1,string miTier2,string miTier3,string miCaracteristica);
};

#endif // AUDIFONOS_H