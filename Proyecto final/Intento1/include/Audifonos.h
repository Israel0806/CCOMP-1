#ifndef AUDIFONOS_H
#define AUDIFONOS_H
#include "Producto.h"

class Audifonos : public Producto
{
private:
    string conexion,tier1,tier2;//,tier3,caracteristica;
    string codigo; //Tier1 conexion Tier 2
public:
    Audifonos();
    void setData(string miNombre,float miPrecio,string miCategoria,string miCodigo,string miConexion,string miTier1,string miTier2);//,string miTier3,string miCaracteristica);
    void getData();
};

for( int i=0;i<miNombre.size();i++)
    nombre[i]=miNOmbre[i]

#endif // AUDIFONOS_H
