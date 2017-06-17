/*********************************************************************
 ** Author:Philip Chang ONID # 933028697
 ** Date: September 28, 2016
 ** Description:Project 1.c - tempConvert.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:This program converts celsius temperature to fahrenheit
 *********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double tempFah, tempCel; //variables set as tempFah and tempCel
    
    cout << "Please enter a Celsius Temperature.\n"; //displays Please enter a Celsius Temperature
    cin >> tempCel; //user inputs celsius temperature
    
    tempFah = ((9 * tempCel) / 5 + 32); /**formula to get tempFah or fahrenheit temperature from celsius input**/
    
    cout << "The equivalent Fahrenheit temperature is: "<< endl;/**displays The equivalent Fahrenheit temperature is:**/
    cout << tempFah << endl; //displays the converted temperature
    return 0;
}
