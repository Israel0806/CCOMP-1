#ifndef POLYGON_H
#define POLYGON_H
#include "PointArray.h"

class Polygon
{
protected:
    static int numPolygons;
    PointArray points;
public:
    Polygon(PointArray &pa);
    Polygon(Point points[], int numPoints);
    virtual double area() const=0;
    static int getNumPolygons();
    int getNumSides() const ;
    const PointArray *getPoints() const{return &points;}

    ~Polygon();

};

#endif // POLYGON_H
