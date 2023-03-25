#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

TEST_CASE("Test init Game") {
    ariel::Player p1("Chen");
    ariel::Player p2("Shira");

    ariel::Game game(p1, p2);

    game.startGame();
    CHECK(game.getPlayer1().getPlayerName() == "Chen");
    CHECK(game.getPlayer2().getPlayerName() == "Shira");
    CHECK(game.getGameDeck().size() == 52);
    CHECK(game.getPlayer1().getDeck().size() == 26);
    CHECK(game.getPlayer2().getDeck().size() == 26);
    CHECK(game.getIsPlaying() == true);
    CHECK(game.getPlayer1().getIsPlaying() == true);
    CHECK(game.getPlayer2().getIsPlaying() == true);
}

TEST_CASE("Test play turn") {
    ariel::Player p1("Chen");
    ariel::Player p2("Shira");

    ariel::Game game(p1, p2);

    game.startGame();
    game.playTurn();
    CHECK((game.getPlayer1().getNumberOfWins() == 1 ||
           game.getPlayer2().getNumberOfWins() == 1));
    CHECK(game.getIsPlaying() == true);
    CHECK(game.getNumberOfTurns() == 1);
    CHECK(game.getWinner() == 0);
    CHECK(game.getTurnsLog().size() == 1);
}

TEST_CASE("Check game ended") {
    ariel::Player p1("Chen");
    ariel::Player p2("Shira");

    ariel::Game game(p1, p2);
    game.playAll();

    CHECK(game.getPlayer1().getIsPlaying() == false);
    CHECK(game.getPlayer2().getIsPlaying() == false);
    CHECK(game.getIsPlaying() == false);
    CHECK(game.getNumberOfTurns() >= 1);
    CHECK((game.getWinner() == 1 || game.getWinner() == 2));
    CHECK(game.getTurnsLog().size() >= 1);
    CHECK((game.getPlayer1().getDeck().size() == 0
           || game.getPlayer2().getDeck().size() == 0));
    CHECK()

}