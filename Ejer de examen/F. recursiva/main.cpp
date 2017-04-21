#include <iostream>

using namespace std;

int suma(int l[],int n,int sum)
{
    if(n==-1)
        return sum;
    sum+=l[n];
    return suma(l,n-1,sum);
}


int main()
{
    int n,sum=0;
    cout<<"Ingrese la longitud del array\n"; cin>>n;
    int l[n];
    cout<<"Ingrese el array\n";
    for(int x=0;x<n;x++)
    {
        cin>>l[x];
    }
    n--;

    cout<<"La suma es "<<suma(l,n,sum);

    return 0;
}
