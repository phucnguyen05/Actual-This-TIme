#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

enum class GameEntityType {
    ExplosionType,
    MineType,
    NoneType,
    ShipType
};

class GameEntity {
public:
    GameEntity(int x, int y, GameEntityType type)
        : position(std::make_tuple(x, y)), type(type) {}

    std::tuple<int, int> getPos() const {
        return position;
    }

    GameEntityType getType() const {
        return type;
    }

    // Change to public
    void setPosition(int x, int y) {
        position = std::make_tuple(x, y);
    }

    void setType(GameEntityType newType) {
        type = newType;
    }

private:
    std::tuple<int, int> position;
    GameEntityType type;
};

#endif // GAMEENTITY_H
