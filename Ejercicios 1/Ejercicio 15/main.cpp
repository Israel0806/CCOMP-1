#include <iostream>

using namespace std;

bool palindrome(char pa[])
{
    int x=0,a=0,b;
    while(pa[x]!='\0')
    {
        x++;
    }
    x--;
    b=x;
    for(int y=0;y<b/2;y++)
    {
        if(pa[a]!=pa[x])
            return false;
        x--;
        a++;
    }
    return true;
}

int main()
{
    char pa[50];
    cout<<"Ingrese una palabra\n"; cin>>pa;
    cout<<endl<<palindrome(pa)<<endl;


    return 0;
}
