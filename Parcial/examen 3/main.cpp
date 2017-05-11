#include <iostream>

using namespace std;

void comparar(int *a,int j)
{
    while((*(a+j)>*(a+j-1)) and j>0)
    {
        int temp=*(a+j);
        *(a+j)=*(a+j-1);
        *(a+j-1)=temp;
        j--;
    }
}

void orden(int a[],int n,int i)
{
    if(i<=n)
    {
        int j=i;
        comparar(a,j);
        orden(a,n,i+1);
    }
}

int main()
{
    int a[]={1,2,3,4,5,6};
    int n=5,i=1;
    orden(a,n,i);

    for(int x=0;x<=n;x++)
        cout<<a[x]<<"  ";

    return 0;
}
