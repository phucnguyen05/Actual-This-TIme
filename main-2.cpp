#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    // Create Ship and Mine objects
    Ship myShip(5, 5);
    Mine myMine(10, 10);

    // Move the ship
    myShip.move(2, 3);
    auto shipPos = myShip.getPos(); // Assuming getPos() returns std::tuple<int, int>
    std::cout << "Ship moved to: (" << std::get<0>(shipPos) << ", " << std::get<1>(shipPos) << ")" << std::endl;

    // Explode the mine
    Explosion explosion = myMine.explode();
    auto explosionPos = explosion.getPos(); // Assuming getPos() returns std::tuple<int, int>
    std::cout << "Mine exploded at: (" << std::get<0>(explosionPos) << ", " << std::get<1>(explosionPos) << ")" << std::endl;

    // Apply the explosion effect on the ship
    explosion.apply(myShip);
    auto newShipPos = myShip.getPos(); // Get the position after the explosion effect
    std::cout << "Ship position after explosion effect: (" << std::get<0>(newShipPos) << ", " << std::get<1>(newShipPos) << ")" << std::endl;

    return 0;
}
