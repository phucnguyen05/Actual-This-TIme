#ifndef BUS_H
#define BUS_H

#include "VEHICLE.H"

class Bus:public Vehicle{
    protected:
    public:
        int getParkingDuration(){
            int parkingTime=difftime(time(0),timeOfEntry);
            parkingTime=parkingTime*0.75;
            return parkingTime;
        }
};
#endif 