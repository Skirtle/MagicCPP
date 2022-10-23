#include "magic_cards.hpp"
#include <iostream>
#include <vector>

Card::Card() { 
    this->name = "";
}
std::vector<std::string> Card::getTypes() {return this->types; }
std::vector<std::string> Card::getColors() {return this->colors; }
std::string Card::getName() {return this->name; }
void Card::setTypes(std::vector<std::string> types) {this->types = types; }
void Card::setColors(std::vector<std::string> colors) {this->colors = colors; }
void Card::setName(std::string s_name) {this->name = s_name; }

Spell::Spell() { this->cmc = 0; this->mv = "";}
void Spell::setMV(std::string t_mv) {
    this->mv = t_mv;
    
    // Go through input mana value and for get the generic vs. colored mana values
    int col = 0, gen = 0;
    for (int i = 0; i < t_mv.length(); i++) {
        // Counts amount of colored symbols
        // TODO - Add ability to account for phyrexian and hybrid mana types

        char c = t_mv.at(i);
        if (isalpha(c)) {
            col++;

            // Getting card colors
            bool found = false;
            for (int j = 0; j < this->colors.size(); j++) {
                if (std::string(1, c) == this->colors.at(j))
                found = true;
                break;
            }

            // Set color of card based on mana value
            if (!found) this->colors.push_back(std::string(1,c));
        }
        // Converts char number into int number
        else gen = gen * 10 + (int(c) - 48);
    }

    this->cmc = col + gen;
}
std::string Spell::getMV() { return this->mv; }

Permanent::Permanent() { 
    this->isTapped = false;
    this->isFlipped = false;
    this->isFaceDown = false;
    this->isPhasedOut = false;
    this->isToken = false;
    Card();
}

Creature::Creature() {
    this->power = 0;
    this->toughness = 0;
    this->damageMarked = 0;
    Permanent();
}
void Creature::setPower(int p) {this->power = p; }
void Creature::setToughness(int t) {this->toughness = t; }
void Creature::setDamage(int d) {this->damageMarked = d; }
int Creature::getPower() { return this->power; }
int Creature::getToughness() { return this->toughness; }
int Creature::getDamage() { return this->damageMarked; }