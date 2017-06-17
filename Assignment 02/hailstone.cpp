/*********************************************************************
 ** Author: Philip Chang #933028697
 ** Date: October 5, 2016
 ** Description:Project 2.f - hailstone.cpp
 *********************************************************************/
/*********************************************************************
 ** Description: This program takes a starting integer as a parameter and
 **returns how many steps it takes to reach 1 using a hailstone sequence
 *********************************************************************/
#include<iostream>
using namespace std;

//prototype function
int hailstone(int num);
/* commenting out main
int main()
{
    int num;
    cout << "Enter value to start hailstone sequence on: " << endl;
    cin >> num;
    cout << "It takes " << hailstone(num) << " step(s) to reach 1 using the hailstone sequence." << endl;
    return 0;
}
*/
int hailstone(int n) //hailstone function
{
    int steps = 0; //counter
 
  while (n != 1) //while loop to run while n is not 1
      if (n % 2 == 0) //if n is a even number
      {
          steps++; //adds 1 to counter
          n = n/2; // n becomes n divided by 2
      }
        else // when n is an odd number
        {
            steps++; //adds to counter
            n = (3 * n) + 1; //n becomes 3 * n + 1
        }
    return steps; //returns steps
}
