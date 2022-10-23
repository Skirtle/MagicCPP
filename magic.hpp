#ifndef MAGIC_H
#define MAGIC_H
#include <iostream>
#include <vector>

class Card {
public:
    std::vector<std::string> getTypes();
    std::vector<std::string> getColors();
    std::string getName();
    void setTypes(std::vector<std::string> types);
    void setColors(std::vector<std::string> colors);
    void setName(std::string name);
    Card();
private:
    std::vector<std::string> types;
    std::vector<std::string> colors;
    std::string name;
};

class Permanent : public Card {
private:
    bool isTapped;
    bool isFlipped;
    bool isFaceDown;
    bool isPhasedOut;
    bool isToken;
public:
    Permanent();
};

class Creature : public Permanent {
private:
    int power, toughness, damageMarked;
public:
    void setPower(int p);
    void setToughness(int t);
    void setDamage(int d);
    int getPower();
    int getToughness();
    int getDamage();
    Creature();
};


#endif