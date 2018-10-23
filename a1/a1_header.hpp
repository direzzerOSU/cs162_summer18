/*
Ryan DiRezze
Assignment 1
*/

#ifndef GAMEBOARD_H
#define GAMEBOARD_H

class gameBoard{
private:
   char columns[4] = {'a', 'b', 'c', 'd'};
   int rows[4] = {1, 2, 3, 4};
public:
   void drawBoard();
};

#endif
