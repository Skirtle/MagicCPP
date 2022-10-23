#include "magic.hpp"
#include <iostream>
#include <vector>

Card::Card() { 
    this->name = "";
    //this->types;
    //this->colors;
}
std::vector<Type> Card::getTypes() {return this->types; }
std::vector<Color> Card::getColors() {return this->colors; }
std::string Card::getName() {return this->name; }
void Card::setTypes(std::vector<Type> types) {this->types = types; }
void Card::setColors(std::vector<Color> colors) {this->colors = colors; }
void Card::setName(std::string name) {this->name = name; }

Permanent::Permanent() { 
    this->isTapped = false;
    this->isFlipped = false;
    this->isFaceDown = false;
    this->isPhasedOut = false;
    this->isToken = false;
}