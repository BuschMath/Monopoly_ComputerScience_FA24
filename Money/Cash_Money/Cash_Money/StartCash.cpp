#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Assuming Money and Player classes are defined as described above
#include "Money.h"
#include "Player.h"

class Game {
private:
     ::vector<Player> players;
    static constexpr int STARTING_MONEY = 1500;

public:
    // Add players to the game
    void addPlayer(const string& playerName) {
        players.emplace_back(playerName); // Creates a new player with a default balance
        players.back().money = Money(STARTING_MONEY); // Set starting money for each player
    }

    // Count players in the game
    int countPlayers() const {
        return players.size();
    }

    // Display player balances
    void displayBalances() const {
        for (const auto& player : players) {
             cout << player.name << " has $" << player.money.getBalance() << " starting balance.\n";
        }
    }
};

int main() {
    Game game;
    int numPlayers;

     cout << "Enter the number of players: ";
     cin >> numPlayers;

    // Get player names and add them to the game
    for (int i = 0; i < numPlayers; ++i) {
         string name;
         cout << "Enter the name for player " << (i + 1) << ": ";
         cin >> name;
        game.addPlayer(name);
    }

    // Display all players and their starting balances
    game.displayBalances();

    return 0;
}
