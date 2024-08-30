#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus:public Vehicle{
    protected:
    public:
        Bus(int id);
        int getParkingDuration() override;
};
#endif 