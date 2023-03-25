#include <iostream>

#ifndef CARD_HPP
#define CARD_HPP

namespace ariel {
    class Card {
    private:
        int value;
        std::string symbol;
    public:
        Card(std::string value, std::string symbol);

        Card(Card &card);

        Card();

        ~Card();

        int checkWinner(Card card);

        std::string toString();

    };
}
#endif