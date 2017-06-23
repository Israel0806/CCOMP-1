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
        if(a.getM()==b.getN() )
        {
            for(int i=0; i<a.getN();i++)
            {
                for(int j=0;j<b.getN();j++)
                {
                    T sum=0;
                    for(int k=0;k<b.getM();k++)
                    {
                        sum+=a.matriz[j][k]*b.matriz[k][j];
                        cout<<sum<<" ";
                    }
                    cout<<"i: "<<i<<" j: "<<j<<endl<<endl;
                    result.matriz[i][j]=sum;
                    cout<<result.matriz[i][j];
                }
            }
        cout<<"Se puede multiplicar\n";
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
    Matriz<int> a(4,3,1);

    Matriz<int> b(3,4,3);

    Matriz<int> c=a*b;

    cout<<c;
    return 0;
}
