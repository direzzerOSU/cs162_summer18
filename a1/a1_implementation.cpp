/*
Ryan DiRezze
Assignment 1
*/

#include<string>
#include<iostream>
using std::string;
using std::endl;
using std::cout;

void drawBoard();

int main(){
   cout << endl;
   drawBoard();
   cout << endl;

   return 0;
}

void drawBoard(){
   // specify the dimensions of the grid
   int x = 3;

   // arrays
   string grid[x][x] = {};

   // initializing the array with "empty" tic-tac-toe spaces
   for(int c=0; c<4; c++){
      for(int r=0; r<4; r++){
         grid[r][c] = "*";
         cout << grid[r][c] << endl;
      }
   }

   // print the grid
   cout << "       a     b     c     d" << endl;
   cout << "   -|-----|-----|-----|-----|-" << endl;
   cout << " 1  |  " << grid[0][0] << "  |  " << grid[0][1] << "  |  " << grid[0][2] << "  |  " << grid[0][3] << "  |" << endl;
   cout << "   -|-----|-----|-----|-----|-" << endl;
   for(int n=0; n<3; n++){
      cout << " " << n+2 << "  |  " << grid[n+1][0] << "  |  " << grid[n+1][1] << "  |  " << grid[n+1][2] << "  |  " << grid[n+1][3] << "  |" << endl;
      cout << "   -|-----|-----|-----|-----|-" << endl;
   }
}
