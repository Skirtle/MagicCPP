#include "magic.hpp"
#include <iostream>
#include <vector>

Card::Card() { 
    this->name = "";
    this->types;
    this->colors;
}

Permanent::Permanent() { 
    this->isTapped = false;
    this->isFlipped = false;
    this->isFaceDown = false;
    this->isPhasedOut = false;
    this->isToken = false;
}