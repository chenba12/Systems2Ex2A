#include <iostream>
#include "Player.hpp"

using namespace std;

class Game {
    Player p1;
    Player p2;

    Game(Player p1, Player p2);

public:
    void playTurn();

    void printLastTurn();

    void playAll();

    void printWiner();

    void printLog();

    void printStats();

};