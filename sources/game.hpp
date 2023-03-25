#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include "player.hpp"
#include "card.hpp"
#include <list>

namespace ariel {

    class Game {
        const static std::string cards[13];
        const static std::string symbols[4];
        Player &player1;
        Player &player2;
        std::list <std::string> turnsLog;
        int numberOfTurns;
        bool isPlaying;
        int winner;
        std::list <ariel::Card> gameDeck;
        int numberOfDraws;

    public:
        Game(Player &player1, Player &player2);

        Game(Game &game);

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

        std::list <ariel::Card> getGameDeck();

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