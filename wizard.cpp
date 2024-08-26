#include "wizard.h"
#include "player.h"

void Wizard::castSpell(Player* opponent){
    opponent->attack(opponent,mana);
    // opponent->health=opponent->health-this->mana;
    // health = 10;
}