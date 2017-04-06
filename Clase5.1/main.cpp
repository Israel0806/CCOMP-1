#include <iostream>

using namespace std;

int main()
{
    /*int a;
    cout<<"Ingrese el numero maximo\n"; cin>>a;
    int b,div;
    for (int x=2;x<a;x++)
    {
        b=1;
        div=0;
        while(b<=x)
        {
            if(x%b==0)
            {
                div++;
            }
            b++;
        }
        b--;
        if(div==2)
        {
            cout<<b<<" es primo\n";
        }
    }*/

    int a;
    cout<<"Ingrese el numero enesimo primo\n"; cin>>a;
    int b,div,c=0,x=2;
    while(c<a)
    {
        b=1;
        div=0;

        while(b<=x)
        {
            if(x%b==0)
            {
                div++;
            }
            b++;
        }
        b--;
        if(div==2)
        {
            c++;
        }
        cout<<"c "<<c<<"   x "<<x<<endl;
        x++;
    }
    cout<<"El numero "<<a<<" primo es: "<<b;

    return 0;
}
