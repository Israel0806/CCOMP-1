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
        /*void ChangeName();
        void ChangeDirec();
        void ChangePref();
        void ChangeEdad();*/
};

#endif // CLIENTES_H
