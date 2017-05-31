#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include <iostream>
using namespace std;

class Birthday
{
    public:
        int year, day;
        string month;
        Birthday(int myYear=0, string myMonth="", int myDay=0);
        virtual ~Birthday();

};

#endif // BIRTHDAY_H
