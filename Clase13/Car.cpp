#include "Car.h"
#include <string>
#include <sstream>

using namespace std;

Car::Car(const string &myLicense,const int myYear,const string &myStyle)
    : Vehicle (myLicense,myYear), style(myStyle) {}

string Car::getDesc()
{
     stringstream ss;
     ss<<year;
     return "Year: " + ss.str() + "\nStyle: " + style + "\nLicense: " + license;
}

string Car::getStyle()
{
    return style;
}
