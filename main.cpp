#include "magic.hpp"

int main() {
    Card bear = Card();
    bear.name = "Grizzly Bears";
    // bear.types = Type::Creature;
    std::cout << bear.name << " - " << std::endl;
    return 0;
}