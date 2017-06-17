/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 26, 2016
 ** Description: Project 5.a - stringSort.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is a function called stringSort, that sorts an array of strings by size
 **the sort will be case insensitive. Also has a comparison function that compares
 **ascii values of the strings
 *********************************************************************/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool comparison(string string1,string string2) //bool function that compares 2 strings
{
    string temp1 = string1; //create temporary string set to string1
    string temp2 = string2; //create temporary string set to string2
    for (int i = 0; i < temp1.length(); i++)//loop changes temp1 to uppercase
    {
        temp1[i] = toupper(temp1[i]);
    }
    for (int i = 0; i <temp2.length(); i++) //loop changes temp2 to upper case
         {
             temp2[i] = toupper(temp2[i]);
         }
    if (temp1.compare(temp2) < 0)//using built in string comparison, if value is less than 0 then
    {                               //returns true
        return true;
    }
    else                    //anything else it'll return false
    {
        return false;
    }
   
}

void stringSort(string array[], int size) //void function stringSort
{
    
    int startScan; //counter
    int minIndex; //counter
    string minValue; //variable that stores minimum string
    
    for (startScan = 0; startScan < (size - 1); startScan++)//loop that starts, with size - 1
                                                            //because arrays start at position 0
    {
        minIndex = startScan; //sets minIndex to startScan which is intially 0
        minValue = array[startScan]; //sets minValue to the first string in array
        for (int index = startScan +1; index < size; index++) //loop that goes through array, startscan +1 because comparing values and we already set minValue
        {
            if (comparison(array[index], minValue)) //if loop using comparison function
            {                                       //if true then it'll run, compares the string
                                                    //in array to intialized minValue
                minValue = array[index]; //sets the minValue to the array index
                minIndex = index; //sets position of minValue to index
            }
        }
        array[minIndex] = array [startScan]; //sets array location of minIndex to location of
                                                //startScan
        array[startScan] = minValue; //sets the startScan location in array to the minValue
    }
}

void showArray(const string array[],int size) //show array function, dont need it but i put it in
                                            //cause book has it and easier to test main
{
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}

//commenting out main
/*int main()
{
    
    
    const int size = 13;
    
    
    string animal[size] = {"Koala", "Zebra", "zebrassssss", "alligator", "PANDA", "TiGeR", "LION", "kangaroo", "Kat", "Kangaroo", "KANGAROO", "zebra", "KANGA" };
    
    //string animal[size] = {"acb", "abc", "Cba", "cab", "Bac", "bca"};
    
    
    showArray(animal, size);
    stringSort(animal, size);
    showArray(animal, size);
    
    return 0;
}*/
