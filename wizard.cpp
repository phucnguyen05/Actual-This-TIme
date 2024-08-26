#include "wizard.h"
#include "player.h"
#include "player.cpp"

void Wizard::castSpell(Player* opponent){
    this->attack(opponent,mana);
}

Wizard::Wizard(string name,int health,int damage,int mana):Player(name,health,damage),mana(mana){}
