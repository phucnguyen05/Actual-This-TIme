#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>
#include <iostream>

enum class GameEntityType {
    ExplosionType,
    MineType,
    NoneType,
    ShipType
};

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
