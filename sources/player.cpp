#include "player.hpp"

using namespace ariel;

Player::Player(std::string playerName) {}

Player::Player(Player &player) {}

Player::~Player() {}

int Player::stacksize() { return 0; }

int Player::cardesTaken() { return 0; }

void Player::setCardsTaken(int cardsTaken) {}

void Player::printTurn() {}

std::string Player::toString() { return ""; }

Card *Player::getDeck() { return NULL; }

void Player::setDeck(Card *deck) {}

Card Player::getTopCard() { return NULL; }

void Player::setTopCard(Card card) {}

int Player::getDeckSize() { return 0; }

int Player::setDeckSize() { return 0; }

int Player::getNumberOfWins() { return 0; }

void Player::setNumberOfWins() {}

bool Player::getIsPlaying() { return false; }

void Player::setIsPlaying() {}

std::string Player::getPlayerName() { return ""; }
