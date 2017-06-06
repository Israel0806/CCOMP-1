#include "Polygon.h"
#include "Point.h"
#include "Rectangle.h"
#include <iostream>

int Polygon::numPolygons=0;

Polygon::Polygon(Point pointArr[],int numPoints)
    : points(pointArr, numPoints) {
    ++numPolygons;
        }

int Polygon::getNumPolygons()
{
    return numPolygons;
}

int Polygon::getNumSides() const
{
    return points.getSize();
}

Polygon::~Polygon()
{
    --numPolygons;
}

Point constructorPoints[4];

Point *updateConstructorPoints(const Point &p1, const  Point &p2, const  Point &p3, const  Point &p4=Point(0,0))
{
    constructorPoints[0]=p1;
    constructorPoints[1]=p2;
    constructorPoints[2]=p3;
    constructorPoints[3]=p4;
    return constructorPoints;
}

Rectangle::Rectangle(Point &a, Point &b)
    : Polygon(updateConstructorPoints(a,
                                      Point(a.getX() , b.getY()),
                                       b , Point(b.getX() , a.getY()))
                                       , 4) {}

Rectangle::Rectangle(int ax, int ay, int bx, int by)
    : Polygon(updateConstructorPoints(Point(ax,ay)
                                      , Point(ax,by)
                                      , Point(bx,by)
                                      , Point(bx, ay))
              , 4) {}

double Rectangle::area()
{
    int length=points.get(1)->getY() - points.get(0)->getY();
    int width=points.get(2)->getX() - points.get(1)->getX();
    return abs((double)length*width);
}



