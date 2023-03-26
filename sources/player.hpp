#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include "card.hpp"
#include <list>
#include "array"

namespace ariel {
    class Player {
        const static int playerDeckSize = 26;

    private:
        std::string playerName;
        std::array <ariel::Card, playerDeckSize> deck;
        Card topCard;
        int cardsTaken;
        int getSize;
        int numberOfWins;
        double winRate;
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

        std::array <ariel::Card, playerDeckSize> getDeck();

        void setDeck(Card *deck);

        Card getTopCard();

        void setTopCard(Card card);

        int getNumberOfWins();

        void setNumberOfWins();

        bool getIsPlaying();

        void setIsPlaying();

        std::string getPlayerName();

        double getWinRate();

        void setWinRate(double winRate);

    };
}
#endif