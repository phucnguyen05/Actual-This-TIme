#include "player.h"
#include "wizard.h"
#include "warrior.h"

void Wizard::castSpell(Player* opponent){
    this->attack(opponent,mana);
}

Wizard::Wizard(string name,int health,int damage,int mana):Player(name,health,damage),mana(mana){}
