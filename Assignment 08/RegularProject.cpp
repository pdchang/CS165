/*********************************************************************
 ** Author:Philip Chang
 ** Date:November 16, 2016
 ** Description: Project 8.b - implementation file for RegularProject
 *********************************************************************/
#include "RegularProject.hpp" //including header

//constructor for child class that calls constructor for CustomerProject
RegularProject::RegularProject(double h,double m,double t) : CustomerProject(h, m, t)
{
}

double RegularProject::billAmount()//defines the virtual function using protected members
{
    return ((80 * hours) + materials + transportation);
    //returns 80 times hours, materials and transporation added together
}
