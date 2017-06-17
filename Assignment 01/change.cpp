/*********************************************************************
 ** Author:Philip Chang ONID # 933028697
 ** Date: September 28, 2016
 ** Description:Project 1.d - change.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:This program allows users to input the number of cents
 ** and will output the fewest type of each coin type
 *********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int cents, quarters, dimes, nickels, pennies; //variables being used
    cout << "Please enter an amount in cents less than a dollar.\n"; //displays message in the quotes
    cin >> cents; //user input for cents
    
    quarters = cents / 25; //amount of quarters
    dimes = (cents % 25) / 10; // amount of dimes after subtracting value of quarters from the change
    nickels = ((cents % 25) % 10) / 5; // amount of nickels after subtracting value of quarters and dimes
    pennies = (((cents % 25) % 10) % 5) / 1; // amount of pennies,after subtracting quarters,dimes,nickels
    
    
    cout << "Your change will be: " << endl; //displays message in the quotes
    cout << "Q: " << quarters << endl; // displays # of quarters
    cout << "D: " << dimes << endl; // displays # of dimes
    cout << "N: " << nickels << endl; //displays # of nickels
    cout << "P: " << pennies << endl; // displays # of pennies
    
    return 0;
}
