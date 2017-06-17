/*********************************************************************
 ** Author:Philip Chang
 ** Date:December 2, 2016
 ** Description: Project 10.a - Implementation file for TicTacToe including the main.
 *********************************************************************/
#include "TicTacToe.hpp"
#include <iostream>
using namespace std;

TicTacToe::TicTacToe(char turn) //constructor
{
    this->turn = turn; //sets turn to to turn using this pointer
}

void TicTacToe::play() //method called play
{
    int row; // intvariables for row and columbs
    int col;
    
    xo.print(); //prints the initial empty array
    
    do //do while loop that will keep doing while the game is in progress
    {
        cout << "Player " << turn << ": " << "please enter your move" << endl; //asks player to enter move
        cin >> row >> col; //user in put row and columbs
            if (!xo.makeMove(row, col, turn)) //if false it says the square already taken and to enter another move
                {
                    xo.print();
                    cout << "That square is already taken." << endl;
                    cout << "Please enter another move" << endl;
                    cin >> row >> col;
                    
                }
            if (xo.makeMove(row, col, turn)) //if true, makeMove function sets user input in array
            {
                xo.print(); //prints out board
                if(turn == 'x') //switches users after each turn
                {
                    turn = 'o';
                }
                else if(turn == 'o')
                {
                    turn = 'x';
                }
            }
        switch(xo.gameState()) //switch case used to print out if x wins, o wins, draws, or game is in progress
               {
                   case X_WIN: cout << " 'x' has won" << endl;
                       break;
                   case O_WIN: cout << " 'o' has won" << endl;
                       break;
                   case DRAW: cout << "the game is a draw" <<endl;
                       break;
               }
      
    
    }while (xo.gameState() == PROGRESS);
}

int main()
{
    char first; //variable to hold who goes first
    
    cout << "Which user would like to go first? (x or o)" << endl; //asks user which one goes first
    cin >> first; //user input is set to first
    
    TicTacToe game(first); //creates TicTacToe object called game with first as parameter
    game.play(); //game plays
    
    return 0;
}
