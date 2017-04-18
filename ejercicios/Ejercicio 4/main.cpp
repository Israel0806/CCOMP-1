#include <iostream>

using namespace std;

long potencia(int a,int b)
{
    long suma=1;
    for(int x=0;x<b;x++)
        suma*=a;
    return suma;
}

int main()
{
    int a,b;
    cout<<"Ingrese la base y la potencia\n"; cin>>a>>b;
    cout<<potencia(a,b);


    return 0;
}
