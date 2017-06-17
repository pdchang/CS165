/*********************************************************************
 ** Author: Philip Chang
 ** Date: November 9, 2016
 ** Description: Project 7.b - MyInteger.cpp - This is the implementation file for class
 **                                            MyInteger
 *********************************************************************/
#include "MyInteger.hpp"

MyInteger& MyInteger::operator=(const MyInteger &object) //overloaded operator function with
                                                //return type MyInteger
{
    if (this != &object)
    {
    delete pInteger;
    pInteger = new int;
    pInteger = object.pInteger;
    setMyInt(object.getMyInt());
    }
    return *this;
}

MyInteger::MyInteger(int object) //constructor
{
    setMyInt(object); //using set method in constructor
}

MyInteger::MyInteger(const MyInteger &object) //copy constructor
{
    pInteger = new int;
    pInteger = object.pInteger;
}

MyInteger::~MyInteger() //deconstructor
{
    delete pInteger; //deletes
}

void MyInteger::setMyInt(int object) //void setMyInt function aka set method
{
    pInteger = new int;
    *pInteger = object;
}

int MyInteger::getMyInt() const //getMyInt function aka get method
{
    return *pInteger;
}
