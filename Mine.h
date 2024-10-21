#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
public:
    Mine(int x, int y) : GameEntity(x, y, GameEntityType::MineType) {}

    Explosion explode() {
        // Change type to NoneType before exploding
        type = GameEntityType::NoneType;
        return Explosion(position.x, position.y);
    }
};

#endif // MINE_H
