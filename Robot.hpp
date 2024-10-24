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
        this->gridHeight=gridHeight;
        this->gridWidth=gridWidth;
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
        if(xOffset!=0){
            int current_x=coordinates.first;
            if(current_x+xOffset>gridWidth-1){
                return false;
            }else{
                coordinates.first=coordinates.first+xOffset;
            }
        }else{//y offset movement
            int current_y=coordinates.second;
            if(current_y+yOffset>gridHeight-1){
                return false;
            }else{
                coordinates.second=(coordinates.second+yOffset)*-1;
            }
        }

    }

    int health;
    int gridWidth;
    int gridHeight;
};

#endif