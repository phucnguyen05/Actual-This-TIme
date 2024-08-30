#include "Vehicle.h"

Vehicle::Vehicle(int ID){
    this->ID=ID;
    timeOfEntry=time(nullptr);
}

int Vehicle::getID(){
    return ID;
}

int Vehicle::getParkingDuration(){
    return difftime(time(nullptr),timeOfEntry);
}

Vehicle::~Vehicle(){}
