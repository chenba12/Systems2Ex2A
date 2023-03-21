#include <iostream>
#include "card.hpp"

using namespace std;
namespace ariel {

}
class Player {
    Card *deck;
    Card topCard;
public:
    Player(string name);

    int stacksize();

    int cardesTaken();

    void printTurn();

    void toString();

};