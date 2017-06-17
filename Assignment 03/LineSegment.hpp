/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 12, 2016
 ** Description: Project 3.c - LineSegment.hpp and LineSegment.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is the header file for LineSegment
 *********************************************************************/
#ifndef LINESEGMENT_HPP //guards
#define LINESEGMENT_HPP

#include "Point.hpp" //using point class in LineSegment

class LineSegment
{
    private: //private member variables
        Point point1;
        Point point2;
    public: // public member functions
    void setEnd1(Point);//Point is in setEnd1 and setEnd2 because we're using Points class and not returning value since its void
    void setEnd2(Point);
    Point getEnd1();
    Point getEnd2();
    double length();
    double slope();
    LineSegment(Point, Point); //LineSegment function uses 2 Points
                            //dont need default constructor because we use Points and it'll set points to coords 0,0 if nothing entered.
    };

#endif /* LineSegment_hpp */
