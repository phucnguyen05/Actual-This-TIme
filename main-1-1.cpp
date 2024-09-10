#include "Car.h"
#include <iostream>

int main(){
    Car toyota;
    toyota.set_emissions(10);
    int number=toyota.get_emissions();
    std::cout<<"emission is: "<<number<<std::endl;
    return 1;
}