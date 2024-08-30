#ifndef Motorbike_H
#define Motorbike_H
#include "Vehicle.h"

class Motorbike:public Vehicle{
    protected:
    public:
        Motorbike(int id);
        int getParkingDuration() override;
};
#endif