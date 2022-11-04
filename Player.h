#ifndef PLAYER_H
#define PLAYER_H
class Board;
//abstract class
class Player
{
public:
	Player();
	//virtual destructor in base class
	virtual ~Player();
	char GetPiece() const;
	//gets opponents piece
	char GetOpponentPiece() const;
	//pure virtual function
	virtual void MakeMove(Board& aBoard) const = 0;
private:
	static const int NUM_PIECES = 2;
	static const int FIRST = 0;
	static const int SECOND = 1;
	static const char PIECES[NUM_PIECES];
	static int current;
	char m_Piece;
};
#endif