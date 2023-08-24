#include "Player.h"
#include <assert.h>
#include <iostream>

Player::Player() {}

Player::Player(const std::string id, const std::list<std::string> territories) {
}

Player::~Player() {}

std::string Player::getId() const { return this->id; }

std::list<std::string> Player::getTerritories() const {
  return this->territories;
}

void Player::setId(const std::string &newId) { this->id = newId; }

void Player::setTerritories(const std::list<std::string> &newTerritories) {
  this->territories = newTerritories;
}
