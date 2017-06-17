/*********************************************************************
 ** Author:Philip Chang
 ** Date: November 2, 2016
 ** Description: Project 6.a - summmer.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is a recursive function that takes 2 parameters - an array of doubles,
 **and size of the array and returns the sum of the values in the array
 *********************************************************************/
#include <iostream>
using namespace std;

double summer(double array[], int size) //summer function taking 2 parameters, the array and the size
{
    if (size == 0) // base case
    {
        return 0; // tells it stop stop once the size is equal zero
    }
    else
    {
        return array[size - 1] + summer(array, size - 1); //returns sum of the double in the
                                    //array in position size - 1 because arrays start at 0 and
                                            //function summer with size - 1
        
    }
}
/* commenting out main
int main()
{
    
    double summer(double array[], int size);
    
    const int size = 13;
    double numbers[size] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.11,11.42,12.72,13.52};
    
    cout << summer(numbers,size) << endl ;
    
    
    return 0;
}
 */
