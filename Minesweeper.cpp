//Project MineSweeper
//Name: Tahmid Zaman

/** @file minesweeper.cpp
	compilation unit for minesweeper game **/

#ifndef MINESWEEPER_
#define MINESWEEPER_

#define MAXSIDE 25
#define MAXMINE 99
#define MAXMOVE 526 //25*25-99 
#define SIDE 25

#include <iostream>
#include "Minesweeper.hpp"
using namespace std;




bool isValid(const int row, const int col)  
{
	return (row >= 0 && row <= SIDE && col >= 0 && col <= SIDE);
		
}

bool isMine(const int row, const int col, char board[][MAXSIDE])
{
	return board[row][col] == '*' ? true : false;
}

void makeMove(int *x, int *y)
{
	printf("\nEnter your move: [row] [column] -> ");
	scanf("%d %d", x, y);

	if (isValid(*x,*y) == true)
	{
		return;
	}
}

void printBoard(char myBoard[][MAXSIDE])
{
	int i, j;

	printf(" ");

	for(i = 0; i < SIDE; i++)
		printf("%d ", i);

	printf("\n\n");

	for(i = 0; i < SIDE; i++)
	{
		printf("%d ", i);
		
		for(j=0; j<SIDE;j++)
		{
			//printf("%c ", myBoard[i][j]);
		}
		printf("\n");
	}
	return;
}

int countAdjacentMines(const int row, const int col, int mines[][2], char realBoard[][MAXSIDE])
{
	int count = 0;

	//Test all eight adjacent neighbours to see if they contain mines

	//NORTH
	isValid(row-1, col) ? 
		isMine(row-1, col, realBoard) ? count++ 
		: false 
	: false;

	//SOUTH
	isValid(row+1, col) ?
		isMine(row+1, col, realBoard) ? count++
		: false
	: false;

	//EAST
	isValid(row, col+1) ?
		isMine(row, col+1, realBoard) ? count++
		: false
	: false;

	//WEST
	isValid(row, col-1) ? 
		isMine(row, col-1, realBoard) ? count++
		: false
	: false;

	//SOUTH-EAST
	isValid(row+1, col+1) ?
		isMine(row+1, col+1, realBoard) ? count++
		:false
	:false;

	//NORTH-EAST
	isValid(row-1, col+1) ?
	isMine(row-1, col+1, realBoard) ? count++
		:false
	:false;

	//NORTH-WEST
	isValid(row-1, col-1) ? 
	isMine(row-1, col-1, realBoard) ? count ++
		:false
	:false;

	//SOUTH-WEST
	isValid(row+1, col-1) ?
	isMine(row+1, col-1, realBoard) ? count++
		:false
	:false;

	return count;
}



int main()
{	
	/*char myBoard[25][25];
	myBoard[5][5] = '*';
	myBoard[7][5] = '*';
	myBoard[6][6] = '*';
	myBoard[6][4] = '*';
	myBoard[7][6] = '*';
	myBoard[5][6] = '*';
	myBoard[5][4] = '*';
	myBoard[7][4] = '*';
	//printBoard(myBoard);
	cout << countAdjacentMines(6,5,myBoard);*/
}

#endif