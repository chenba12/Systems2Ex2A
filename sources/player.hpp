#include <iostream>
#include "card.hpp"

namespace ariel {
    class Player {
    private:
        std::playerName;
        Card *deck;
        Card topCard;
        int cardsTaken;
        int getSize;
        int numberOfWins;
        bool isPlaying;
    public:
        Player(std::string playerName);

        Player(Player &player);

        ~Player();

        int stacksize();

        int cardesTaken();

        void setCardsTaken(int cardsTaken);

        void printTurn();

        std::string toString();

        Card *getDeck();

        void setDeck(Card *deck);

        Card getTopCard();

        void setTopCard(Card card);

        int getDeckSize();

        int setDeckSize();

        int getNumberOfWins();

        void setNumberOfWins();

        bool getIsPlaying();

        void setIsPlaying();

        std::string getPlayerName();

    };
}