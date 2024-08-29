#ifndef CAR_H
#define CAR_H
#include "VEHICLE.H"

class Car:public Vehicle{
    protected:
    public:
        int getParkingDuration();
};
#endif