#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
    public: 
        Appliance();
        Appliance(int powerRating);
        void turnOn();
        void turnOff();
        virtual double getPowerConsumption(); 

    protected:
        int powerRating;
        bool isOn;
};

#endif