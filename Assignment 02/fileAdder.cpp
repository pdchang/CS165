/*********************************************************************
 ** Author: Philip Chang #933028697
 ** Date: October 5, 2016
 ** Description:Project 2.b fileAdder.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:This program allows the user to open a file with values
 **the values will be added together and a file called sum.txt will have the sum in it.
 *********************************************************************/
#include <string>
#include <iostream>
#include <fstream> //needed to use files
using namespace std;

int main()
{
    ifstream inputFile; //filestream object
    string fileName; //holds user file names
    int numValues = 0; //counts the number of values read
    double value, //a single value read
        total = 0; //accumulator
    ofstream outputFile; //filestream output
    
    cout << "Please enter the name of the file to read from: " << endl; //display message to user
    cin >> fileName; //user input filename
    
    inputFile.open(fileName); //opens the user input filename
    outputFile.open("Sums.txt"); //opens sum.txt
    
    if (inputFile) //if input file exists
    {
        while (inputFile >> value) //if a value is read adds it to the total
        {
            numValues++; //reads additional values and adds to total
            total += value; //total adds all the values read and adds them up
    
        }
        outputFile << total << endl; // puts the total in the output file
        outputFile.close(); // closes output file
        inputFile.close(); // closes input file
    }
    else //file doesn't exist
        cout << "could not access file" << endl;
    return 0;
}
