#include <iostream>
using namespace std;

int suma(int l[],int n,int &sum)
{
    if (n==-1)
        return sum;
    sum+=l[n];
    return suma(l,n-1,sum);
}

int main()
{
    int n,sum=0;
    cout<<"Ingrese el largo de la lista\n"; cin>>n;
    int l[n];
    cout<<"Ingrese los elementos\n";
    for(int x=0;x<n;x++)
        cin>>l[x];
    cout<<"La suma de los elementos de la lista es: "<<suma(l,n-1,sum)<<endl;

    return 0;
}
