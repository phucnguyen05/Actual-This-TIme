#ifndef CAR_H
#define CAR_H
#include "VEHICLE.H"

class Car:public Vehicle{
    protected:
    public:
        int getParkingDuration(){
            int parkingTime=difftime(time(0),timeOfEntry);
            parkingTime=parkingTime*0.9;
            return parkingTime;
        }
};

#endif