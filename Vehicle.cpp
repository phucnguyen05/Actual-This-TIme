#include "vehicle.h"

Vehicle::Vehicle(int ID){
    this->ID=ID;
}

int Vehicle::getID(){
    return ID;
}

int Car::getParkingDuration(){
    int parkingTime=difftime(time(0),timeOfEntry);
    parkingTime=parkingTime*0.9;
    return parkingTime;
};

int Bus::getParkingDuration(){
    int parkingTime=difftime(time(0),timeOfEntry);
    parkingTime=parkingTime*0.75;
    return parkingTime;
}

int Motorbike::getParkingDuration(){
    int parkingTime=difftime(time(0),timeOfEntry);
    parkingTime=parkingTime*0.85;
    return parkingTime;
}


