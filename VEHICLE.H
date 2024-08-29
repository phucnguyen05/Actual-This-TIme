#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
class Vehicle{
    protected: 
        std::time_t timeOfEntry;
        int ID;
    public:
        Vehicle(int ID){
            this->ID=ID;
            timeOfEntry=time(0);
        }   
        int getID(){
            return ID;
        }
};

#endif 