//a human tic - tac - toe player
#include "playerhuman.h"
#include <iostream>
#include "Board.h"

using namespace std;
//allow human to enter and make move
void PlayerHuman::MakeMove(Board& aBoard) const
{
	int move;
	do
	{
		cout << "Player " << GetPiece();
		cout << ", where would you like to move? (0-8): ";
		cin >> move;
	} while (!aBoard.IsLegalMove(move));

	aBoard.ReceiveMove(GetPiece(), move);
}