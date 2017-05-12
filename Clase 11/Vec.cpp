#include "Vec.h"
#include <math.h>
#include <iostream>
using namespace std;
void Vec::imprimir()
{
    cout<<"start.x: "<<start.x<<" start.y: "<<start.y<<" fin.x: "<<fin.x<<" fin.y: "<<fin.y;
}

int Vec::distancia()
{
    int sum=sqrt(pow((start.x-fin.x),2)+pow((start.y-fin.y),2));
    return sum;
}
