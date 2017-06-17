/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 12, 2016
 ** Description: Project 3.c - LineSegment.hpp and LineSegment.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is the implementation file for LineSegment
 *********************************************************************/
#include "LineSegment.hpp"

LineSegment::LineSegment(Point p1, Point p2) //function that uses setEnd1 and setEnd2, it sets the user
                                            //it sets user variables in parameters
{
    setEnd1(p1);
    setEnd2(p2);
}
void LineSegment::setEnd1(Point p1) //setEnd1, sets user variable to the private member variable in class
{
    point1 = p1;
}
void LineSegment::setEnd2(Point p2)//same thing as setEnd1, but with second user variable
{
    point2 = p2;
}
Point LineSegment::getEnd1() //returns private variable point 1
{
    return point1;
}
Point LineSegment::getEnd2() // returns private variable 2
{
    return point2;
}
double LineSegment::length() // uses distanceTo function from point class to find length
{
    return point1.distanceTo(point2);
}
double LineSegment::slope() //formula for slope, sets new variables x2,x2,y2,y1 using getXCoord and
                            //getYCoord from Point class
                            //returns slope using the formula
{
        double x2 = point2.getXCoord();
        double x1 = point1.getXCoord();
        double y2 = point2.getYCoord();
        double y1 = point1.getYCoord();
    return (y2 - y1) / (x2 - x1);
}
