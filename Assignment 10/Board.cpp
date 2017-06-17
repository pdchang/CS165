/*********************************************************************
 ** Author:Philip Chang
 ** Date:December 2, 2016
 ** Description: Project 10.a - Implementation file for Board
 *********************************************************************/
#include "Board.hpp"
#include <iostream>
using namespace std;

Board::Board() //default constructor sets 3x3 array as empty with "."
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = '.';
        }
    }
}
bool Board::makeMove(int x, int y, char play) //bool function called make move
{
    bool stat; //creates bool variable called stat
    if (play == 'x') //if it is x's turn
    {
        if (board[x][y] == '.' )//sets x into board from user input if empty in that position and sets stat to true
        {
            board[x][y] = 'x';
            stat = true;
        }
    }
    else if(play == 'o') //sets o into board from user input if empty in that position and sets stat to true
    {
        if (board[x][y] == '.')
        {
            board[x][y] = 'o';
            stat = true;
        }
    }
    else //sets stat to false
    {
        stat = false;
    }
    return stat; //returns stat which can be true or false
}
int Board::gameState() //game state function that returns enum types from various conditions
{
  //conditions for if x wins
    if (board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == 'x')
    {
      return X_WIN;
    }
    else if (board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == 'x')
    {
      return X_WIN;
    }
    else if (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x')
    {
      return X_WIN;
    }
    else if (board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] == 'x')
    {
      return X_WIN;
    }
    else if (board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] == 'x')
    {
      return X_WIN;
    }
    else if (board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] == 'x')
    {
      return X_WIN;
    }
    else if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x')
    {
      return X_WIN;
    }
    else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == 'x')
    {
      return X_WIN;
    }
    //conditions for if o wins
    if (board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o')
    {
      return O_WIN;
    }
    else if (board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o')
    {
      return O_WIN;
    }
    else if (board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o')
    {
      return O_WIN;
    }
    else if (board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o')
    {
      return O_WIN;
    }
    else if (board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o')
    {
      return O_WIN;
    }
    else if (board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o')
    {
      return O_WIN;
    }
    else if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o')
    {
      return O_WIN;
    }
    else if (board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == 'o')
    {
      return O_WIN;
    }
    //if game is still in progress
    else if (board[0][0] == '.' || board[0][1] == '.' || board[0][2] == '.' || board[1][0] == '.' || board[1][1] == '.' || board[1][2] == '.' || board[2][0] == '.' || board[2][1] == '.' || board[2][2] == '.')
    {
        return PROGRESS;
    }
    else//if none of them above, then it is a draw
    {
        return DRAW;
    }
}
void Board::print() //prints out board
{
    cout << "  " << "0" << " " << "1" << " "<< "2" << endl;
    cout << "0" << " " << board[0][0] << " " << board[0][1] << " " << board[0][2] << endl;
    cout << "1" << " " << board[1][0] << " " << board[1][1] << " " << board[1][2] << endl;
    cout << "2" << " " << board[2][0] << " " << board[2][1] << " " << board[2][2] << endl;
}
