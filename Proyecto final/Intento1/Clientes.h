#ifndef CLIENTES_H
#define CLIENTES_H
#include <iostream>
using namespace std;

class Clientes
{
    private:
        string nombre,direccion,preferencia;
        int edad;
    public:
        //Clientes();
        void SetData();
        void GetData();

};

#endif // CLIENTES_H
