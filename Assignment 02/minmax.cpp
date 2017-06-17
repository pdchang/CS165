/*********************************************************************
 ** Author: Philip Chang #933028697
 ** Date: October 5, 2016
 ** Description:Project 2.a minmax.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:This program allows the user to enter a user defined amount
 **of integers and finds the minimum and maximum from those numbers
 *********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int numInt,
    vInt,
    min,
    max;

    cout << "How many integers would you like to enter ? " << endl;  // 2
    cin >> numInt; // user input number of integers                 //  numInt = 2
    cout << "Please enter " << numInt << " integers." << endl;

    // I enter 3 and 4 as my values
    cin >> vInt;
    min = max = vInt;


    for (int integers = 1; integers < numInt; integers++)
    {
        cin >> vInt;     // vInt = 3 my first number
        if (vInt <= min)    //  3 <= min FALSE  (min = 1 from line 5)
        {
            min = vInt;
        }
        if (vInt >= max)   //  3 >= max TRUE  (max = 1 from line 6 )
        {
            max = vInt;    //  max = 3
        }
    }
    cout << "min: " << min << endl; //displays min
    cout << "max: " << max << endl; // displays max

    return 0;
}
