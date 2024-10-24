#ifndef ROBOT_H
#define ROBOT_H
#include "GridItem.hpp"
#include <cstdlib>
#include <iostream>
#include <cstdbool>

class Robot:public GridItem{
public:
    Robot(int gridWidth, int gridHeight){
        setCoordinates(0,0);
        this->health=3;
    }
    int getHealth(){
        return health;
    }

    void takeHit(){
        if(health>0){
            health--;
        }
    }
    bool move(int xOffset, int yOffset){
        if(xOffset!=0 && yOffset!=0){
            return false;
        }
        
    }

    int health;
};

#endif