#ifndef MAGIC_H
#define MAGIC_H
#include <iostream>
#include <vector>

enum Type {
    Creature, Land, Artifact, Enchantment, Instant, Sorcery, Planeswalker, Dungeon, Tribal
};

enum Color {
    White, Blue, Black, Red, Green
};

class Card {
public:
    std::vector<Type> types;
    std::vector<Color> colors;
    std::string name;
    Card();
};

class Permanent : public Card {
public:
    bool isTapped;
    bool isFlipped;
    bool isFaceDown;
    bool isPhasedOut;
    bool isToken;
    Permanent();
};
#endif