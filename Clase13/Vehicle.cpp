#include "Vehicle.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;
Vehicle::Vehicle(const string &myLicense,const int &myYear)
    : license(myLicense), year(myYear) {}

string Vehicle::getDesc()
{
    // de int a string
    stringstream ss;
    ss<<year;
    return license + " from " + ss.str();
}

string Vehicle::getLicense()
{
    return license;
}

int Vehicle::getYear()
{
    return year;
}
