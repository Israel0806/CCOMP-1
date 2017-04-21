#include <iostream>

using namespace std;

void multiplicacion(int i1,int j1,int i2,int j2)
{
    long l1[i1][j1],l2[i2][j2],l3[i1][j2];
    cout<<"Matriz 1\n\n";
    for(int i=0;i<i1;i++)
    {
        cout<<"fila "<<i+1<<endl;
        for(int j=0;j<j1;j++)
            cin>>l1[i][j];
    }
    cout<<"\nMatriz 2\n";
    for(int i=0;i<i2;i++)
    {
        cout<<"fila "<<i+1<<endl;
        for(int j=0;j<j2;j++)
            cin>>l2[i][j];
    }
    int suma=0;
    for(int x=0;x<i1;x++)
    {
        for(int y=0;y<i1;y++)
        {
            suma=0;
            for(int z=0;z<i1;z++)
                suma+=l1[x][z]*l2[z][y];
            l3[x][y]=suma;
        }
    }
    cout<<"\nMatriz resultante\n";
    for(int i=0;i<i2;i++)
    {
        for(int j=0;j<j2;j++)
            cout<<l3[i][j]<<"  ";
        cout<<endl;
    }

}
int main()
{
    long i1,i2,j1,j2;
    cout<<"Ingrese numero de filas y columnas de matriz 1\n"; cin>>i1>>j1;
    cout<<"Ingrese numero de filas y columnas de matriz 2\n"; cin>>i2>>j2;
    if(j1==i2)
        multiplicacion(i1,j1,i2,j2);
    else
        cout<<"La matrices no pueden ser multiplicadas\n";
    return 0;
}
