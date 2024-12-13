#include <iostream>
#include <vector>
#include <string>

class Player
{
public:
	std::string name;
	int position;
	int money;
	std::vector < std::string > properties;

	Player(const std::string & name) : name(name), position(0), money(1500) {}

	void buyProperty(const std::string& property, int cost)
	{

	}
};

class Monopoly
{
private:
	std::vector <Player> players;
	std::vector <std::string> board;
	int currentPlayerIndex;
	bool gameOver;

public:
	Monopoly() : currentPlayerIndex(0), gameOver(false)
	{
		createBoard();
	}

	void createBoard()
	{

	}

	void addPlayer(const std::string& playerName)
	{
		if (players.size() < 8)
		{
			players.emplace_back(playerName);
		}
		else
		{
			std::cerr << "Maximum number of players reached. \n";
		}
	}

	int rollDice()
	{

	}

	void movePlayer()
	{

	}

	void checkSpace(Player& player)
	{
		const std::string& space = board[player.position];
	}

	void endTurn()
	{
		currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
	}

	void checkGameOver()
	{

	}

	void playGame()
	{
		while (!gameOver)
		{
			movePlayer();
			endTurn();
			checkGameOver();
		}
	}
};