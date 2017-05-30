#include <iostream>
#include <vector>

using namespace std;

class Avion {
public:
    virtual void mensaje()=0;
};

class Avion_1 : public Avion {
public:
    void mensaje() { cout<<"Avion_1\n"; }
};

class Avion_2 : public Avion {
public:
    void mensaje() { cout<<"Avion_2\n"; }
};

class Torre {
public:
    vector<Avion *> aviones;
    Torre() {}
    void add(Avion_1 w){
    aviones.push_back(&w);
    w.mensaje();
    }
    void add(Avion_2 w){
    aviones.push_back(&w);
    w.mensaje();
    }
};

int main()
{
    Avion_1 a;
    Avion_2 b;
    Torre t;
    t.add(a);
    t.add(b);


    return 32;
}
