/*********************************************************************
 ** Author: Philip Chang #933028697
 ** Date: October 5, 2016
 ** Description:Project 2.d fallDistance.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:This program allows the user to enter amount of time something has fallen
 ** and calculates the distance traveled
 *********************************************************************/
#include <iostream>
using namespace std;

const double GRAVITY = 9.8;

//function prototype
double fallDistance(double ftime);
/*int main()
{
    double ftime;

    cout << "This program calculates the distance traveled of a falling object being dropped starting with zero velocity" << endl;
    cout << "Enter how long has the object fell for in seconds?" << endl;
    cin >> ftime;
    cout << "The object traveled " << fallDistance(ftime) << " meters" << endl;

    return 0;

}*/

// fallDistance() is a function that finds distance traveled of falling object
double fallDistance(double ftime){
  double distance;
  distance = (.5) * GRAVITY * ftime * ftime;
  return distance;
}
