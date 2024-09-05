#include "Car.h"
#ifndef TESLA_H
#define TESLA_H

class Tesla: public Car {
public:
    Tesla();            
    Tesla(char model, int price);  
    void drive(int kms) override; 
    void chargeBattery(int mins);            
    float get_batteryPercentage(); 
    char get_model(); 
    void set_model(char model_name);
    void set_batteryPercentage(float battery_status);
    ~Tesla();

protected:
    char model;
    float batteryPercentage; 
};

#endif
