/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 12, 2016
 ** Description: Project 3.c - Point.hpp and Point.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is the header file for Point
 *********************************************************************/
#ifndef POINT_HPP //guards
#define POINT_HPP

class Point
{
    private://private member variables
        double xCoord;
        double yCoord;
    public://public member functions
        Point();
        Point(double x, double y);
        void setXCoord(double x);
        void setYCoord(double y);
        double getXCoord();
        double getYCoord();
        double distanceTo(const Point &p); //constant reference variable because there are 2 points
    
};


#endif
