/*********************************************************************
 ** Author: Philip Chang
 ** Date: November 9, 2016
 ** Description: Project 7.b - MyInteger.hpp - This is the header file for class MyInteger
 *********************************************************************/
#ifndef MYINTEGER_HPP //guards
#define MYINTEGER_HPP

class MyInteger //class declaration
{
    private:
        int *pInteger; //field of type pointer-to-int called pInteger.
    public:
        MyInteger& operator=(const MyInteger &); //overloaded operator function
        MyInteger(int); //constructor
        MyInteger(const MyInteger &);//copy constructor
        ~MyInteger(); //deconstructor
        void setMyInt(int); //set method
        int getMyInt() const; //get method
        
    
};

#endif
