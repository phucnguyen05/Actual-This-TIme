#include "Bus.h"

Bus::Bus(int id):Vehicle(id){}

int Bus::getParkingDuration(){
    int parkingTime=difftime(time(nullptr),timeOfEntry);
    parkingTime=parkingTime*0.75;
    return parkingTime;
}
