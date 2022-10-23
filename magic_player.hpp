#pragma once
#include <iostream>
#include "magic_cards.hpp"

class Player {
private:
    std::vector<Card> library;
    std::vector<Card> hand;
    std::vector<Card> graveyard;
    std::vector<Card> exile;
    std::vector<Card> battlefield;
public:
    std::string name;
    int getHandSize();
    void addCard(Card card);
    Player();
};