#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"

class Rectangle: public Polygon
{
    public:
        Rectangle(Point &a,Point &b);
        Rectangle(int a, int b, int c, int d);
        virtual double area() ;
        ~Rectangle();
};

#endif // RECTANGLE_H
