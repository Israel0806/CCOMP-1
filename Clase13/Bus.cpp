#include "Bus.h"
#include <string>
#include <sstream>
Bus::Bus(const string &myLicense, const int myYear, const int myNroWheel, const int myNroFloor)
    :Vehicle(myLicense,myYear), nroWheel(myNroWheel), nroFloor(myNroFloor) {}

string Bus::getDesc()
{
    stringstream s,s1,s2;
    s<<year; s1<<nroWheel; s2<<nroFloor;
    return "Year: " + s.str() + "\nLicense: " + license + "\nNumber of Wheels: " + s1.str() + "\nNumber of Floors: " + s2.str();
}

int Bus::getNroWheel()
{
    return nroWheel;
}

int Bus::getNroFloor()
{
    return nroFloor;
}
