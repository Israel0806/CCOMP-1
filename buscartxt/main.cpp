#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string cod,miCodigo, miNombre, miCategoria, miPrecio, miCantidad, miTipo;
    cout<<"Ingrese el codigo\n";
    cin>>cod;
    ifstream readOut;
    readOut.open("Computadora.txt");

    while( readOut >> miCodigo >> miNombre >> miCategoria >> miPrecio >> miCantidad >> miTipo)
    {
        if(miCodigo==cod)
            cout<< miCodigo << ' ' << miNombre << ' ' << miCategoria << ' ' << miPrecio << ' ' << miCantidad << ' ' << miTipo <<endl;
    }


    return 0;
}
