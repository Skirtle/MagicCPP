#include "magic_game.hpp"


Game::Game() { this->players = (Player*) malloc(sizeof(Player) * 2); }
Game::~Game() { free(this->players); }
void Game::setPlayers(std::vector<std::string> t_players) {
    // Resets the game
    free(this->players);
    this->players = (Player*) malloc(sizeof(Player) * t_players.size());

    for (int i = 0; i < t_players.size(); i++) {
        Player newPlayer = Player();
        newPlayer.name = t_players[i];
        this->players[i] = newPlayer;
    }
}