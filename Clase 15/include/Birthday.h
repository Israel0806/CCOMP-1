#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include <iostream>
using namespace std;

class Birthday
{
    public:
        int year, day;
        string month;
        Birthday();
        Birthday(int myYear, string myMonth, int myDay);
        int getAge();
        virtual ~Birthday();

};

#endif // BIRTHDAY_H
