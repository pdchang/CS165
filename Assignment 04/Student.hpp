/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 129, 2016
 ** Description: Project 4.c - Student.hpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **header file for Student.cpp
 *********************************************************************/
#ifndef STUDENT_HPP // guards
#define STUDENT_HPP

#include <string>
using namespace std;

class Student // class declaration
{
    private: // private member variables
        string name;
        double score;
    public: // public member functions
    Student(string n, double s);
    string getName();
    double getScore();
};

#endif
