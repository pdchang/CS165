/*********************************************************************
 ** Author:Philip Chang
 ** Date:November 16, 2016
 ** Description: Project 8.a - implementation file for template class ValSet
 *********************************************************************/
#include "ValSet.hpp"//include header
#include <iostream>
#include <cstdlib>
#include <memory>
#include <iostream>
using namespace std;

//default destructor that intailize pointer data member to array
//size 10, intialises variable that store steh size of array to 10
//intializes variable that stores # of values to zero
template <class T>
ValSet<T>::ValSet()
{
    arraySize = 10;
    aSize = 0;
    aptr = new T [arraySize];
}

//copy constructor that initializes pointer data meber to point to
//array of same size as the one being copied, copies over array
//values and copies number of values in set
template <class T>
ValSet<T>::ValSet(const ValSet<T> &obj)
{
    arraySize = obj.arraySize;
    aSize = obj.aSize;
    aptr = new T [arraySize];
    for (int count = 0; count < arraySize; count++)
    {
        aptr[count] = obj.aptr[count];
    }
}
//overloaded assignment operator that initalizes the pointer data
//member to point to an array of the same as as the one being
//copied, copies over the array values, copies the values of
//size of array and number of values in set, returns the objected
//pointed to by this pointer
template <class T>
ValSet<T>& ValSet<T>::operator=(const ValSet<T> &object)
{
    if (this != &object)
    {
        delete [] aptr;
        arraySize = object.arraySize;
        aSize = object.aSize;
        aptr = new T[arraySize];
        for (int count = 0; count < aSize; count++)
        {
            aptr[count] = object.aptr[count];
        }
    }
    return *this;
}
//destructor that deallocates dynamically allocated array by
//deleting pointer
template <class T>
ValSet<T>::~ValSet()
{
    delete [] aptr;
}
//size function that returns number of values in array in this case
//it is called aSize
template <class T>
int ValSet<T>::size()
{
    return aSize;
}
//bool function isEmpty() returns true if ValSet has no values
//returns false otherwise
template <class T>
bool ValSet<T>::isEmpty()
{
    if (aSize == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//bool contains function, uses for loop to see if a parameter of
//type T is in ValSet, if it is, it returns true, else false
template <class T>
bool ValSet<T>::contains(T item)
{

    for (int count = 0; count < aSize; count++)
    {
        if (aptr[count] == item)
        {
            return true;

        }
    }
        return false;

}
//add function, adds parameter of type T to ValSet if the value is
//already not in it, and if the value being added is bigger than
//arraySize it will double hte arraySize than add it, while
//increase aSize or actual number of values in array
template <class T>
void ValSet<T>::add(T item)
{
    T *temp;

    if (!contains(item))
    {
        if (aSize == arraySize)
        {
            temp = new T[arraySize * 2];

            for (int count = 0; count < arraySize; count++)
            {
            temp[count] = aptr[count];
            }
            arraySize = arraySize * 2;

            for(int count = aSize; aSize < arraySize; count++)
            {
                temp[count] = T();
            }
            delete [] aptr;
            aptr = temp;
            aptr[aSize++] = item;

        }
        else
        {
            aptr[aSize++] = item;
        }
    }
}
//remove function that works if parameter of type T has a
//value in ValSet, then removes it by shifting everything over
template <class T>
void ValSet<T>::remove(T item)
{
    if (contains(item))
    {
        T *temp;
        temp = aptr;
        for (int count = 0; count < arraySize; count++)
        {
            if(temp[count] == item)
            {
                for (int i = count; i < arraySize - 1; i++)
                {
                    temp[i] = temp[i+1];
                }
            }
        }

        aptr = temp;
        aSize--;
    }
}
//turns all the values in ValSet into a vector of type T using
//push_back
template <class T>
vector<T> ValSet<T>::getAsVector()
{
    vector<T> vector;
    for(int count = 0; count < arraySize; count++)
    {
        vector.push_back(aptr[count]);
    }
    return vector;
}
//template definitions
template class ValSet<int>;
template class ValSet<char>;
template class ValSet<std::string>;
