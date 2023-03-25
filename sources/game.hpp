#include <iostream>
#include "player.hpp"

using namespace std;
namespace ariel {

    class Game {
        Player player1;
        Player player2;
        string *turnsPlayed;
        int numberOfTurns;
        string winner;

    public:
        Game(Player &player1, Player &player2);

        ~Game();

        void playTurn();

        void printLastTurn();

        void playAll();

        void printWiner();

        void printLog();

        void printStats();

        std::string toString();

    };
}
