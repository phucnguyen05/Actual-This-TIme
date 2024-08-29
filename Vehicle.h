#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>

class Vehicle{
    protected: 
        std::time_t timeOfEntry;
        int ID;
    public:
        Vehicle(int ID);
        int getID();
};

class Car:public Vehicle{
    protected:
    public:
        virtual int getParkingDuration();
};

class Bus:public Vehicle{
    protected:
    public:
        virtual int getParkingDuration();
};


class Motorbike:public Vehicle{
    protected:
    public:
        virtual int getParkingDuration();
};

#endif 