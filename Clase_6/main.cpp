#include <iostream>

using namespace std;
int len;
int suma(const int l[])
{
    int suma=0;
    for(int x=0;x<len;x++)
        suma+=l[x];
    return suma;
}

int prom(const int l[])
{
    int suma=0;
    for (int x=0;x<len;x++)
        suma+=l[x];
    return suma/len;
}

void inverse(int l[])
{
    int temp,i=len-1,x=0;
    if(len!=2)
    {
        while(x<=len/2 and i>=0)
        {
            temp=l[x];
            l[x]=l[x+i];
            l[x+i]=temp;
            i-=2;
            x++;
        }
    }
    else{
        temp=l[0];
        l[0]=l[1];
        l[1]=temp;
    }
    cout<<"El arreglo al reves es: \n";
    for(x=0;x<len;x++){
        cout<<l[x]<<endl;
    }

}


void orden(int l[])
{
    int temp;
    for(int j=0;j<len;j++)
    {
        for (int i=0;i<len;i++)
        {
            if(l[i]>l[i+1])
            {
                temp=l[i+1];
                l[i+1]=l[i];
                l[i]=temp;
            }
        }
    }
    cout<<"El arreglo ordenado es: \n";
    for(int x=0;x<len;x++)
    {
        cout<<l[x]<<endl;
    }
}

int cadena(char str[])
{
    int sum=0;
    int x=0;
    while((char)isalpha(str[x])and str!='\0')
    {
        sum++;
        x++;
    }
    return sum;
}

int main()
{
    cout<<"Cuantos elementos tendra el arreglo?\n"; cin>>len;
    int l[len];
    cout<<"Ingrese los numeros\n";
    for(int x=0;x<len;x++)
        cin>>l[x];

    cout<<"La suma es: "<<suma(l);
    cout<<endl<<"El promedio sera: "<<prom(l)<<endl;
    inverse(l);
    orden(l);
    char str[50];
    cout<<"\nIngrese una cadena\n"; cin>>str;
    cout<<cadena(str);



    return 0;
}
