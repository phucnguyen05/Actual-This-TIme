#ifndef FORD_H
#define FORD_H
#include "Car.h"
class Ford:public Car{
public:
    Ford();
    Ford(int badgeNumber,int price);
    int badgeNumber;
    float litresOfFuel;
    void refuel(int litres);
    void drive(int kms);
    int get_badgeNumber();
    float get_litresOfFuel();
    void set_badgeNumber(int badgeNumber);
    void set_litresOfFuel(float fuel_ammount);
};
#endif