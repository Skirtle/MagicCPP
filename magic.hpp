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
    std::vector<Type> getTypes();
    std::vector<Color> getColors();
    std::string getName();
    void setTypes(std::vector<Type> types);
    void setColors(std::vector<Color> colors);
    void setName(std::string name);
    Card();
private:
    std::vector<Type> types;
    std::vector<Color> colors;
    std::string name;
};

class Permanent : public Card {
private:
    bool isTapped;
    bool isFlipped;
    bool isFaceDown;
    bool isPhasedOut;
    bool isToken;
    Permanent();
};
#endif