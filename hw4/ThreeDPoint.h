//Ryan Plante
//COS 221
//October 26, 2018

//Header file for (derived) ThreeDPoint class 

#include "MyPoint.h"

#ifndef ThreeDPoint_H
#define ThreeDPoint_H


class ThreeDPoint: public MyPoint //ThreeDPoint extends MyPoint
{
private:
    double z;
public:
    ThreeDPoint();
    ThreeDPoint(double, double, double);
    double getZ();
    const double distance(const ThreeDPoint&);
};





#endif