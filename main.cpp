#include <iostream>
#include "magic.hpp"

int main() {
    Creature bear = Creature();

    int p = 2, t = 2, d = 0;
    bear.setName("Grizzly Bears");
    bear.setColors(std::vector<std::string> {"Green"});
    bear.setTypes(std::vector<std::string> {"Creature", "Bear"});
    bear.setPower(p);
    bear.setToughness(t);

    std::cout << bear.getName() << " - " << bear.getPower() << "/" << bear.getToughness() << std::endl;
    return 0;
}