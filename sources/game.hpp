#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include "player.hpp"
#include "card.hpp"
#include <list>
#include <array>

namespace ariel {
    class Game {
        const static int cardValues = 14;
        const static int cardsSymbols = 4;
        const static int gameDeckSize = 52;
        const static std::array <std::string, cardValues> cards;
        const static std::array <std::string, cardsSymbols> symbols;
        Player &player1;
        Player &player2;
        std::list <std::string> turnsLog;
        int numberOfTurns;
        bool isPlaying;
        int winner;
        std::array <ariel::Card, gameDeckSize> gameDeck;
        int numberOfDraws;

    public:
        Game(Player &player1, Player &player2);

        Game();

        ~Game();

        void playTurn();

        void printLastTurn();

        void playAll();

        void printWiner();

        void printLog();

        void printStats();

        std::string toString();

        std::list <std::string> getTurnsLog();

        Player getPlayer1();

        void setPlayer1(Player player);

        Player getPlayer2();

        void setPlayer2(Player player);

        bool getIsPlaying();

        void setIsPlaying();

        std::array <ariel::Card, gameDeckSize> getGameDeck();

        void createGameDeck();

        void startGame();

        int getNumberOfTurns();

        void setNumberOfTurns();

        int getWinner();

        void setWinner();

        int getNumberOfDraws();

        void setNumberOfDraws();
    };
}
#endif