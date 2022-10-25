#pragma once

#include <iostream>
#include "magic_player.hpp"

class Game {
public:
    Player* players;
public:
    Game();
    ~Game();
    void setPlayers(std::vector<std::string> t_players);
};