/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 12, 2016
 ** Description: Project 3.c - Point.hpp and Point.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is the implementation file for Point
 *********************************************************************/
#include "Point.hpp" //includes the header file
#include <cmath> //we use cmath functions in this implementation file

Point::Point() //default constructor, sets coordinates to 0,0
{
    setXCoord(0);
    setYCoord(0);
}
Point::Point(double x, double y) //sets xCoord and yCoord from x and y
{
    setXCoord(x);
    setYCoord(y);
}
void Point::setXCoord(double x) //sets xCoord to x
{
    xCoord = x;
}
void Point::setYCoord(double y)//sets yCoord to y
{
    yCoord = y;
}
double Point::getXCoord() //function that returns the xCoord
{
    return xCoord;
}
double Point::getYCoord() //function that returns the yCoord
{
    return yCoord;
}
/* function that uses a constant referance variable so that one points x and y doesn't overwrite another points x and y */
double Point::distanceTo(const Point &p)//also use of cmath here
{
    return sqrt(pow((p.xCoord - xCoord), 2.0) + pow((p.yCoord - yCoord), 2.0));
}
