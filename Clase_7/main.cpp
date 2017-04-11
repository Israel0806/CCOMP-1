#include <iostream>

using namespace std;

int suma(int *l,int len)
{
    int suma=0,x=0;
    while(x<len)
    {
        suma+=*l;
        x++;
        l++;
    }
    return suma;
}

int prom(int *l,int len)
{
    int suma=0,x=0;
    while(x<len)
    {
        suma+=*l;
        x++;
        l++;
    }
    return suma/len;
}

void inverse( int *l,int len)
{
    int temp,i=len-1,x=0;
    int *l2=l+i;
    int *l3=l;
    if(len!=2)
    {
        while(x<=len/2 and i>=0)
        {
            temp=*l3;
            *l3=*l2;
            *l2=temp;
            l2--;
            l3++;
            x++;
            i-=2;
            /*temp=l[x];
            l[x]=l[x+i];
            l[x+i]=temp;
            i-=2;
            x++;*/
        }
    }
    /*else{
        temp=*l;
        *l=*++l;
        *l=temp;
        *--l;
    }*/
    cout<<"El arreglo al reves es: \n";
    for(x=0;x<len;x++)
    {
        cout<<*l<<endl;
        l++;
    }

}


void orden(int *l,int len)
{
    int temp;
    int *l2=l,*l3=l+1;
    for(int j=0;j<len;j++)
    {
        for (int i=0;i<len;i++)
        {
            if(*l2>*l3)
            {
                temp=*l3;
                *l3=*l2;
                *l2=temp;
            }
            l2++;
            l3++;
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
    int len;
    cout<<"Cuantos elementos tendra el arreglo?\n"; cin>>len;
    int l[len];
    cout<<"Ingrese los numeros\n";
    for(int x=0;x<len;x++)
        cin>>l[x];

    cout<<"La suma es: "<<suma(l,len);
    cout<<endl<<"El promedio sera: "<<prom(l,len)<<endl;
    inverse(l,len);
    orden(l,len);
    char str[50];
    cout<<"\nIngrese una cadena\n"; cin>>str;
    cout<<cadena(str);



    return 0;
}
