#include "Ford.h"

Ford::Ford(){
    litresOfFuel=60;
}

Ford::Ford(int badgeNumber,int price){
    this->badgeNumber=badgeNumber;
    this->price=price;
    litresOfFuel=60;
}

void Ford::refuel(int litres){
    if(litresOfFuel+litres<=60){
        litresOfFuel+=litres;
    }else{
        litresOfFuel-60;
    }
}

int Ford::get_badgeNumber(){
    return badgeNumber;
}

float Ford::get_litresOfFuel(){
    return litresOfFuel;
}

void Ford::set_badgeNumber(int badgeNumber){
    this->badgeNumber=badgeNumber;
}

void Ford::set_litresOfFuel(float fuel_ammount){
    this->litresOfFuel=fuel_ammount;
}

void Ford::drive(int kms){
    if(kms<=get_litresOfFuel()*5){
        this->emissions=emissions+234*kms;
        set_litresOfFuel(get_litresOfFuel()-(kms/5));
    }else{
        this->emissions=emissions+get_litresOfFuel()*5*234;
        set_litresOfFuel(0);
    }
}

