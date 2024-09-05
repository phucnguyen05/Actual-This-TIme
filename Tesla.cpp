#include "Tesla.h"

Tesla::Tesla(){
    batteryPercentage=100; 
}         

Tesla::Tesla(char model, int price){
    batteryPercentage=100; 
    this->model=model;
    this->price=price;
}

char Tesla::get_model(){
    return model;
}

void Tesla::set_model(char model_name){
    model=model_name;
}

void Tesla::set_batteryPercentage(float battery_status){
    if(battery_status<0){
        batteryPercentage=0;
    }else if(battery_status>100){
        batteryPercentage=100;
    }else{
        batteryPercentage=battery_status;
    }
}

float Tesla::get_batteryPercentage(){
    return batteryPercentage;
}

void Tesla::chargeBattery(int mins){
    set_batteryPercentage((mins*0.5)+batteryPercentage);
} 







