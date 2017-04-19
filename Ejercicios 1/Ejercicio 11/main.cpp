#include <iostream>

using namespace std;

void multiplicacion(int i1,int j1,int i2,int j2)
{
    int temp=0,l[i1][j2],ma1[i1][j1],ma2[i2][j2];
    cout<<" Matriz 1: \n";
    for(int x=0;x<i1;x++)
    {
        cout<<"Ingrese los valores de la fila "<<x+1<<endl;
        for(int y=0;y<j1;y++)
        {
            cin>>ma1[x][y];
        }
    }
    cout<<" Matriz 2: \n";
    for(int x=0;x<i2;x++)
    {
        cout<<"Ingrese los valores de la fila "<<x+1<<endl;
        for(int y=0;y<j2;y++)
        {
            cin>>ma2[x][y];
        }
    }

    for(int x=0;x<i1;x++)  //nmr de repe
    {
        for(int y=0;y<j2;y++)  // y recorre las filas
        {
            temp=0;
            for(int z=0;z<i2;z++) // recorre columnas
            {
                temp+=ma1[x][z]*ma2[z][y];
            }
            l[x][y]=temp;
        }
    }
    cout<<"EL resultado es: \n";
    for(int x=0;x<i1;x++)
    {
        for(int y=0;y<j2;y++)
        {
            cout<<l[x][y]<<"  ";
        }
        cout<<endl;
    }

}


int main()
{
    int j1,j2,i1,i2;
    cout<<"Ingrese las filas y columnas de la matriz 1\n"; cin>>i1>>j1;
    cout<<"Ingrese las filas y columnas de la matriz 2\n"; cin>>i2>>j2;
    if(j1==i2)
        multiplicacion(i1,j1,i2,j2);
    else
        cout<<"No se puede multiplicar las matrices\n";
    return 0;
}
