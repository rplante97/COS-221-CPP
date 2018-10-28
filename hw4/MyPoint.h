//Ryan Plante
//COS 221
//October 26, 2018

//Header file for MyPoint class
#ifndef MyPoint_H
#define MyPoint_H

class MyPoint
{
protected: //Allows our derived class ThreeDPoint to use these variables
    double x;
    double y;
public:

    MyPoint(); //no arg constructor
    MyPoint(double, double);

    //get functions
    double getX();
    double getY();

    double distance(MyPoint); //distance function
};
#endif