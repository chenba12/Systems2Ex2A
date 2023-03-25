#include "card.hpp"

using namespace ariel;

Card::Card(string value, string symbol) {}

Card::Card(Card &card);

Card::~Card() {}

int Card::checkWinner(Card card) { return 0; }

std::string getValue() { return ""; };

void setValue(string value) {};

std::string getSymbol() { return ""; }

void setSymbol(string symbol) {}

std::string Card::toString() { return ""; }