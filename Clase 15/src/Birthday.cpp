#include "Birthday.h"


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
