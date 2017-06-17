/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 12, 2016
 ** Description: Project 3.a - Box.hpp and Box.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is the implementation file for Box
 *********************************************************************/
#include "Box.hpp" //implementation file for header

Box::Box() //constructor that sets intial values to 1 for height, width and length
{
    setHeight(1);
    setWidth(1);
    setLength(1);
}
Box::Box(double h, double w, double l) // constructor that sets height, width, and length to h, w, and l
{
    setHeight(h);
    setWidth(w);
    setLength(l);
}
void Box::setHeight(double h) //funciton that sets height to h
{
    height = h;
}
void Box::setWidth(double w) //function that sets width to w
{
    width = w;
}
void Box::setLength(double l) // function that sets length to l
{
    length = l;
}
double Box::getVolume() // function that returns the volume
{
    return length * width * height;
}
double Box::getSurfaceArea() // function that returns the surface area
{
    return (2 * length * width) + (2 * length * height) + (2 * width * height);
}
