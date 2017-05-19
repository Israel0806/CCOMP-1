#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
    string model;
    string especiality;
public:
    Truck(const string &, const int, const string &, const string &);
    string getDesc();
    string getModel();
    string getEspeciality();
};

#endif // TRUCK_H
