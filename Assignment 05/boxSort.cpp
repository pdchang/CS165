/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 26, 2016
 ** Description: Project 5.b - Box.hpp and Box.cpp and boxSort.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is the boxSort function that sorts boxes by volume
 *********************************************************************/
#include "Box.hpp"
void boxSort(Box array[], int size) //function prototype
{
    Box temp; //temporary box object variable
    bool swap; //declare boolean varaible swap
    
    do //do while loop
    { swap = false; //if swap is false does for loop
        for (int count = 0; count < (size - 1); count++) //for loop, size-1 because array start
                                                        //at zero
        {
            if( (array[count].getVolume()) < (array[count + 1].getVolume()))
                //using getVolume function and comparing volume and if volume of one is less than othe other
            {
                temp = array[count]; //swaps the objects
                array[count] = array[count+1];
                array[count + 1] = temp;
                swap = true; //swap true if swapped
            }
        }
    } while (swap); //while condition for loop
}
