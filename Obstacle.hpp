#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "GridItem.hpp"
#include <cstdlib>
#include <iostream>
#include <cstdbool>
#include <iostream>
#include "Robot.hpp"
#include "Interactable.hpp"
#include "Helper.hpp"
class Obstacle:public Interactable{
public:
    Obstacle(int x, int y, int width, int height){
        coordinates.first=x;
        coordinates.second=y;
        this->width=width;
        this->height=height;
    }
    bool interact(Robot* player) override{
        if(Helper::euclideanDistance(player->coordinates,this->coordinates)==0 && player->health!=0){
            player->takeHit();
            player->health=2;
            return true;
        }else if(Helper::euclideanDistance(player->coordinates,this->coordinates)==0 && player->health==0){
            player->health=0;
            return false;
        }
    }



    InteractableType getType() override{
        return InteractableType::OBSTACLE;
    }

};
#endif

//Inherits from Interactable.
//Has constructor Obstacle(int x, int y, int width, int height)
//Defines the interact function to call the Robot's takeHit function if the euclidean distance between the obstacle and robot is zero. If the euclidean distance is zero and the robot's health is zero then return true and false otherwise
//Defines the getType function to return OBSTACLE InteractableType