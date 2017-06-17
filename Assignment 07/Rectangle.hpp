/*********************************************************************
 ** Author: Philip Chang
 ** Date: November 9, 2016
 ** Description: Project 7.a - Rectangle.hpp - This is the header file for class Rectangle
 *********************************************************************/
#ifndef RECTANGLE_HPP //guards
#define RECTANGLE_HPP

class Rectangle //class declaration
{
    protected: //protected variables makes it visible to square
        double length;
        double width;
    public: //public member functions
        Rectangle(double, double); // constructor
        void setLength(double); // set methods
        void setWidth(double);
        double area(); //area function
        double perimeter(); //perimeter function
};
#endif
