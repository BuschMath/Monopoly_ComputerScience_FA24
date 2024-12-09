#include <iostream>
#include <string>
#include Player.cpp;
using namespace std;
class Money {
private:
    int balance;

public:
    // Constructor initializes the balance to a starting amount (e.g., 1500 for Monopoly).
    Money(int startingBalance = 1500) : balance(startingBalance) {}

    // Get the current balance
    int getBalance() const {
        return balance;
    }

    // Add money to the balance
    void addMoney(int amount, string playP) {
        if (amount > 0) {
            balance += amount;


        }
    }

    // Deduct money from the balance
    bool deductMoney(int amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            return true;  // Successful transaction
        }
        return false; // Insufficient funds
    }

    // Check if the player is bankrupt (balance is zero or negative)
    bool isBankrupt() const {
        return balance <= 0;
    }
};
