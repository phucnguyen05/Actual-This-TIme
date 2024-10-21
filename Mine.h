#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
public:
    // Constructor that initializes the position and type
    Mine(int x, int y) : GameEntity(x, y, GameEntityType::MineType) {}

    // Function to simulate the explosion and return an Explosion object
    Explosion explode() {
        // Change the type to NoneType after exploding
        setType(GameEntityType::NoneType);
        
        // Return an Explosion object at the mine's current position
        auto pos = getPos(); // Assuming getPos() returns std::tuple<int, int>
        return Explosion(std::get<0>(pos), std::get<1>(pos));
    }
};

#endif // MINE_H
