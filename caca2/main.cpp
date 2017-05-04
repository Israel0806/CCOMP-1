#include <iostream>

using namespace std;

int main()
{
    int lista[]={0,0,0,0,0,0,0,0};
    int x=41649;
    while(x!=0)
    {
        if(x/50000>=1)
            {
                lista[0]=x/10000;
                x=x%10000;
            }
        if(x/10000>=1)
            {
                lista[1]=x/10000;
                x=x%10000;

            }
        if(x/1000>=1)
            {
                lista[2]=x/1000;
                x=x%1000;
            }
        if(x/100>=1)
            {
                lista[3]=x/100;
                x=x%100;
            }
        if(x/50>=1)
            {
                lista[4]=x/50;
                x=x%50;
            }
        if(x/10>=1)
            {
                lista[5]=x/10;
                x=x%10;
            }
        if(x/5>=1)
            {
                lista[6]=x/5;
                x=x%5;
            }
        if(x/1>=1)
            {
                lista[7]=x/1;
                x=x%1;
            }
    }
        for(int y=0;y<7;y++)
            cout<<lista[y]<<"    ";


    return 0;
}
