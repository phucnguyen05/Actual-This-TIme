#include "Appliance.h"
#ifndef TV_H
#define TV_H

class TV: public Appliance{
    public:
        TV();
        TV(int powerRating,double screenSize);
        void setScreenSize(double screenSize);
        double getscreenSize();
        double getPowerConsumption();
    protected: 
        double screenSize;
};
#endif