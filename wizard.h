#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"

class Wizard: public Player{
    public:
        void castSpell(Player* opponent);
    protected:
        int mana;
};

#endif