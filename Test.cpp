#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

TEST_CASE("Test init Game") {
    ariel::Player p1("Chen");
    ariel::Player p2("Shira");
    ariel::Player p3("Beni");
    ariel::Game game(p1, p2);
    CHECK_THROWS(ariel::Game(p1, p3));
    CHECK_THROWS(ariel::Game(p1, p1));

    CHECK(p1.stacksize() + p2.stacksize() == 52);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);
    CHECK_THROWS(game.printLastTurn());
    CHECK_THROWS(game.printWiner());
    CHECK_THROWS(game.printLog());


}

TEST_CASE("Test play turn") {
    ariel::Player p1("Chen");
    ariel::Player p2("Shira");

    ariel::Game game(p1, p2);
    game.startGame();
    game.playTurn();
    CHECK((p1.cardesTaken() >= 1 || p2.cardesTaken() >= 1));
    CHECK(p1.stacksize() != 26);
    CHECK(p2.stacksize() != 26);
    CHECK_NOTHROW(game.printStats());
    CHECK_THROWS(game.printWiner());
    CHECK_NOTHROW(game.printLog());
}

TEST_CASE("Check game ended") {
    ariel::Player p1("Chen");
    ariel::Player p2("Shira");
    ariel::Game game(p1, p2);
    game.playAll();

    CHECK(p1.cardesTaken() + p2.cardesTaken() + p1.stacksize() + p2.stacksize() == 52);
    CHECK_THROWS(game.playTurn());
    CHECK_THROWS(game.playAll());
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(ariel::Game(p1, p2));
}


TEST_CASE("stack size changes") {
    ariel::Player p1("Chen");
    ariel::Player p2("Shira");
    ariel::Game game(p1, p2);
    int startingPoint = 26;
    for (int i = 1; i <= 10; ++i) {
        game.playTurn();
        CHECK(p1.stacksize() <= startingPoint - i);
        CHECK(p2.stacksize() <= startingPoint - i);
        CHECK((p1.cardesTaken() >= i || p2.cardesTaken() >= i));
    }
}