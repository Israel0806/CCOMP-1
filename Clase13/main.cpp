#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Bus.h"

using namespace std;

int main()
{
    Vehicle v("V6F-234",1998);
    Car c("V6F-234",1998,"Nissan");
    //cout<<c.getDesc()<<endl;
    Truck t("V32-122",1992,"Caterpillar","Escabadora");
    //cout<<t.getEspeciality()<<"  "<<t.getModel();
    //cout<<t.getDesc();
    Bus b("V32-122",1992,32,4);
    cout<<b.getDesc();

    return 32;
}
