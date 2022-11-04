// Tic-Tac-Toe 3.0 - with AI
// Game defi nition - class represents a tic-tac-toe game
#ifndef GAME_H
#define GAME_H
#include "Board.h"
class Player;
class Game
{
public:
	Game();
	//frees memory occupied by Player objects
	~Game();
	bool IsPlaying() const;
	bool IsTie() const;
	//frees memory occupied by Player objects
	void ClearPlayers();
	void SetPlayers();
	void DisplayInstructions() const;
	void NextPlayer();
	void AnnounceWinner() const;
	void Play();
private:
	static const int NUM_PLAYERS = 2;
	static const int FIRST = 0;
	static const int SECOND = 1;
	Board m_Board;
	//pointers to a base class
	Player* m_pPlayers[NUM_PLAYERS];
	int m_Current;
};
#endif