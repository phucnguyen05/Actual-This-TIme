#include "player.h"
using namespace std;

Player::Player(string name, int health, int damage){
    this->name=name;
    this->health=health;
    this->damage=damage;
}

void Player::attack(Player* opponent, int damage){
    opponent->health=opponent->health-damage;
}

void Player::takeDamage(int damage){
    this->health=this->health-damage;
}

int Player::getHealth(){
    return health;
}

string Player::getName(){
    return name;
}


