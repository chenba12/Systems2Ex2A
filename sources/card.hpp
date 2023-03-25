#include <iostream>

using namespace std;
namespace ariel {

    class Card {
        int value;
        string symbol;
    public:
        Card(string value, string symbol);

        ~Card();

        int checkWinner(Card card);

        void toString();

    };
}
