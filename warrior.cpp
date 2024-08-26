#include "wizard.h"
#include "player.h"
#include "warrior.h"

void Warrior::swingWeapon(Player* opponent){
    this->attack(opponent,this->damage);
}

Warrior::Warrior(string name,int health,int damage,string weapon):Player(name,health,damage),weapon(weapon){}
