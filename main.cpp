#include <iostream>

using namespace std;

int main()
{
    /*float a,r,h;
    cout << "Ingrese el radio del circulo\n";
    cin>>r;
    a=3.1416*(r*r);
    cout<<"El area del circulo es: "<<a;

    cout<<"\n\nIngrese el lado del cuadrado\n";
    cin>>r;
    a=r*r;
    cout<< "El area del cuadrado es: "<<a;

    cout<<"\n\nIngrese la base y la altura del triangulo\n";
    cin>>r>>h;
    a=(r*h)/2;
    cout<<"El area del triangulo es: "<<a<<endl;

    float c,d;
    cout<<"Ingrese dos valores a y b\n";
    cin>>c>>d;
    c=c+d;
    d=c-d;
    c=c-d;
    cout<< "los valores intercambiados son:"<<endl<< "a="<<c<<endl<<"b="<<d<<endl;

    float a,b;
    cout<<" Ingrese dos numeros\n";
    cin>>a>>b;
    if (a>b){
        cout<<a<<" es mayor que "<<b;

    }
    else{
        if(b>a){
            cout<<b<<" es mayor que "<<a;
        }
        else{
            cout<<a<<" y "<<b<<" son iguales";
        }
    }*/

    float a,b,c;
    cout<<"Ingrese 3 numeros\n";
    cin>>a>>b>>c;
    if (a>b and a>c){
        cout<<a<<" es el mayor numero";
    }
    else{
        if (b>a and b>c){
            cout<<b<<" es el mayor numero";
        }
        else{
            cout<<c<<" es el mayor numero";
        }
    }
    return 0;
}
