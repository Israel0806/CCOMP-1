#include <iostream>

using namespace std;

void cambio(int *a,int *b,int *temp)
{
    *temp=*a;
    *a=*b;
    *b=*temp;
}

int main()
{
    int a,b,temp;
    cout<<"Ingrese dos numeros\n"; cin>>a>>b;
    cambio(&a,&b,&temp);
    cout<<"Los numeros al reves:\n"<<a<<"  "<<b;
    return 0;
}
