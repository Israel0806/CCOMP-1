#include <iostream>
#include <vector>
using namespace std;


template<class T> class Stack;

template<class T>
Stack<T> operator+(const Stack<T> &s1, const Stack<T> &s2)
{
    Stack<T> result=s1;
    for(unsigned i=0; i<s1.items.size();++i)
        result.items.push_back(s2.items[i]);
    return result;
}

template<class T>
Stack<T> operator-(const Stack<T> &s1, const Stack<T> &s2)
{
    Stack<T> result;
    //vector<T> result=s1;
    vector<T> temp;
    for(unsigned i=0;i<s1.items.size();++i)
        temp.push_back(s1.items[i]);
    for(unsigned i=0; i<s1.items.size();++i)
    {
        for(unsigned j=0; j<s1.items.size();++j)
        {
            if(result.items[i]==s2.items[j])
                {
                    temp.pop_back(result.items[i]);
                }
        }
    }
    for(unsigned i=0;i<temp.size();++i)
        result.push()
    return result;
}

template<class T>
class Stack{
    friend Stack<T> operator+<>(const Stack<T> &s1, const Stack<T> &s2);
    friend Stack<T> operator-<>(const Stack<T> &s1, const Stack<T> &s2);
    vector<T> items;
public:
    bool empty() const{return items.empty();}
    void push(const T &item) {items.push_back(item);}
    T pop() {
        T last=items.back();
        items.pop_back();
        return last;
    }
    void mostrar()
    {
        for(int i=0;i<items.size();i++)
            cout<<items[i]<<endl;
    }

};



int main()
{
    Stack<int> a,b;
    a.push(1);
    a.push(2);
    a.push(3);
    b.push(2);
    Stack<int> c=a+b;
    Stack<int> d=a-b;
    d.mostrar();
    return 0;
}
