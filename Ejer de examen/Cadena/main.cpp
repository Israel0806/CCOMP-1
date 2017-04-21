#include <iostream>
using namespace std;

char rever(char pa[],int n,int x)
{
    cout<<"n "<<n<<" x "<<x<<endl;
    char temp;
    for(int x=0;x<=3;x++)
        cout<<pa[x];
    cout<<endl;
    if(n<0)
        return
    temp=pa[x];
    pa[x]=pa[x+n];
    pa[x+n]=temp;
    n-=2;
    x++;
    return rever(pa,n,x);

    //cout<<"\nla palabra al reves es: "<<pa;
}
int main()
{
    char pa[50];
    cout<<"Ingrese la palabra\n"; cin>>pa;
    int x=0,n=0;
    char temp;
    while(pa[x]!='\0')
    {
        n++;
        x++;
    }
    n--;
    x=0;
    rever(pa,n,x);
    cout<<"\nla palabra al reves es: "<<pa;
    return 0;
}
