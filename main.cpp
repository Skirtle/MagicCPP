#include <iostream>
#include "magic_cards.hpp"
#include "magic_player.hpp"
#include "magic_game.hpp"

int main() {
    Creature bear = Creature();
    bear.setName("Grizzly Bears");
    bear.setPower(2);
    bear.setToughness(2);
    Creature cat = Creature();
    cat.setName("Sanctuary Cat");
    cat.setPower(2);
    cat.setToughness(1);

    Player dalton = Player();
    dalton.name = "Dalton";
    Player shawn = Player();
    shawn.name = "Shawn";

    return 0;
}