/*********************************************************************
 ** Author:Philip Chang
 ** Date:November 16, 2016
 ** Description: Project 8.b - header for PreferredProject
 *********************************************************************/
#ifndef PREFERREDPROJECT_HPP //guards
#define PREFERREDPROJECT_HPP

#include "CustomerProject.hpp" //including base class

class PreferredProject : public CustomerProject //class PreferredProject inheriting from
                                                //CustomerProject
{
public:
    PreferredProject(double,double,double); //constructor
    double billAmount(); //virtual function defined in child class and overrides
};

#endif
