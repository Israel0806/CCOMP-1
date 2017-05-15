#include "Clientes.h"
#include <iostream>
using namespace std;
void Clientes::SetData(string nombre, string direccion, string preferencia, int edad, string sexo,int x)// cambiar a char el sexo jejeje
{
    listaClienteChar[x][0]=nombre;
    listaClienteChar[x][1]=direccion;
    listaClienteChar[x][2]=preferencia;
    listaClienteChar[x][3]=sexo;
    listaClienteInt[x][0]=edad;
    listaClienteInt[x][1]=x;
}

void Clientes::GetData(int a)
{
    cout<<"Nombre: "<<listaClienteChar[a][0]<<endl
    <<"Direccion: "<<listaClienteChar[a][1]<<endl
    <<"Preferencias: "<<listaClienteChar[a][2]<<endl
    <<"Edad: "<<listaClienteInt[a][0]<<endl
    <<"Sexo"<<listaClienteChar[a][3];
}
