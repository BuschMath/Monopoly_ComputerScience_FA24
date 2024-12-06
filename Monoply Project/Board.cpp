#include "Board.h"
#include <vector>
#include <iostream>
#include <random>

std::vector<std::string> board = { "Go", "Mediterranean Avenue", "Community Chest", "Baltic Avenue", "Income Tax", "Reading Railroad", "Oriental Avenue", "Chance", "Vermont Avenue", "Connecticut Avenue", "Jail", "St. Charles Place", "Electric Company", "States Avenue", "Virginia Avenue", "Pennsylvania Railroad", "St. James Place", "Community Chest", "Tennessee Avenue", "New York Avenue", "Free Parking", "Kentucky Avenue", "Chance", "Indiana Avenue", "Illinois Avenue", "B. & O. Railroad", "Atlantic Avenue", "Ventnor Avenue", "Water Works", "Marvin Gardens", "Go to Jail", "Pacific Avenue", "North Carolina Avenue", "Community Chest", "Pennsylvania Avenue", "Short Line", "Chance", "Park Place", "Luxury Tax", "Boardwalk" };

Board::Board()
{
	playerCurrentPosition = 0;
	
}


Board::~Board()
{
}

void Board::printBoard()
{
	
	for (int i = 0; i < board.size(); i++)
	{
		std::cout << board[i] << std::endl;
	}
}

int Board::getPlayerPosition(int player)
{
	playerCurrentPosition = PlayersPosition[player];
	return playerCurrentPosition;
}
void Board::setPlayerPosition(int player)
{

	PlayersPosition[player] = playerCurrentPosition;
}
void Board::printPlayerPosition(int player)
{
}
void Board::printAllPlayerPositions()
{
	std::cout << "Player 1 is at " << board[PlayersPosition[0]] << std::endl;
	std::cout << "Player 2 is at " << board[PlayersPosition[1]] << std::endl;
	std::cout << "Player 3 is at " << board[PlayersPosition[2]] << std::endl;
	std::cout << "Player 4 is at " << board[PlayersPosition[3]] << std::endl;

}

