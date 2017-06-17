/*********************************************************************
 ** Author:Philip Chang
 ** Date:November 16, 2016
 ** Description: Project 8.b - implementation for PreferredProject
 *********************************************************************/
#include "PreferredProject.hpp" //includes header

//constructor using base class or CostomerProject constructor
PreferredProject::PreferredProject(double h, double m, double t) : CustomerProject(h,m,t)
{
}

double PreferredProject::billAmount()//define pure virtual function from base class
{
    if (hours > 100) //if loop if hours is greater than 100
    {
        return ((.85 * materials) + (.9 * transportation) + (100 * 80));
        //returns max hour price cause anything over 100 is free, and 90% of transportation and
        //85% of materials
    }
    else //else which is basically anything less than 100 hours
    {
        return ((.85 * materials) + (.9 * transportation) + (80 * hours));
        //returns 85% of materials, 90% of transportation, and $80 per hour added together
    }
}
