#include "Vehicle.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Car.h"
#include <iostream>
using namespace std;

int main(){
    int user_input;
    cin>>user_input;
    Vehicle** all_vehicles=new Vehicle[user_input];

    for (int i=0;i<user_input;i++){
        cout<<"enter Vehicle: "<<endl;
        char user_input[100];
        cin>> user_input;
        if(user_input=="Car"){
            all_vehicles[i]=new Car;
        }else if(user_input=="Bus"){
            all_vehicles[i]=Bus;
        }else if(user_input=="Motorbike"){
            all_vehicles[i]=Motorbike;
        }
    }
    for (int i=0;i<user_input;i++){
        all_vehicles[i].getParkingDuration();
    }
    return 1;
}