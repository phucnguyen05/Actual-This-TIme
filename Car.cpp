#include "Car.h"

Car::Car(){
    emissions=0;
}

Car::Car(int price){
    emissions=0;
    this->price=price;
}

int Car::get_price(){
    return price;
}

int Car::get_emissions(){
    return emissions;
}

void Car::set_price(int price){
    this->price=price;
}

void Car::set_emissions(int emissions){
    this->emissions=emissions;
}

void Car::drive(int kms){
    this->emissions=20*kms;
}

Car::~Car{
    
}


