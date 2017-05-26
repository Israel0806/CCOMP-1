#ifndef CAR_H
#define CAR_H
#include <string>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
    string style;
public:
    Car(const string &,const int,const string &);
    string getDesc();
    string getStyle();

};

#endif // CAR_H
