#include "magic_player.hpp"

Player::Player() {
    this->name = "\0";
    this->library = std::vector<Card> {};
    this->hand = std::vector<Card> {};
    this->graveyard = std::vector<Card> {};
    this->exile = std::vector<Card> {};
    this->battlefield = std::vector<Card> {};
}
int Player::getHandSize() {
    return this->hand.size();
}
void Player::addCard(Card card) {
    this->hand.push_back(card);
}