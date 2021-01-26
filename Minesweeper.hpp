//Project Minesweeper 
//Name: Tahmid Zaman

/** @file minesweeper.hpp
		header code for minesweeper **/

#ifndef MINESWEEPER_
#define MINESWEEPER_

class Minesweeper
{
public:

	/**CONSTRUCTORS*/
	Minesweeper(); //default constructor
	Minesweeper(); //paramterized constructor

	bool isValid(const int row, const int col);
	bool isMine(const int row, const int col, char board);
	void makeMove(int *x, int *y);
	void printBoard(char myBoard[][MAXSIDE]);

	int countAdjacentMines(int row, int col, int mines[][2], char realBoard[][MAXSIDE]);
	bool playMinesweeperUtil(char myBoard[][MAXSIDE], char realBoard[][MAXSIDE], int mines[][2], int row, int col, int *movesLeft);
	void placeMines(int mines[][2], char realBoard[][MAXSIDE]);

	void initialise(char realBoard[][MAXSIDE], char myBoard[][MAXSIDE]);
	void cheatMinesweeper(char realBoard[][MAXSIDE]);
	void replaceMine (int row, int col, char board[][MAXSIDE]);
	void playMinesweeper();
	void chooseDifficultyLevel();

private:
	int SIDE; 
	int MINES;
};
#include "Minesweeper.cpp"
#endif