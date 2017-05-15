#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

class Producto
{
    private:
        string listaProductoChar[50][2];
        int listaProductoInt[50][3];
    public:
        void SetData(string, string, int, int, int);
        void GetData(int);
        void GetAllData(int);
};

#endif // PRODUCTO_H
