#include "Tesla.h"

Tesla::Tesla(){
}

Tesla::Tesla(char model,int price){
    this->model=model;
    this->price=price;
}

void Tesla::chargeBattery(int mins){
    set_batteryPercentage(get_batteryPercentage()+(0.5*mins));
}

void Tesla::drive(int kms){
    if(kms<=get_batteryPercentage()*5){
        this->emissions=emissions+74*kms;
        set_batteryPercentage(get_batteryPercentage()-(kms/5));
    }else{
        float current_percentage=get_batteryPercentage();
        this->emissions=emissions+current_percentage*5*74;
        set_batteryPercentage(0);
    }
}

char Tesla::get_model(){
    return model;
}

float Tesla::get_batteryPercentage(){
    return batteryPercentage;
}

void Tesla::set_model(char model_number){
    this->model=model_number;
}

void Tesla::set_batteryPercentage(float percentage_number){
    if(percentage_number<0){
        batteryPercentage=0;
    }else if(percentage_number>100){
        batteryPercentage=100;
    }else{
        this->batteryPercentage=percentage_number;
    }
}

