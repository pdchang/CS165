/*********************************************************************
 ** Author:Philip Chang
 ** Date:November 16, 2016
 ** Description:Project 8.b -  Header for RegularProject
 *********************************************************************/

#ifndef REGULARPROJECT_HPP //guards
#define REGULARPROJECT_HPP

#include "CustomerProject.hpp" //including base class

class RegularProject : public CustomerProject //class declaration inheriting from CustomerProject
{
public:
    RegularProject(double,double,double); //constructor
    double billAmount();//virtual function defined in child class and overrides
};

#endif
