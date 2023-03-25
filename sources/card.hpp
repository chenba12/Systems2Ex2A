#include <iostream>

namespace ariel {
    class Card {
    private:
        int value;
        string symbol;
    public:
        Card(std::string value, std::string symbol);

        Card(Card &card);

        ~Card();

        int checkWinner(Card card);

        std::string toString();

    };
}
