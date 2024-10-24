#ifndef INTERACTABLE_H
#define INTERACTABLE_H
#include "GridItem.hpp"
#include <cstdlib>
#include <iostream>
#include <cstdbool>
#include <iostream>
#include "Robot.hpp"

enum class InteractableType{
    GOAL,OBSTACLE
};

class Interactable:public GridItem{
    Interactable(int x, int y, int width, int height){
        coordinates.first=x;
        coordinates.second=y;
        this->width=width;
        this->height=height;
        *GridItemCount++;
    }

    Interactable(){
        coordinates.first=0;
        coordinates.second=0;
        this->width=0;
        this->height=0; 
        GridItemCount++;
    }

    virtual bool interact(Robot* player)=0;
    virtual InteractableType getType()=0;

    int getActiveInteractableCount(){
        return GridItemCount;
    }

    ~Interactable(){
        GridItemCount--;
    }
};

#endif