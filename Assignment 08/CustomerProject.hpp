/*********************************************************************
 ** Author:Philip Chang
 ** Date:November 16, 2016
 ** Description: Project 8.b - Header for CustomerProject defining the pure virtual function in base class
 *********************************************************************/
#ifndef CUSTOMERPROJECT_HPP //guards
#define CUSTOMERPROJECT_HPP

class CustomerProject //class declaration
{
protected: //protected double variables allowing access to children
    double hours;
    double materials;
    double transportation;
    
public:
    CustomerProject(double,double,double); //constructor
    double getHours(); //get hours function
    double getMaterials(); //get materials function
    double getTransportation(); // get transportation function
    void setHours(double); //set hours function
    void setMaterials(double); //set materials function
    void setTransportation(double); //set transportation function
    
    virtual double billAmount() = 0; //pure virtual function
};

#endif
