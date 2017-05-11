#include <iostream>

using namespace std;

int cadena(char a[],int n)
{
    int b[n+1],suma=0;
    for(int x=0;x<=n;x++)
    {
        if(a[x]=='0')
            b[x]=0;
        if(a[x]=='1')
            b[x]=1;
        if(a[x]=='2')
            b[x]=2;
        if(a[x]=='3')
            b[x]=3;
        if(a[x]=='4')
            b[x]=4;
        if(a[x]=='5')
            b[x]=5;
        if(a[x]=='6')
            b[x]=6;
        if(a[x]=='7')
            b[x]=7;
        if(a[x]=='8')
            b[x]=8;
        if(a[x]=='9')
            b[x]=9;
    }
    int c=n-1;
    for(int x=0;x<=n;x++)
    {
        for(int y=c;y>=0;y--)
        {
            if(x==n)
                b[x]*=1;
            else
                b[x]*=10;
        }
        c--;
    }
    for(int x=0;x<=n;x++)
        suma+=b[x];
    return suma;
}

int main()
{
    char a[]="32",n=0;
    while(a[n]!='\0')
        n++;
    n--;
    cout<<"El numero es: "<<cadena(a,n);
    return 0;
}
