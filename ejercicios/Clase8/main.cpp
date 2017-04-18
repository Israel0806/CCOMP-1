#include <iostream>

using namespace std;

int main()
{
    float a;
    cout<<"Ingrese la distancia en millas\n"; cin>>a;
    if(a>0)
    {
        a*=1.60934;
        cout<<"\nLa distancia en millas es: "<<a;
    }
    else
        cout<<"\nLa distancia no puede ser negativa\n";
    return 0;
}
