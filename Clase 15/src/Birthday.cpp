#include "Birthday.h"

Birthday::Birthday()
{
    year=0;
    month="";
    day=0;
}

Birthday::Birthday(int myYear, string myMonth, int myDay)
    : year(myYear), month(myMonth), day(myDay) {}

int Birthday::getAge()
{
    return (2017-year);
}

Birthday::~Birthday()
{
    //dtor
}
