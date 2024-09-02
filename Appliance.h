#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
    public: 
        Appliance();
        Appliance(int powerRating);
        void turnOn();
        void turnOff();
        virtual double getPowerConsumption(); 
        int get_powerRating();
        void set_powerRating(int rating);
        bool get_isOn();
        void set_isOn(bool state);

    protected:
        int powerRating;
        bool isOn;
};

#endif