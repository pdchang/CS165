/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 129, 2016
 ** Description: Project 4.c - Student.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **implementation file
 *********************************************************************/
#include "Student.hpp"
#include <string>
using namespace std;

Student::Student(string n, double s)//intializes name and score
{
    name = n;
    score = s;
}
string Student::getName() // gets name and returns it
{
    return name;
}
double Student::getScore()//gets score and returns it
{
    return score;
}
