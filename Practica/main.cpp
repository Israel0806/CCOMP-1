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

template<class T> class Queue;

template<class T>
Queue<T> operator+(const Queue<T> &s1, const Queue<T> &s2)
{
    Queue<T> result=s1;
    for(unsigned i=0; i<s2.items.size();++i)
        result.items.push_back(s2.items[i]);
    return result;
}

/*template<class T>
ostream &operator<<(ostream &o,const Queue<T> &s1)
{
    for(unsigned i=0; i<s1.items.size();++i)
        o<<s1.items[i];
    return o;
}*/


template<class T>
class Queue
{
    friend Queue<T> operator+<>(const Queue<T> &s1, const Queue<T> &s2);
    friend ostream &operator<<(ostream &o,const Queue<T> &s1)
    {
        for(unsigned i=0; i<s1.items.size();++i)
            o<<s1.items[i]<<endl;
        return o;
    }
    vector<T> items;
public:
    bool empty() const{return items.empty();}
    void push(const T &item) {items.push_back(item);}
    T pop() {
        T first=items.front();
        items.pop_back();
        return first;
    }
};


int main()
{
    Stack<int> a,b;
    a.push(1);
    a.push(2);
    a.push(3);
    b.push(2);
    b.push(33);
    Stack<int> c=a+b;
    Stack<int> d=a-b;
    Queue<int> x,y;
    x.push(1);
    x.push(2);
    y.push(3);
    Queue<int> w=x+y;
    cout<<w<<endl<<x<<endl<<y;
    return 0;
}
