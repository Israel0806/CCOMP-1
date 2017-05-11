#include "Clientes.h"
#include <iostream>
using namespace std;
void Clientes::SetData()
{
    cout<<"Ingrese el nombre: "; cin>>nombre;
    cout<<"Ingrese la direccion: "; cin>>direccion;
    cout<<"Ingrese la edad: "; cin>>edad;
    cout<<"Ingrese las preferencias: "; cin>>preferencia;
}

void Clientes::GetData()
{
    cout<<"Nombre: "<<nombre<<endl<<"Direccion: "<<direccion<<endl<<"Preferencias: "<<preferencia<<endl<<"Edad: "<<edad<<endl;
}
