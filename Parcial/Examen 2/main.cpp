#include <iostream>

using namespace std;

void refer(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void puntero(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void punt2(int **a,int **b)
{
    int temp=**a;
    **a=**b;
    **b=temp;
}

int main()
{
    int a=5,b=4;
    refer(a,b);
    cout<<" a y b por referencia: "<<a<<"  "<<b<<endl;
    puntero(&a,&b);
    cout<<" a y b por puntero: "<<a<<"  "<<b<<endl;
    int *pa=&a,*pb=&b;
    punt2(&pa,&pb);

    cout<<" a y b por punt2: "<<a<<"  "<<b<<endl;
    return 32;
}
