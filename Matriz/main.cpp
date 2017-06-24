#include <iostream>

using namespace std;

template <class T>

class Matriz
{
    T n,m;
    T **matriz;
public:
    Matriz (T n, T m)
    {
        this->n=n;
        this->m=m;
        matriz=new int *[n];
        for(int i=0;i<n;i++)
        {
            matriz[i]=new int[m];
        }
    }
    Matriz (T n, T m, T a)
    {
        this->n=n;
        this->m=m;
        matriz=new int *[n];
        for(int i=0;i<n;i++)
        {
            matriz[i]=new int[m];
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                matriz[i][j]=a;
            }
        }
    }

    T getN() { return n; }
    T getM() { return m; }

    friend Matriz<T> operator *(Matriz<T> &a, Matriz<T> &b)
    {
        Matriz<T> result(a.getN(),b.getM());
        if(a.getM()==b.getN())
        {
            for(int i=0; i<result.getN();i++)
            {
                for(int j=0;j<result.getM();j++)
                {
                    T sum=0;
                    for(int k=0;k<b.getN();k++)
                    {
                        sum+=a.matriz[i][k]*b.matriz[k][j];
                    }
                    result.matriz[i][j]=sum;
                }
            }
        }
        else
        {
            cout<<"No se puede multiplicar\n";
        }
        return result;
    }

    friend ostream &operator<<( ostream &o,Matriz &a)
    {
        for(int i=0;i<a.getN();i++)
        {
            o<<"  ";
            for(int j=0;j<a.getM();j++)
            {
                o<<a.matriz[i][j]<<" ";
            }
            o<<endl;
        }
        return o;
    }
};


int main()
{
    Matriz<int> a(2,3,1);

    Matriz<int> b(3,3,2);

    Matriz<int> c=a*b;

    cout<<"Matriz resultante:"<<endl<<c;
    return 0;
}
