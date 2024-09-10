#ifndef CAR_H
#define CAR_H

class Car{
public: 
    Car();
    Car(int price);
    int price;
    int emissions;
    virtual void drive(int kms);
    int get_price();
    void set_price(int price);
    int get_emissions();
    void set_emissions(int emissions);
};
#endif