#include "magic.hpp"
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
void Card::setName(std::string name) {this->name = name; }

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