#include <iostream>

using namespace std;

int main()
{
    /*int arreglo[4],temp[4];
    cout<<"Ingrese 4 numeros\n";
    cin>>arreglo[0]>>arreglo[1]>>arreglo[2]>>arreglo[3];
    temp[3]=arreglo[0];
    temp[2]=arreglo[1];
    temp[1]=arreglo[2];
    temp[0]=arreglo[3];

    arreglo[0]=temp[0];
    arreglo[1]=temp[1];
    arreglo[2]=temp[2];
    arreglo[3]=temp[3];

    cout<<"\n"<<arreglo[0];
    cout<<"\n"<<arreglo[1];
    cout<<"\n"<<arreglo[2];
    cout<<"\n"<<arreglo[3];*/

    int arreglo[10],temp;
    cout<<"Ingrese 10 numeros\n";
    for(int x=0;x<10;x++){
        cin>>arreglo[x];
    }
    /*
    1 2 3 4 5 6 7 8 9 10
    0 9 9
    1 7 8
    2 5 7
    3 3 6
    4 1 5
    5 -1 5

    int i=9,x=0;
    while(x<=5){
        temp=arreglo[x];
        arreglo[x]=arreglo[x+i];
        arreglo[x+i]=temp;
        i-=2;
        x++;
    }

    for(x=0;x<10;x++){
        cout<<"\n"<<arreglo[x]<<endl;
    }*/

    int arreglo[10],temp=0,mayor;
    cout<<"Ingrese 10 numeros\n";
    for(int x=0;x<10;x++){
        cin>>arreglo[x];
        temp+=arreglo[x];
    }
    cout<<"La suma es "<<temp;

    mayor=arreglo[0];
    for (int x=1;x<10;x++){
        if(arreglo[x]>mayor){
            mayor=arreglo[x];
        }
    }
    cout<<"El mayor es "<<mayor;




    return 0;
}
