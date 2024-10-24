#ifndef GOAL_H
#define GOAL_H
#include "GridItem.hpp"
#include <cstdlib>
#include <iostream>
#include <cstdbool>
#include <iostream>
#include "Robot.hpp"
#include "Interactable.hpp"
#include "Helper.hpp"

class Goal:public Interactable{
public:
    Goal(int width, int height){
        this->width=width;
        this->height=height;
    }


    bool interact(Robot* player){
        if(Helper::euclideanDistance(player->coordinates,this->coordinates)==0){
            return true;
        }else{
            return false;
        }
    }

    InteractableType getType(){
        return InteractableType::GOAL;
    }

};


#endif