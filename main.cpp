// Tic-Tac-Toe 2.0 - multiple fi les
// Main function
#include <iostream>
//for access to Game class defi nition
#include "game.h"
using namespace std;
int main()
{
	Game ticTacToe;

	ticTacToe.DisplayInstructions();

	char again;
	do
	{
		ticTacToe.Play();
		cout << endl << "Play again? (y/n): ";
		cin >> again;
	} while (again != 'n');

	return 0;
}