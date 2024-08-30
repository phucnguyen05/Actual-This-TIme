#include "Car.h"

Car::Car(int id):Vehicle(id){}

int Car::getParkingDuration(){
    int parkingTime=difftime(time(nullptr),timeOfEntry);
    parkingTime=parkingTime*0.9;
    return parkingTime;
}
