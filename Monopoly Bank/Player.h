#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player(int id, const std::string& name);
    ~Player();

    int getID() const;
    std::string getName() const;

private:
    int playerID;
    std::string playerName;
};

#endif // PLAYER_H
