/*********************************************************************
 ** Author: Philip Chang
 ** Date: November 9, 2016
 ** Description: Project 7.a - Square.hpp - This is the header file for class Square
 *********************************************************************/
#ifndef SQUARE_HPP //guards
#define SQUARE_HPP

#include "Rectangle.hpp" //includes Rectangle.hpp due to inheritance

class Square : public Rectangle // class declaration with inheritence from Rectangle
{
    public: //public member functions
        Square(double);
        void setLength(double);
        void setWidth(double);
};


#endif
