#include "Ford.h"

Ford::Ford(){}
Ford::Ford(int badgeNumber, int price){
    this->badgeNumber=badgeNumber;
    this->price=price;
}

void Ford::refuel(int litres){
    if(litresOfFuel+litres<=60){
        litresOfFuel=litresOfFuel+litres;
    }
}
int Ford::get_litresOfFuel(){
    return litresOfFuel;
}


