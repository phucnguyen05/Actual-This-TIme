#include "Vehicle.h"
#include <iostream>

class ParkingLot{
    protected:
        Vehicle** vehicles;
    public:
        ParkingLot(int max_vehicles);
        ~ParkingLot();
        int getCount();
        void parkVehicle(Vehicle* car_trying_to_park);
        void unparkVehicle(int id);
        int countOverstayingVehicles(int maxParkingDuration);
    private:
        int max_capacity;
        int cout;
};