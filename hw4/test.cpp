//Ryan Plante
//COS 221
//October 26, 2018

//Test file for ThreeDPoint class 

#include <iostream>
#include "MyPoint.h"
#include "ThreeDPoint.h"
using namespace std;

int main(void){
//Output header stuff
cout << "Ryan Plante" << endl;
cout << "COS 221 Homework 4 Output" << endl;

double distance; //Variable for storing our result

//Create our two ThreeDPoints
ThreeDPoint point1;
ThreeDPoint point2(15, 16, 7.5);

cout << "Point 1 values: x = " << point1.getX() << ", y = "<< point1.getY() << ", z = " << point1.getZ() << endl;
cout << "Point 2 values: x = " << point2.getX() << ", y = "<< point2.getY() << ", z = " << point2.getZ() << endl;

//Calculate distance between the two 3D points
distance = point1.distance(point2);
//Print result
cout << "The distance between Point 1 and Point 2 is: " << distance << endl;

}