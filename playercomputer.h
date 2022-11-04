// Tic-Tac-Toe 3.0 - with AI
// Computer player defi nition - represents a computer tic - tac - toe player
#ifndef PLAYERCOMPUTER_H
#define PLAYERCOMPUTER_H
#include "player.h"
class Board;
class PlayerComputer : public Player
{
public:
	//calculates and makes best move
	virtual void MakeMove(Board& aBoard) const;
};
#endif
