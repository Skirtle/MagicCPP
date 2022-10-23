#include "magic.hpp"

int main() {
    Card bear = Card();
    bear.setName("Grizzly Bears");
    bear.setColors(std::vector<Color> {Green});
    // bear.types = Type::Creature;
    std::cout << bear.getName() << " - [";
    for (int i = 0; i < bear.getColors().size(); i++) {
        std::cout << bear.getColors()[i] << " ";
    }
    std::cout << "]\n";
    return 0;
}