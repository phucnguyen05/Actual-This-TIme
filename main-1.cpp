#include <iostream>
#include "Utils.h"
#include "GameEntity.h"

int main() {
    const int gridWidth = 100;
    const int gridHeight = 100;

    auto pos1 = Utils::generateRandomPos(gridWidth, gridHeight);
    auto pos2 = Utils::generateRandomPos(gridWidth, gridHeight);

    double distance = Utils::calculateDistance(pos1, pos2);

    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";
    std::cout << "Distance: " << distance << "\n";

    return 0;
}
