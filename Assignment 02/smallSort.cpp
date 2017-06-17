/*********************************************************************
 ** Author: Philip Chang #933028697
 ** Date: October 5, 2016
 ** Description:Project 2.e - smallSort.cpp
 *********************************************************************/
/*********************************************************************
 ** Description: This program sorts three int parameters by reference
 **from lowest to highest and outputs it
 *********************************************************************/
#include <iostream>
using namespace std;
//function prototype
void smallSort(int&, int&, int&);

/* commenting out main
int main()
{
    int a = 14; //value of a
    int b = -90; //value of b
    int c = 2; // value of c
    smallSort(a,b,c); //void function
    cout << a << ", " << b << ", " << c << endl; // displays ascending values of a, b, c using ref parameters
}
 */
void smallSort(int &num1, int &num2, int &num3) //void function with reference parameters
{
    int temp; // temp integer
    if (num2 < num1) // if condition
 {
     temp = num1; //these 3 lines help swap the numbers
     num1 = num2;
     num2 = temp;
 }
    if (num3 < num2) // if condition
    {
        temp = num2; //3 lines thats help swap the numbers
        num2 = num3;
        num3 = temp;
    }
    if (num2 < num1)//if condition
    {
        temp = num1; //these 3 lines swap the numbers have to add this because of previous if condition
        num1 = num2;
        num2 = temp;
    }
}
