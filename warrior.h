#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"
#include <string>
using namespace std;

class Warrior: public Player{
    public:
        void swingWeapon(Player* opponent);
    protected: 
        string weapon;
};
#endif