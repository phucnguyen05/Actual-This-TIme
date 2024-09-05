#ifndef TESLA_H
#define TESLA_H
#include "Car.h"

class Tesla: public Car{
public:
    Tesla();            
    Tesla(char model, int price);  
    void chargeBattery(int mins);            
    void drive(int kms);
    float get_batteryPercentage();
    char get_model();
    void set_model(char model_name);
    void set_batteryPercentage(float battery_status);
    void drive(int kms);
protected:
    char model;
    float batteryPercentage;      // Initially 100%
};
#endif 