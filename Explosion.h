#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect {
public:
    // Constructor that initializes position and type
    Explosion(int x, int y) : GameEntity(x, y, GameEntityType::ExplosionType) {}

    // Implements the apply() function from Effect
    void apply(GameEntity& entity) override {
        // Set the position to (-1, -1) and type to NoneType
        entity.setPosition(-1, -1);
        entity.setType(GameEntityType::NoneType);
    }
};

#endif // EXPLOSION_H
