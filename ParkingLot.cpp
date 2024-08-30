#include "ParkingLot.h"

ParkingLot::ParkingLot(int max_vehicles){
    max_capacity=max_vehicles;
    cout=0;
    vehicles=new Vehicle*[max_vehicles];
}

ParkingLot::~ParkingLot(){
    for(int i=0;i<cout;i++){
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount(){
    return cout;
}

void ParkingLot::parkVehicle(Vehicle* car_trying_to_park){
    if (cout<max_capacity){
        vehicles[cout]=car_trying_to_park;
        cout++;
    }else{
        std::cout<<"The lot is full"<<std::endl;
    }
}

void ParkingLot::unparkVehicle(int id){
    int found=0;
    for (int i=0;i<cout;i++){
        if(vehicles[i]->getID()==id){
            found=1;
            delete vehicles[i];
            vehicles[i]=vehicles[cout-1];
            cout--;
            break;
        }
    }
    if (found==0){
        std::cout<<"Vehicle not in the lot"<<std::endl;
    }
}

