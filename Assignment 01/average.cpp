/*********************************************************************
 ** Author:Philip Chang ONID # 933028697
 ** Date: September 28, 2016
 ** Description:Project 1.b - Averages.cpp
 *********************************************************************/
/*******************************************************Description:This program asks the user to input 5 numbers and finds the mean average of the 5 numbers
 *************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, num4, num5, average; //the variables that will be used
    
    cout << "Please enter five numbers. \n"; //displays please enter five numbers
    
    cin >> num1 >> num2 >> num3 >> num4>> num5; //user input 5 numbers, pressing enter after each number
    
    average = ((num1 + num2 + num3 + num4 + num5) / 5); //formula to find average of the 5 input numbers
    
    cout << "The average of those numbers is: " << endl;//displays the average of those numbers is:
    cout << average << endl; // displays the average
    
    return 0;
}
