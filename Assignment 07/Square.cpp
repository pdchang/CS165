/*********************************************************************
 ** Author: Philip Chang
 ** Date: November 9, 2016
 ** Description: Project 7.a - Square.cpp - This is the implementation file for class Square
 **     This class inherits from rectangle. Has a constructor that has one double parameter
 **     and passes it to the base class or rectangle constructor for both parameters. It also has
 **     set functions that override the set functions from rectangle.
 *********************************************************************/

#include "Square.hpp"




Square::Square(double s) : Rectangle(s,s)//constructor for square that passes to rectangle class
{
}

void Square::setLength(double s) // set method that overwrites from base class
{
    Rectangle::setLength(s);
    Rectangle::setWidth(s);
}
void Square::setWidth(double s)//set method that overwrites from base class
{
    Rectangle::setLength(s);
    Rectangle::setWidth(s);
}
