#include <iostream>

using namespace std;

void rever(int *l,int n)
{
    int *l2=l+n-1,*l3=l;
    int temp,i=n-1,x=0;
    if(n!=2)
    {
        while(x<=n/2 and i>=0)
        {
            temp=*l2;
            *l2=*l3;
            *l3=temp;
            i-=2;
            x++;
            l2--;
            l3++;
        }
    }
    else
    {
        l2=l,l3=l+1;
        temp=*l2;
        *l2=*l3;
        *l3=temp;
    }
}

int main()
{
    int n;
    cout<<"Cuantos numeros ingresara?\n"; cin>>n;
    int l[n];
    cout<<"Ingrese los numeros\n";
    for(int x=0;x<n;x++)
        cin>>l[x];
    rever(l,n); //ni la mas remote idea que hacer
    cout<<"\nLa lista al reves sera: \n";
    for(int x=0;x<n;x++)
    {
        cout<<l[x]<<endl;
    }



    return 0;
}
