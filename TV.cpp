#include "TV.h"

double TV::getPowerConsumption(){
    return powerRating*(screenSize/10);
}

double TV::getScreenSize(){
    return screenSize;
}

void TV::setScreenSize(double screenSize){
    this->screenSize=screenSize;
}

TV::TV(int powerRating,double screenSize){
    this->powerRating=powerRating;
    this->screenSize=screenSize;
}

TV::TV(){
    
}



