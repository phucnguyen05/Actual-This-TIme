#ifndef CAR_H
#define CAR_H
class Car{
public: 
    Car();
    Car(int price);   // creates a Car with a price
    int get_price();
    void set_price(int price);
    int get_emissions();
    void set_emissions(int emissions);
    virtual void drive(int kms);
protected:
    int price;
    int emissions;   // CO2 Emissions
};
#endif