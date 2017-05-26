#ifndef CLIENTES_H
#define CLIENTES_H
#include <iostream>
using namespace std;

class Clientes
{
    private:
        char sexo;
        string nombre,direccion,preferencia;
        int edad;
        //string nombre,direccion,preferencia,sexo;
        //int edad;
    public:
        void SetData(char,string,string,int,string);
        void GetData(int);
        /*void ChangeName();
        void ChangeDirec();
        void ChangePref();
        void ChangeEdad();*/
};

#endif // CLIENTES_H
