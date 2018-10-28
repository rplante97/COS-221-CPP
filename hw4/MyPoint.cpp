//Ryan Plante
//COS 221
//October 26, 2018

#include "MyPoint.h"
#include <cmath>
using namespace std;

//Our no arg constructor will set both coordinates to 0
MyPoint::MyPoint() {
    x = 0;
    y = 0;
}

//Let user create a point with the given coordinates
MyPoint::MyPoint(double x_coordinate, double y_coordinate){
    x = x_coordinate;
    y = y_coordinate;
}

//Getters
double MyPoint::getX() {
    return x;
}
double MyPoint::getY() {
    return y;
}

//Distance functions: the formula for distance on a 2D plane is sqrt( (x2-x1)^2 + (y2-y1)^2 )
double MyPoint::distance(MyPoint second_point){
    return sqrt( pow( (second_point.x - x), 2) + pow( (second_point.y - y), 2) );
}