#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
protected:
    string license;
    int year;
public:
    Vehicle(const string &, const int &);
    string getDesc() ;
    string getLicense();
    int getYear();
};

#endif // VEHICLE_H
