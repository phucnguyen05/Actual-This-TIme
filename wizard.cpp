#include "wizard.h"
#include "player.h"

void Wizard::castSpell(Player* opponent){
    this->attack(opponent,mana);
}