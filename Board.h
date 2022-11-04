// Tic-Tac-Toe 2.0 - multiple fi les
// Board defi nition - class represents a tic-tac-toe board
//part of include guard - tests if PLAYER_H not defi ned
#ifndef BOARD_H
//part of include guard - defi nes PLAYER_H
#define BOARD_H
class Board
{
public:
	Board();
	bool IsFull() const;
	bool IsLegalMove(int move) const;
	bool IsWinner(char piece) const;
	void Display() const;
	void Reset();
	void ReceiveMove(char piece, int move);
	static const int NUM_SQUARES = 9;
	static const char EMPTY = ' ';
private:
	static const int NUM_COMBOS = 8;
	static const int NUM_IN_COMBO = 3;
	static const int WINNING_COMBOS[NUM_COMBOS][NUM_IN_COMBO];
	char m_Squares[NUM_SQUARES];
};
//part of include guard - ends #ifndef
#endif