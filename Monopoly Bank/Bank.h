#ifndef BANK_H
#define BANK_H

#include <map>
#include <string>

class Bank {
public:
    Bank();
    ~Bank();

    void addMoney(int playerID, int amount);
    void deductMoney(int playerID, int amount);
    int getBalance(int playerID) const;
    void displayBalances() const;

private:
    std::map<int, int> playerBalances; // Player ID and their balance
};

#endif // BANK_H

