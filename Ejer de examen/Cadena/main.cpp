
#include <iostream>
using namespace std;
/*
char rever(char *pa,int n,int x)
{
    if(n==x)
        return *pa;
    char temp, *pa2=pa+n;
    temp=*pa;
    *pa=*pa2;
    *pa2=temp;
    return rever(pa,n--,x--);
}*/

char *rever2(char *pa,int n, int x)
{
    if(n==x)
        return pa;
    char temp, *pa2=pa+n;
    temp=*pa;
    *pa=*pa2;
    *pa2=temp;
    return rever2(pa,n--,x--);
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
    rever2(pa,n,x);
    cout<<"\nla palabra al reves es: "<<pa;
    return 0;
}

