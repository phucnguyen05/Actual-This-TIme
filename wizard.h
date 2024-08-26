#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"
using namespace std;
#include <string>

class Wizard: public Player{
    public:
        Wizard(string name,int health,int damage,int mana);
        void castSpell(Player* opponent);
    protected:
        int mana;
};

#endif