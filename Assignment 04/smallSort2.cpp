/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 129, 2016
 ** Description: Project 4.b - smallSort2.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is a void function that takes 3 pointers pointing to addresses as parameters and sorts
 **them in ascending order.
 *********************************************************************/
#include <iostream>

using namespace std;

void smallSort2(int *ptr1, int *ptr2, int *ptr3) //smallSort function that takes addresses of variables and sets pointers to them
{
        int temp; //temporary variable to store when switching values
        if (*ptr2 < *ptr1) //if condition compares value in address that pointer points to
        {
            temp = *ptr1; //3 lines that swap values from the pointer addresses
            *ptr1 = *ptr2;
            *ptr2 = temp;
        }
        if (*ptr3 < *ptr2) //if condition compares value in address that pointer points to
        {
            temp = *ptr2;//3 lines that swap values from the pointer addresses
            *ptr2 = *ptr3;
            *ptr3 = temp;
        }
        if (*ptr2 < *ptr1)//if condition compares value in address that pointer points to
        {
            temp = *ptr1;//3 lines that swap values from the pointer addresses
            *ptr1 = *ptr2;
            *ptr2 = temp;
        }
}
/*
 
int main()
{
    int a = 14; //value of a
    int b = -90; //value of b
    int c = 2; // value of c
    smallSort2(&a,&b,&c); //function that takes addresses
    cout << a << ", " << b << ", " << c << endl; // displays ascending values of a, b, c
}
*/
