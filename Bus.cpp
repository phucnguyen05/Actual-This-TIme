#include "Bus.h"

int Bus::getParkingDuration(){
    int parkingTime=difftime(time(0),timeOfEntry);
    parkingTime=parkingTime*0.75;
    return parkingTime;
}
