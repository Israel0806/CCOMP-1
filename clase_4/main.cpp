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
    int arreglo[4];
    cout<<"Ingrese 10 numeros\n";
    for(int x=0;x<4;x++){
        cin>>arreglo[x];
    }
    int temp;

    int i=9,x=0;
    while(x<=5){
        temp=arreglo[x];
        arreglo[x]=arreglo[x+i];
        arreglo[x+i]=temp;
        i-=2;
        x++;
    }

    for(x=0;x<4;x++){
        cout<<"\n"<<arreglo[x]<<endl;
    }






    return 0;
}
