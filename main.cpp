#include <iostream>
// #include "magic_cards.hpp"
// #include "magic_player.hpp"
#include "magic_game.hpp"

int main() {
    Game game = Game();
    game.setPlayers(std::vector<std::string> {"Shawn", "Dalton", "Rocco", "Jett"});
    
    
    return 0;
}