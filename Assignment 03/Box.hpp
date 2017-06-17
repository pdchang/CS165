/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 12, 2016
 ** Description: Project 3.a - Box.hpp and Box.cpp
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
