#ifndef Motorbike_H
#define Motorbike_H
#include "Vehicle.h"

class Motorbike:public Vehicle{
    protected:
    public:
        virtual int getParkingDuration();
};
#endif