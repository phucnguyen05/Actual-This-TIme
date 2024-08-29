#include "Vehicle.h"

Vehicle::Vehicle(int ID){
    this->ID=ID;
    timeOfEntry=time(0);
}

int Vehicle::getID(){
    return ID;
}
