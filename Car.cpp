#include "Car.h"

int Car::getParkingDuration(){
    int parkingTime=difftime(time(0),timeOfEntry);
    parkingTime=parkingTime*0.9;
    return parkingTime;
}