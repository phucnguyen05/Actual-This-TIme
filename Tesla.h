#ifndef TESLA_H
#define TESLA_H
#include "Car.h"

class Tesla:public Car{
public:
    Tesla();
    Tesla(char model,int price);
    char model;
    float batteryPercentage;
    void chargeBattery(int mins);
    void drive(int kms);
    char get_model();
    float get_batteryPercentage();
    void set_model(char model_number);
    void set_batteryPercentage(float percentage_number);
};
#endif