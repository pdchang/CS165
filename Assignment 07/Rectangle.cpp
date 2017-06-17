/*********************************************************************
 ** Author: Philip Chang
 ** Date: November 9, 2016
 ** Description: Project 7.a - Rectangle.cpp - This is the implementation file for class 
 **     Rectangle that has double fields for length and width, set methods for both, and
 **     a constructor that uses the set methods. Also two functions that calculate area and
 **     perimeter of the object. 
 *********************************************************************/

#include "Rectangle.hpp" //includes header for rectangle


Rectangle::Rectangle(double length, double width) //constructor using set methods
{
    setLength(length);
    setWidth(width);
}

void Rectangle::setLength(double length)//set method for length
{
    this->length = length;
}

void Rectangle::setWidth(double width)//set method for width
{
    this->width = width;
}

double Rectangle::area() //area function to calculate area
{
    return length * width;
}

double Rectangle::perimeter() // perimeter function to calculate perimeter
{
    return 2 * (length + width);
}
