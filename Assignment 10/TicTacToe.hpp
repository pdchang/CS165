/*********************************************************************
 ** Author:Philip Chang
 ** Date:December 2, 2016
 ** Description: Project 10.a - Header file for TicTacToe
 *********************************************************************/
#ifndef TICTACTOE_HPP //guards
#define TICTACTOE_HPP

#include "Board.hpp" //includes Board.hpp

class TicTacToe //class declaration
{
private:
    Board xo; //creating Board object
    char turn; //char called turn
public:
    TicTacToe(char); //constructor that takes char parameter to specify who goes first
    void play(); //method called play that starts the game and keeps looping until someone has won or draw
    
};


#endif
