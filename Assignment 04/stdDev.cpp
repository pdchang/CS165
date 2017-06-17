/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 129, 2016
 ** Description: Project 4.c - stdDev.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is a function called stdDev, that finds the  population standard deviation
 **from an array of pointers
 *********************************************************************/
#include "Student.hpp"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double stdDev(Student* students[], const int SIZE) //function with parameters
{
    double total = 0; //total accumulator
    for (int count = 0; count < SIZE; count ++)//loop that finds the total of scores
    {
        total += students[count]->getScore(); //this allows getscore function to access object
    }
    double average = total / SIZE; // average is the mean

    double sTotal = 0; //sTotal accumulator 
    for (int count = 0; count < SIZE; count++) //loop that adds total of array values minus the mean squared
    {
        sTotal += (((students[count]->getScore()) - average) * ((students[count]->getScore()) - average)); //also uses -> which again allows getscore function to access the object
    }
    double sMean = sTotal / SIZE; //the squared mean is set to the total from the 2nd loop divided by size
    
    double standardDeviation = sqrt(sMean); // uses cmath to find the square root of sMean
    
    return standardDeviation; //returns dev
}
