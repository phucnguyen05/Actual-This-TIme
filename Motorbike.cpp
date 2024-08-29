#include "Motorbike.h"

int Motorbike::getParkingDuration(){
    int parkingTime=difftime(time(0),timeOfEntry);
    parkingTime=parkingTime*0.85;
    return parkingTime;
}