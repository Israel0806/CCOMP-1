#include <iostream>
using namespace std;



void rever(char pa[],int x,int n)
{
    if(x!=((n/2)+1))
    {
        char temp=pa[x];
        pa[x]=pa[n-x];
        pa[n-x]=temp;
        rever(pa,x+1,n);
    }
}

int main()
{
    char pa[50];
    cout<<"Ingrese la palabra\n"; cin>>pa;
    int x=0,n=0;
    while(pa[x]!='\0')
    {
        n++;
        x++;
    }
    n--;
    x=0;
    rever(pa,x,n);
    cout<<"\nla palabra al reves es: "<<pa;
    return 0;
}
