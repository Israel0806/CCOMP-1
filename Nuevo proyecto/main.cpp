#include <iostream>

using namespace std;

int main()
{
    float x,y;
    float a,b,c,d;
    cout<<"Ingrese el valor de x e y:\n";
    cin>>x>>y;
    a=x+y;
    cout <<"La suma de "<<x<<"+"<<y<<" es: " << a << endl;

    cout<<"Ingrese nuevos valores para x e y:\n";
    cin>>x>>y;
    b=x-y;
    cout <<"La resta de "<<x<<"-"<<y<<" es: " << b << endl;

    cout<<"Ingrese nuevos valores para x e y:\n";
    cin>>x>>y;
    c=x*y;
    cout <<"La multiplicacion de "<<x<<"*"<<y<<" es: " << c << endl;

    cout<<"Ingrese nuevos valores para x e y:\n";
    cin>>x>>y;
    d=x/y;
    cout <<"La division de "<<x<<"/"<<y<<" es: " << d << endl;
    return 0;
}
