#include "Player.h"

Player::Player(int id, const std::string& name) : playerID(id), playerName(name) {}

Player::~Player() {}

int Player::getID() const {
    return playerID;
}

std::string Player::getName() const {
    return playerName;
}
