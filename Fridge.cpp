#include "Fridge.h"

double Fridge::getPowerConsumption(){
    return powerRating*24*(volume/100);
}


