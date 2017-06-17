/*********************************************************************
 ** Author:Philip Chang
 ** Date:November 16, 2016
 ** Description: Project 8.b - implementation file for CustomerProject
 *********************************************************************/
#include "CustomerProject.hpp" //including header

CustomerProject::CustomerProject(double h, double m, double t) //constructor
{
    setHours(h); //using set methods to construct
    setMaterials(m);
    setTransportation(t);
}

double CustomerProject::getHours() //get function that returns hours
{
    return hours;
}
double CustomerProject::getMaterials() // get function that returns materials
{
    return materials;
}
double CustomerProject::getTransportation() // get function that returns transportation
{
    return transportation;
}
void CustomerProject::setHours(double h)//set function that sets h to hours
{
    hours = h;
}
void CustomerProject::setMaterials(double m) //set function that sets m to materials
{
    materials = m;
}
void CustomerProject::setTransportation(double t) //set function that sets t to transportation
{
    transportation = t;
}
