/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 26, 2016
 ** Description: Project 5.b - Box.hpp and Box.cpp and boxSort.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is the header file for Box
 *********************************************************************/
#ifndef BOX_HPP // guards
#define BOX_HPP

//Box class declaration
class Box
{
private: //private member variables
    double height;
    double width;
    double length;
public: // member function prototypes
    Box();
    Box(double h, double w, double l);
    void setHeight(double h);
    void setWidth(double w);
    void setLength(double l);
    double getVolume();
    double getSurfaceArea();
};
#endif
