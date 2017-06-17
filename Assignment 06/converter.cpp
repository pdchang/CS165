/*********************************************************************
 ** Author:Philip Chang
 ** Date: November 2, 2016
 ** Description: Project 6.b - converter.cpp
 *********************************************************************/
/*********************************************************************
 ** Description: This project contains 2 recursive functions binToDec
 **and decToBin, that can convert a string to binary, and a binary back to
 **decimal.
 *********************************************************************/
#include <string>
#include <cmath>
#include <iostream>
using namespace std;


int binToDec(string bin, int i) // function that converts a binary to decimal
{
    int dec = 0; //accumulator
    
    if (i < bin.length()) //if condition using build in length function
    {
        if (bin[i] == '1') //nested if loop, if there is a 1 in position i
        {
            dec = pow(2, (bin.length() - 1 - i));//sets dec to be the power of 2
                                    //exponent set to bin.length - 1 because arrays start at 0
                                    //and then - i, we do this because the first number read is going
                                    //to be the highest power of 2, and not the lowest
        }
        else //else
        {
            dec = 0; //sets dec to 0, if bin[i] is not equal to 1
        }
        return dec + binToDec(bin, ++i); //calls function within function
                                        //adds the dec accumulator with function
                                        //while increasing i, the prefix ++i so it does the next value
                                        //immediately
    }
    return dec; //when condition for if loop is no longer met, it returns the dec
}

int binToDec(string bin) //helper function, since it says take 1 parameter
{
    return binToDec(bin, 0); //returns function with 2 parameters, 0 is the value of i
}


string decToBin(int dec, string bin) //function that converts decimal to binary
{
    
    
        if ((dec % 2) == 1) // if condition where dec is divided by 2 and the remainder is equal 1
        {
            bin = '1' + bin; // adds '1' and bin, can't do += or it reverses it
        }
        else //else
        {
            bin = '0' + bin; // adds '0' and bin, can't do += or it reverses it
        }
        if ((dec / 2) == 0) //if condition to stop the recursive function
        //if dec is divided by 2 and equals 0, since we're using int
        //it'll cut off decimals so for example 1/2 is 0.5, it'll just say 0
        {
            return bin; //returns string bin
        
        }

    
    return decToBin((dec / 2), bin); //returns recrusive function with parameters dec/2 and the bin
}
string decToBin(int dec) //helper function, since it takes 1 parameter
{
    return decToBin(dec, ""); //returns function with 2 paramters, "", for an empty string

}
/* commenting out main
int main()
{
    string bin = "10000000011100001100101101";
    int dec = 33669933;
    
    cout << binToDec(bin) << " " << decToBin(dec) << " " << binToDec((decToBin(dec))) << " ";
    cout << decToBin(binToDec(bin)) << endl;
    
    cout << decToBin(2) << endl;
    cout << binToDec("1000") << endl;
    cout << decToBin(1) << endl;
    cout <<decToBin(0) << endl;
    
    return 0;
}
*/
