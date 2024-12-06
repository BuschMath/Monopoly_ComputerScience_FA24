#ifndef Board_h
#define Board_h


class Board
{
public:
	Board();
	~Board();
	
	void printBoard();
	int getPlayerPosition(int player);
	void setPlayerPosition(int player);
	void printPlayerPosition(int player);
	void printAllPlayerPositions();

private:
	int playerCurrentPosition;
	int PlayersPosition[4] = { 0, 0, 0, 0 };
	
};
#endif // !Board_h
