//Ryan Plante
//COS 221
//October 26, 2018

//ThreeDPoint class implementation

#include "ThreeDPoint.h"
#include <cmath>
using namespace std;

//No arg constructor only needs to set z to 0, as it calls mypoints 
//no arg constructor that handles x and  y
ThreeDPoint::ThreeDPoint(){
    z = 0;
}

//Creates a point in 3D space, much like the above no arg constructor this function 
//inherits the two argument constructor from MyPoint, as such we can pass the x_coordinate
//and y_coordinate to to the mypoint constructor
ThreeDPoint::ThreeDPoint(double x_coordinate, double y_coordinate, double z_coordinate) : MyPoint(x_coordinate, y_coordinate) {
    z = z_coordinate;
}

//Getter
double ThreeDPoint::getZ(){
    return z;
}

//3D Point distance function, same equation as in MyPoints distance function however we must add a statement for the
//z term within the sqrt
const double ThreeDPoint::distance(const ThreeDPoint& other_3D_point){
    return sqrt( pow( (other_3D_point.x - x), 2) + pow( (other_3D_point.y - y), 2) + pow( (other_3D_point.z - z), 2) );
}
