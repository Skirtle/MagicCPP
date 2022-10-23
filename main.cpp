#include <iostream>
#include "magic_cards.hpp"
// #include "magic_player.hpp"
// #include "magic_game.hpp"

int main() {
    Creature the_ur_dragon = Creature();
    the_ur_dragon.setName("The Ur-Dragon");
    the_ur_dragon.setPower(10);
    the_ur_dragon.setToughness(10);
    the_ur_dragon.setMV("4WUBRG");
    the_ur_dragon.setTypes(std::vector<std::string> {"Legendary", "Creature", "Dragon", "Avatar"});

    std::cout << the_ur_dragon.getName() << " - " << the_ur_dragon.getMV() << std::endl;
    std::cout << the_ur_dragon.getPower() << "/" << the_ur_dragon.getToughness() << std::endl;

    for (int i = 0; i < the_ur_dragon.getTypes().size(); i++) {
        std::cout << the_ur_dragon.getTypes().at(i) << " ";
    }
    std::cout << std::endl;

    std::cout << "Colors: ";
    for (int i = 0; i < the_ur_dragon.getColors().size(); i++) {
        std::cout << the_ur_dragon.getColors().at(i);
    }
    std::cout << std::endl;

    return 0;
}