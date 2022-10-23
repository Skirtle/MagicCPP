#ifndef MAGIC_CARDS_H
#define MAGIC_CARDS_H
#include <iostream>
#include <vector>

class Card {
public:
    std::vector<std::string> getTypes();
    std::vector<std::string> getColors();
    std::string getName();
    void setTypes(std::vector<std::string> types);
    void setColors(std::vector<std::string> colors);
    void setName(std::string s_name);
    Card();
protected:
    std::vector<std::string> types;
    std::vector<std::string> colors;
    std::string name;
};

class Spell : virtual public Card {
protected:
    int cmc;
    std::string mv;
public:
    void setMV(std::string t_mv);
    std::string getMV();
    Spell();
};

class Permanent : virtual public Card {
protected:
    bool isTapped;
    bool isFlipped;
    bool isFaceDown;
    bool isPhasedOut;
    bool isToken;
public:
    Permanent();
};

class Creature : public Permanent, public Spell {
protected:
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

class Land : public Permanent {

};


#endif