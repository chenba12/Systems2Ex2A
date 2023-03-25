#include "card.hpp"

using namespace ariel;

Card::Card(std::string value, std::string symbol) {}

Card::Card(Card &card) {
    this->value = card.value;
    this->symbol = card.symbol;
}

Card::Card() {}

Card::~Card() {}

int Card::checkWinner(Card card) { return 0; }

std::string getValue() { return ""; };

void setValue(std::string value) {};

std::string getSymbol() { return ""; }

void setSymbol(std::string symbol) {}

std::string Card::toString() { return ""; }