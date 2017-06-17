/*********************************************************************
 ** Author: Philip Chang #933028697
 ** Date: October 5, 2016
 ** Description:Project 2.c numGuess.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:This program allows the user input to be guessed by a player
 **it will tell you if the number is too high or too low and if you got it and in how many guesses
 *********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num; // user number input
    int guess; // player guess input
    int tries = 0; //accumulator
    
    
    cout << "Enter the number for the player to guess." << endl; //display message for user to enter #
    cin >> num; //user enter number
    
    cout << "Enter your guess." << endl; //display message
    do
    {
        
            cin >> guess; //player entered guess number
            ++tries; //adds to counter
        if (guess > num) //when the guess is bigger than num
        {
            cout << "Too high - try again." << endl; //displays too high to player
        }
        else if (guess < num) //when the guess is less than number
        {
            cout << "Too low - try again." <<endl; //displays too low try again
        }
        else //when the number is right
        {
            cout << "You got it !!!!" << endl; // displays you got it right
            cout << "You guessed it in " << tries << " tries" << endl; //displays number of guesses
        }
    }while (guess != num); //condition for this do-while loop i when the guess is not equal to number
    
    return 0;
}
