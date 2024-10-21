#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity {
public:
    Ship(int x, int y) : GameEntity(x, y, GameEntityType::ShipType) {}

    void move(int dx, int dy) {
        auto [x, y] = getPos(); // Get current position
        setPosition(x + dx, y + dy); // Update position using the protected setter
    }
};

#endif // SHIP_H
