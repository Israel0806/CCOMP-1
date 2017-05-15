#ifndef CLIENTES_H
#define CLIENTES_H
#include <iostream>
using namespace std;

class Clientes
{
    private:
        string listaClienteChar[50][4];
        int listaClienteInt[50][2];
        //string nombre,direccion,preferencia,sexo;
        //int edad;
    public:
        void SetData(string,string,string,int,string,int);
        void GetData(int);
        /*void ChangeName();
        void ChangeDirec();
        void ChangePref();
        void ChangeEdad();*/
};

#endif // CLIENTES_H
