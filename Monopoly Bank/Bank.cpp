#include "Bank.h"
#include <iostream>
#include "Player.h"

Bank::Bank() {
    // Initialize each player's balance to 1500 as in Monopoly rules
    for (int i = 1; i <= 4; ++i) {
        playerBalances[i] = 1500;
    }
}

Bank::~Bank() {}

void Bank::addMoney(int playerID, int amount) {
    playerBalances[playerID] += amount;
}

void Bank::deductMoney(int playerID, int amount) {
    if (playerBalances[playerID] >= amount) {
        playerBalances[playerID] -= amount;
    }
    else {
		std::cout << "Player " << playerID << " does not have enough money." << std::endl;
    }
}

int Bank::getBalance(int playerID) const {
    auto it = playerBalances.find(playerID);
    if (it != playerBalances.end()) {
        return it->second;
    }
    return 0;
}

void Bank::displayBalances() const {
    for (const auto& pair : playerBalances) {
		int playerID = pair.first;
		int balance = pair.second;
        std::cout << "Player " << playerID << " Balance: $" << balance << std::endl;
    }
}
