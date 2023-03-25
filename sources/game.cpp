#include "game.hpp"

using namespace ariel;

Game::Game(Player &player1, Player &player2) : player1(player1), player2(player1) {}

Game::~Game() {}

void Game::playTurn() {}

void Game::printLastTurn() {}

void Game::playAll() {}

void Game::printWiner() {}

void Game::printLog() {}

void Game::printStats() {}

std::string Game::toString() { return ""; }

