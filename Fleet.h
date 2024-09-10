#ifndef FLEET_H
#define FLEET_H
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"
class Fleet:public Car{//,public Tesla,public Ford
public:
    Fleet();
    Car** fleet;
    Car** get_fleet();
};
#endif