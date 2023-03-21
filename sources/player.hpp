#include <iostream>

using namespace std;
namespace ariel {

}
class Player {
    string *deck;
    string topCard;
public:
    Player(string name);

    int stacksize();

    int cardesTaken();

    void printTurn();


};