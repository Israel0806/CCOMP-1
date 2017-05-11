#include <iostream>
#include "Clientes.h"
using namespace std;

int main()
{
    Clientes cliente1;
    cliente1.SetData();
    cout<<endl<<endl;
    cliente1.GetData();
    return 0;
}
