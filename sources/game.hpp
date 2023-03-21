#include <iostream>
#include "player.hpp"

using namespace std;

class Game {
    Player p1;
    Player p2;
    string *turnsPlayed;
    int numberOfTurns;
    string winner;

public:
    Game(Player p1, Player p2);

    void playTurn();

    void printLastTurn();

    void playAll();

    void printWiner();

    void printLog();

    void printStats();

    void toString();

};