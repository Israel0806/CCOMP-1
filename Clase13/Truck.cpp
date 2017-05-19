#include "Truck.h"
#include <string>
#include <sstream>

using namespace std;


Truck::Truck(const string &myLicense, const int myYear, const string &myModel, const string &myEspeciality)
    : Vehicle(myLicense, myYear), model(myModel), especiality(myEspeciality) {}

string Truck::getDesc()
{
    stringstream ss;
    ss<<year;
    return "Year: " + ss.str() + "\nLicense: " + license + "\nModel: " + model + "\nEspeciality: " + especiality;
}


string Truck::getModel()
{
    return model;
}

string Truck::getEspeciality()
{
    return especiality;
}
