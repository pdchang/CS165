/*********************************************************************
 ** Author:Philip Chang
 ** Date:November 16, 2016
 ** Description: Project 8.a - header file for template class ValSet
 *********************************************************************/
#ifndef VALSET_HPP
#define VALSET_HPP//guards

#include <vector>//include vector
using namespace std;

template <class T>
class ValSet
{
private:
    T *aptr; //pointer to T
    int arraySize; // array size
    int aSize; //actual number of values in the array
public:
    ValSet(); //default constructor
    ValSet(const ValSet<T> &); //copy constructor
    ValSet& operator=(const ValSet<T> &); //overloaded assignment operator
    ~ValSet(); //destructor that dealllocates the dynamically allocated array
    int size(); //return the numver of values current in the ValSet
    bool isEmpty(); //true if ValSet contains no values, and return false otherwise
    bool contains(T); //method takes parameter of type T and return true if in ValSet,otherwise
    //false
    void add(T); //add with parameter T, and adds if not in ValSet and increase size of array
    void remove(T);//remove with parameter T, and removes from valset, by shifting all other
    //elements of array
    vector<T> getAsVector();//return a vector of type T that contains all values in ValSet
    
};

#endif
