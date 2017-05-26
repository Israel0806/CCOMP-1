#include <iostream>
#include <vector>

#include "Computadora.h"
#include "Producto.h"
#include "Television.h"

using namespace std;

int main()
{
    Computadora c("Lenovo",253.6,32);
    /*Producto *p=&c;
    p->getData();*/
    Television t("LG",500,10,"Smart");
    vector <Producto *> productos;
    productos.push_back(&c);
    productos.push_back(&t);
    for(int x=0;x<productos.size();x++)
        productos[x]->getData();


    return 32;
}
