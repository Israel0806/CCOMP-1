#include <iostream>
#include "Clientes.h"
#include<stdlib.h>

using namespace std;

int main()
{
    int op;
    do
    {
        cout<<"\t\t\t\t\t\t Menu de opciones \n";
        cout<<" 1.Ingresar cliente\n";
        cout<<" 2.Ingresar producto\n";
        cout<<" 3.Lista de productos\n";
        cout<<" 4.Buscar producto\n";
        cout<<" 5.Vender producto\n";
        cout<<" 6.Salir\n";
        cout<<"Ingrese una opcion\n"; cin>>op;
        switch(op)
            {
            case 1:

            case 2:

            case 3:

            case 4:

            case 5:

            case 6:

                break;
            default:
                cout<<"Ingrese opcion correcta\n";
                system("pause");
            }
        system("cls");
    }
    while(op!=6);

    //Clientes cliente1;
    //cliente1.SetData();
    //cliente1.GetData();
    return 32;
}
