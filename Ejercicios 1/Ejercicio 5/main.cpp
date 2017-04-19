#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Ingrese un numero\n"; cin>>a;
    while(a!=-1)
    {
        if(a>=0 and a<=9)
        {
            if(a==0)
                cout<<"Cero\n";
            if(a==1)
                cout<<"Uno\n";
            if(a==2)
                cout<<"Dos\n";
            if(a==3)
                cout<<"Tres\n";
            if(a==4)
                cout<<"Cuatro\n";
            if(a==5)
                cout<<"Cinco\n";
            if(a==6)
                cout<<"Seis\n";
            if(a==7)
                cout<<"Siete\n";
            if(a==8)
                cout<<"Ocho\n";
            if(a==9)
                cout<<"Nueve\n";
        }
        else
            cout<<"Numero fuera de rango\n";
        cin>>a;
    }





    return 0;
}
