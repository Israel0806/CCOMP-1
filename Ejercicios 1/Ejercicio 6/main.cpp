#include <iostream>

using namespace std;

int main()
{
    char a; float b,c,resul;
    cout<<"Ingrese el operando y dos numeros\n"; cin>>a>>b>>c;
    if(a=='+')
        resul=b+c;
    else if(a=='-')
        resul=b-c;
    else if(a=='*')
        resul=b*c;
    else if(a=='/')
        resul=b/c;

    cout<<b<<a<<c<<" es: "<<resul;

    return 0;
}
