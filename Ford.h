#ifndef FORD_H
#define FORD_H
#include "Car.h"
class Ford:public Car{
public:
    Ford();            
    Ford(int badgeNumber, int price);  
  
    int badgeNumber;
    float litresOfFuel;      // Initially 60L

    void refuel(int litres);
    void drive(int kms); 
    int get_litresOfFuel();
    
};
#endif
