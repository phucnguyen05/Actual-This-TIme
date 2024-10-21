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
    std::cout << "Ship moved to: (" << myShip.getPosition().x << ", " << myShip.getPosition().y << ")" << std::endl;

    // Explode the mine
    Explosion explosion = myMine.explode();
    std::cout << "Mine exploded at: (" << explosion.getPosition().x << ", " << explosion.getPosition().y << ")" << std::endl;

    // Apply the explosion effect on the ship
    explosion.apply(myShip);
    std::cout << "Ship position after explosion effect: (" << myShip.getPosition().x << ", " << myShip.getPosition().y << ")" << std::endl;

    return 0;
}
