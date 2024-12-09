#include <iostream>
#include "Bank.h"
#include "Player.h"

int main() {
    Bank bank;

    // Create players
    Player player1(1, "Alice");
    Player player2(2, "Bob");

    // Display initial balances
    std::cout << "Initial Balances:" << std::endl;
    bank.displayBalances();

    // Perform some transactions
    bank.addMoney(1, 200);    // Add $200 to Alice's account
    bank.deductMoney(2, 300); // Deduct $300 from Bob's account

    // Display updated balances
    std::cout << "\nUpdated Balances:" << std::endl;
    bank.displayBalances();

    return 0;
}