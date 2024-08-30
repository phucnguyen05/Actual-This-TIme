#include "Vehicle.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Car.h"
#include "ParkingLot.h"
#include <iostream>
using namespace std;

int main(){
    ParkingLot test(10);
    for (int i=0;i<10;i++){
        cout<<"enter Vehicle: "<<endl;
        char user_input[100];
        cin>> user_input;
        if(user_input=="Car"){
            test.parkVehicle(new Car(i));
        }else if(user_input=="Bus"){
            test.parkVehicle(new Bus(i));
        }else if(user_input=="Motorbike"){
            test.parkVehicle(new Motorbike(i));
        }
    }
    return 1;
}