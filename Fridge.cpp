#include "Fridge.h"

double Fridge::getPowerConsumption(){
    return powerRating*24*(volume/100);
}

Fridge::Fridge(){

}

double Fridge::getVolume(){
    return volume;
}

void Fridge::setVolume(double volume){
    this->volume=volume;
}

Fridge::Fridge(int powerRating,double volume){
    this->powerRating=powerRating;
    this->volume=volume;
}


