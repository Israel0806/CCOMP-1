#include <iostream>

using namespace std;

int main()
{
    float f,c;
    cout<<"Grados Celsius y fahrenheit\n";
    cout<<"  Fahrenheit    Celcius\n";
    for(f=0;f<=300;f+=20)
    {
        c=(f-32)*5/9;
        cout<<"     "<<f<<"         "<<c<<endl;
    }

    return 0;
}
