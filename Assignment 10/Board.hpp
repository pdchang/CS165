/*********************************************************************
 ** Author:Philip Chang
 ** Date:December 2, 2016
 ** Description: Project 10.a - Header file for Board
 *********************************************************************/
#ifndef BOARD_HPP //guards
#define BOARD_HPP

enum Status {X_WIN, O_WIN, DRAW, PROGRESS}; //enum with various game states

class Board //class declaration
{
private:
    char board[3][3]; //3x3 array variable
public:
    Board(); //default constuctor
    bool makeMove(int,int,char);//makeMove method that takes x and y coordinates and player
    int gameState(); //gameState method that takes no parameters and returns enum possibilties
    void print(); //print function that prints out current board on screensssss
};

#endif
