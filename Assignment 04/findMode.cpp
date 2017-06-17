/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 129, 2016
 ** Description: Project 4.a - findMode.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is a function called findMode, that finds the most frequently occuring number
 **in an array.
 *********************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::sort;
using std::cout;
using std::endl;

vector<int> findMode(int array[], int size) //function that takes array of int and size of
                                                // of array as parameters to create new array
{
    vector<int> modes; //array that stores the modes
    int mFreq = 1; //most frequent variable intialized to 1 since we know whatever is read will appear once, but that could change later so we intialize it to 1
    
    //loop that goes through array and finds the highest frequency
    for (int index = 0; index < size; index++)
    {
        int freq = 1; //accumulator that counts how many times a number has occured
                        //all numbers that occur in array starts at least once
        
        for(int cIndex = index + 1; cIndex < size; cIndex++) //cIndex is the index + 1 so it doesn't duplicate the first value and change the frequency of the first # to 2
        {
            if(array[index] == array[cIndex]) //if loop that compares the first read of the array to the 2nd array read and adds 1 to the freq when the number appears again
            {
                freq++;
            }
            
        }
        
        if (freq == mFreq) //if loop that sees if the freq countted is equal to the max freq
        {
            modes.push_back(array[index]); //if case is met, it'll push back the modes array and put the value from the input array in
        }
        if (freq > mFreq) //if loop that has parameters if the frequency we found is greater than the most frequent variable and if it is
        {
            mFreq = freq; //mFreq or most frequen will become freq or what we counted
            modes.clear(); //this will clear the modes array, since the intial most frequent is not true anymore
            modes.push_back(array[index]); //will push back the modes array and put in the right number for the input array
        }
    }
    //sorting the array now so numbers appear in ascending order
    sort(modes.begin(), modes.end());
         return modes;
}

/*
int main()
{
    const int SIZE = 10;
    int testArray[SIZE] = {-1, -2, -3, -2, - 2, -3, -3, 9, 9};
    vector<int> test;
    
    test = findMode(testArray, SIZE);
    
    for (int index = 0; index < test.size(); index++)
    {
        cout << test.at(index) << endl;
    }
    return 0;
}
*/
