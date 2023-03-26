#include "game.hpp"
#include "array"
#include "list"

using namespace ariel;
const static std::string cards[14] = {"ace", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen",
                                      "King"};
const static std::string symbols[4] = {"Hearts", "Spades", "Diamonds", "Clubs"};

Game::Game(Player &player1, Player &player2) : player1(player1), player2(player1) {}

Game::Game() {}

Game::~Game() {}

void Game::playTurn() {}

void Game::printLastTurn() {}

void Game::playAll() {}

void Game::printWiner() {}

void Game::printLog() {}

void Game::printStats() {}

std::string Game::toString() { return ""; }

std::list <std::string> Game::getTurnsLog() { return this->turnsLog; }

Player Game::getPlayer1() { return this->player1; }

void Game::setPlayer1(Player player) {}

Player Game::getPlayer2() { return this->player2; }

void Game::setPlayer2(Player player) {}

bool Game::getIsPlaying() { return this->isPlaying; }

void Game::setIsPlaying() {}

std::array<ariel::Card, Game::gameDeckSize> Game::getGameDeck() { return this->gameDeck; }

void Game::createGameDeck() {}

void Game::startGame() {}

int Game::getNumberOfTurns() { return this->numberOfTurns; }

void Game::setNumberOfTurns() {}

int Game::getWinner() { return this->winner; }

void Game::setWinner() {}

int Game::getNumberOfDraws() { return this->numberOfDraws; }

void Game::setNumberOfDraws() {}

