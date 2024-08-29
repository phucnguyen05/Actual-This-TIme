#ifndef Motorbike_H
#define Motorbike_H
#include "VEHICLE.H"

class Motorbike:public Vehicle{
    protected:
    public:
        int getParkingDuration(){
            int parkingTime=difftime(time(0),timeOfEntry);
            parkingTime=parkingTime*0.85;
            return parkingTime;
        }
};
#endif