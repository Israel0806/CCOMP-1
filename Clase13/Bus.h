#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus : public Vehicle
{
    private:
        int nroWheel;
        int nroFloor;
    public:
        Bus(const string &, const int, const int, const int);
        string getDesc();
        string getNroWheel();
        string getNroFloor();
};

#endif // BUS_H
