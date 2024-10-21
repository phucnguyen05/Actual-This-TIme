#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

// Overload operator<< for GameEntityType
std::ostream& operator<<(std::ostream& os, GameEntityType type) {
    switch (type) {
        case GameEntityType::ExplosionType: os << "ExplosionType"; break;
        case GameEntityType::MineType: os << "MineType"; break;
        case GameEntityType::NoneType: os << "NoneType"; break;
        case GameEntityType::ShipType: os << "ShipType"; break;
    }
    return os;
}

int main() {
    // Create Ship and Mine objects
    Ship myShip(5, 5);
    Mine myMine(10, 10);

    // Print the type of the ship
    std::cout << "Ship Type: " << myShip.getType() << "\n"; // Now this will work

    // Move the ship
    myShip.move(2, 3);
    auto shipPos = myShip.getPos();
    std::cout << "Ship moved to: (" << std::get<0>(shipPos) << ", " << std::get<1>(shipPos) << ")" << std::endl;

    // Explode the mine
    Explosion explosion = myMine.explode();
    auto explosionPos = explosion.getPos();
    std::cout << "Mine exploded at: (" << std::get<0>(explosionPos) << ", " << std::get<1>(explosionPos) << ")" << std::endl;

    // Apply the explosion effect on the ship
    explosion.apply(myShip);
    auto newShipPos = myShip.getPos();
    std::cout << "Ship position after explosion effect: (" << std::get<0>(newShipPos) << ", " << std::get<1>(newShipPos) << ")" << std::endl;

    return 0;
}
