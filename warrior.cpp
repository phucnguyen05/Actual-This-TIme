#include "wizard.h"
#include "player.h"
#include "warrior.h"

void Warrior::swingWeapon(Player* opponent){
    this->attack(opponent,this->damage);
}
