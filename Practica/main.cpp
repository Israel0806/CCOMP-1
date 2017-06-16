#include <iostream>
#include <vector>
using namespace std;


template<class T> class Stack;

template<class T>
Stack<T> operator+(const Stack<T> &s1, const Stack<T> &s2)
{
    Stack<T> result=s1;
    for(unsigned i=0; i<s2.items.size();++i)
        result.items.push_back(s2.items[i]);
    return result;
}

template<class T>
Stack<T> operator-(const Stack<T> &s1, const Stack<T> &s2)
{
    Stack<T> result;
    for(unsigned i=0; i<s1.items.size();++i)
    {
        bool temp=false;
        for(unsigned j=0; j<s2.items.size();++j)
        {
            if(s1.items[i]==s2.items[j])
                temp=true;
        }
        if(temp==false)
            result.push(s1.items[i]);
    }
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
    a.push(5);
    a.push(32);
    b.push(2);
    b.push(1);
    b.push(5);
    b.push(4);
    b.push(11);
    b.push(33);
    Stack<int> c=a+b;
    Stack<int> d=a-b;
    d.mostrar();
    return 0;
}
