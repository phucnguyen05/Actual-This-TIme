#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
using namespace std;

class Warrior: public Player{
    public:
        Warrior(string name,int health,int damage,string weapon);
        void swingWeapon(Player* opponent);
    protected: 
        string weapon;
};
#endif