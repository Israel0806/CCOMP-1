#include <iostream>

using namespace std;

void rever(int l[],int n)
{
    int temp,i=n-1,x=0;
    if(n!=2)
    {
        while(x<=n/2 and i>=0)
        {
            temp=l[x];
            l[x]=l[x+i];
            l[x+i]=temp;
            i-=2;
            x++;
        }
    }
    else
    {
        temp=l[0];
        l[0]=l[1];
        l[1]=temp;
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
    rever(l,n);
    cout<<"\nLa lista al reves sera: \n";
    for(int x=0;x<n;x++)
    {
        cout<<l[x]<<endl;
    }



    return 0;
}
